import mmap, os, time

psize = 4096

WAIT = 0
DOUT = 1
DIN  = 2
TERM = 3


def read_data(mm):
    rdata = int.from_bytes(mm.read(psize), "little")
    mm.seek(0)
    return rdata


def write_data(mm, value):
    mm.write(int(value).to_bytes(psize, "little"))
    mm.seek(0)


if __name__ == "__main__":
    out = mmap.mmap(os.open("out.dat", os.O_RDWR), psize)
    sig = mmap.mmap(os.open("sig.dat", os.O_RDWR), psize)

    count = 0

    while True:
        sig_value = read_data(sig)
        while sig_value != WAIT:
            sig_value = read_data(sig)
        
        write_data(out, count)
        count += 1

        if count >= 100:
            write_data(sig, TERM)
            break

        write_data(sig, DIN)

    out.close()
    sig.close()
