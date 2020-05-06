#include<stdio.h>

int main(void)
{
    int arr[4][2] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("%d\n", *(arr)[1]);
    printf("%d\n", (*(arr))[1]);
    return 0;
}
