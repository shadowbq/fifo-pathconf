#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
  {
    long value;

    value = fpathconf( 0, _PC_PIPE_BUF );
    printf( "FIFO atomic buffer size is %ld bytes\n",
        value );
    return EXIT_SUCCESS;
  }
