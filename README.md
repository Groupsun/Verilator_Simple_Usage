# Verilator Simple Usage

Use Decoder.v as an example. Use File I/O to get input data.

## Generate executable file

```bash
$ verilator --cc Decoder.v --exe Decoder_Sim.cpp --trace
$ make -j -C ./obj_dir -f VDecoder.mk VDecoder
```

## Generate .vcd file

```bash
$ ./obj_dir/VDecoder
```

Use gtkwave to view the wave.
