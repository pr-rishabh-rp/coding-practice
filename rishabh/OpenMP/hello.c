#include <stdio.h>
#include <omp.h>

int main() {
    omp_set_num_threads(4);

    // Parallel region
    #pragma omp parallel
    {
        int thread_id = omp_get_thread_num();
        printf("Hello from thread %d\n", thread_id);
    }

    return 0;
}