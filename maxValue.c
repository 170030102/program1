#include <stdio.h>
int main() {
    int i, n;
    int arr[]={1,2,3,4,5};
   
    for (i = 1; i < n; ++i) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    printf("Largest element = %d", arr[0]);
    return 0;
}