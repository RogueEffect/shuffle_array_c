
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int arr[1000];
int len = 0;

void shuffle(int*, int);



int main(int argc, char **argv) {
    srand(time(0));
    if(argc < 2) {
        printf("usage: %s <1 2 3 ...>\n", argv[0]);
        return 0;
    }
    for(int i = 1; i < argc; i++) {
        sscanf(argv[i], "%d", &arr[len++]);
    }
    shuffle(arr, len);
    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



void shuffle(int *arr, int len) {
    int i = len - 1;
    while(i > 1) {
        int n = rand() % (i + 1);
        int temp = arr[n];
        arr[n] = arr[i];
        arr[i--] = temp;
    }
}
