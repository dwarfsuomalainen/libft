#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using malloc
    int *arr_malloc = (int *)malloc(5 * sizeof(int));
    if (arr_malloc != NULL) {
        // Values are undetermined
        for (int i = 0; i < 5; ++i) {
            printf("%d ", arr_malloc[i]);  // Could be any value
        }
        free(arr_malloc);
    }

    // Using calloc
    int *arr_calloc = (int *)calloc(5, sizeof(int));
    if (arr_calloc != NULL) {
        // Values are initialized to zero
        for (int i = 0; i < 5; ++i) {
            printf("%d ", arr_calloc[i]);  // Always 0
        }
        free(arr_calloc);
    }

    return 0;
}
