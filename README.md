# fifo-pathconf
simple FIFO buffer check

```shell
gcc fifo-pathconf.c

./a.out
```

PERL Version
```perl
perl -MPOSIX=_POSIX_PIPE_BUF -e 'print _POSIX_PIPE_BUF, "\n"'
```
