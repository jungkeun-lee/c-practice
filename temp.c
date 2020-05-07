#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    FILE *fp;
    int num_parts = 3;
    int a[] = {1, 2, 3};

    if((fp = fopen("temp.txt", "w")) == NULL) {
        fprintf(stderr, "Can't open inventory file\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < num_parts; i++)
        printf("%d\n", a[i]);

    fwrite(a, sizeof(int), num_parts, fp);
    fclose(fp);

    return 0;
}
