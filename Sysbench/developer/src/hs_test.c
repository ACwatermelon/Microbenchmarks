#include <stdio.h>
#include "sysbench.h"
#include "superpi/superpi.h"
#include "dhrystone/dry.h"
#include "stream/stream.h"

#define HLINE "\n-------------------------------------------------------------\n"

int main()
{
    double superpi_time;
    double sysbench_memory_read_bandwith;
    double sysbench_memory_write_bandwith;
    float dhrystone_per_second;
    double stream_memory_rw_bandwith;
    double sysbench_threads_events_avg;
    double sysbench_IO_rand_read_iops;
    double sysbench_IO_rand_write_iops;
    double sysbench_IO_seq_read_bandwith;
    double sysbench_IO_seq_write_bandwith;

    printf("multiply test start");
    printf(HLINE);

    printf("Compute Strength\n");

    superpi_time = superpi_float_point_test();
    printf("\nSuperPi_float_point_test() elapse_time = %.3f s\n", superpi_time);
    printf(HLINE);

    // dhrystone_per_second = dhrystone_integer_test();
    // printf("\ndhrystone_integer_test() =%10.0f Dhrystone Per Second\n", dhrystone_per_second);
    // printf(HLINE);

    // sysbench_threads_events_avg = sysbench_threads_test();
    // printf("\nsysbench_threads_test events_avg = %.3f\n", sysbench_threads_events_avg);
    // printf(HLINE);

    printf("I/O Strength\n");

    sysbench_IO_rand_read_iops = sysbench_IO_rnd_read_test();
    printf("\nsysbench_IO_rnd_read_test IOPS = %.0f\n", sysbench_IO_rand_read_iops);
    printf(HLINE);

    sysbench_IO_rand_write_iops = sysbench_IO_rnd_write_test();
    printf("\nsysbench_IO_rand_write_test IOPS = %.0f\n", sysbench_IO_rand_write_iops);
    printf(HLINE);

    // sysbench_IO_seq_read_bandwith = sysbench_IO_seq_read_test();
    // printf("\nsysbench_IO_seq_read_test bandwith = %.3f MB/s\n", sysbench_IO_seq_read_bandwith);
    // printf(HLINE);

    // sysbench_IO_seq_write_bandwith = sysbench_IO_seq_write_test();
    // printf("\nsysbench_IO_seq_write_test bandwith = %.3f MB/s\n", sysbench_IO_seq_write_bandwith);
    // printf(HLINE);

    printf("Memory Strength\n");

    sysbench_memory_read_bandwith = sysbench_memory_read_test();
    printf("\nsysbench_memory_read_test bandwith = %.3f MB/s\n", sysbench_memory_read_bandwith);
    printf(HLINE);

    // sysbench_memory_write_bandwith = sysbench_memory_write_test();
    // printf("\nsysbench_memory_write_test bandwith = %.3f MB/s\n", sysbench_memory_write_bandwith);
    // printf(HLINE);

    // stream_memory_rw_bandwith = stream_memory_rw_test();
    // printf("\nstream_memory_rw_test bandwith = %.3f MB/s\n", stream_memory_rw_bandwith);
    // printf(HLINE);

    return 0;
}