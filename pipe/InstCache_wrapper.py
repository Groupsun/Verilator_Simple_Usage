import mmap, os, time

psize = 4096
uint64_t_size = 8

WAIT = 0
DOUT = 1
DIN  = 2
TERM = 3
STEP = 4
START = 5
RESET = 6

addr = 2
inst = 0

mm_in = mmap.mmap(os.open("in.dat", os.O_RDWR), psize)
mm_sig = mmap.mmap(os.open("sig.dat", os.O_RDWR), psize)
mm_out = mmap.mmap(os.open("out.dat", os.O_RDWR), psize)


def read_data(mm):
    rdata = int.from_bytes(mm.read(uint64_t_size), "little")
    mm.seek(0)
    return rdata


def write_data(mm, value):
    mm.write(int(value).to_bytes(uint64_t_size, "little"))
    mm.seek(0)


def wait_signal():
    signal = read_data(mm_sig)
    while signal != WAIT:
        signal = read_data(mm_sig)


def poke(signum, value):
    wait_signal()
    write_data(mm_in, value)
    mm_in.seek(uint64_t_size)
    write_data(mm_in, signum)
    write_data(mm_sig, DIN)


def peek(signum):
    wait_signal()
    mm_out.seek(uint64_t_size)
    write_data(mm_out, signum)
    write_data(mm_sig, DOUT)
    wait_signal()
    print(signum, read_data(mm_out))


def step():
    wait_signal()
    write_data(mm_sig, STEP)


def term():
    wait_signal()
    write_data(mm_sig, TERM)


if __name__ == "__main__":
    in_addr = 0

    for i in range(0, 16):
        print("step ", i)
        poke(addr, in_addr)
        step()
        peek(inst)
        in_addr += 4
    
    term()

    mm_in.close()
    mm_sig.close()
    mm_out.close()