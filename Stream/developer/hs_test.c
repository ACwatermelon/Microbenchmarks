#include <stdio.h>
#include "stream.h"

int main()
{
    double bandwith;
    bandwith = stream_memory_rw_test();
    printf("hs stream memory test bandwith = %.1f MB/s\n", bandwith);
}