9pfuse
======

This is a standalone version of `9pfuse`, a FUSE client for the 9P protocol
as included in [Plan9 Port](http://swtch.com/plan9port). The source code has
been imported from the `src/cmd/9pfuse` directory of the repository, adding
the minimum set of needed sources from `src/lib9`, `src/libthread` and
`src/lib9pclient` directories to make it build correctly.


Building 9pfuse
---------------

As a bonus, a ready-to-use `Makefile` that will work under recent GNU/Linux
sustems has been included: just run `make` from the source directory.


proger's fork
-------------

This is an attempt to create a working 9p2000u-capable port.
Tested together with [eoxmount branch 9pfuse](//github.com/proger/eoxmount/tree/9pfuse).

Caveats
-------

see [test/getdents.c](./test/getdents.c)

Try running:

```
./getdents 1024 /tmp/proc   # fuse payload is 4k so if the payload is > 1k & < 4k you may see missing data. investigating
./getdents 32768 /tmp/proc
```

