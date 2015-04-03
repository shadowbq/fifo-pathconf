# fifo-pathconf
simple FIFO buffer check

```shell
$> gcc fifo-pathconf.c
$> ./a.out
FIFO atomic buffer size is 4096 bytes
```

PERL Version (to look at limit.h, not the PC_PIPE_BUX) 
```perl
$> perl -MPOSIX=_POSIX_PIPE_BUF -e 'print _POSIX_PIPE_BUF, "\n"'
512
```
This should always be 512 as PC is currenl relevant and POSIX is 
http://www.gnu.org/software/libc/manual/html_node/Limits-for-Files.html#Limits-for-Files
