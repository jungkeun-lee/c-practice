#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
} inventory[MAX_PARTS];

int num_parts;

int main(void)
{
    FILE *fp;
    int i;
    num_parts = 3;
    struct part inventory[] = {{1, "JK", 47}, {2, "SY", 20}, {3, "JS", 16}};

    for (i = 0; i < num_parts; i++)
        printf("%d, %s, %d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);

    if((fp = fopen("inventory.txt", "w")) == NULL) {
        fprintf(stderr, "Can't open inventory file\n");
        exit(EXIT_FAILURE);
    }
/*
    num_parts = fread(inventory, sizeof(struct part), MAX_PARTS, fp);
    printf("%d\n", num_parts);

    for (i = 0; i < num_parts; i++)
        inventory[i].on_hand = 0;

    rewind (fp);
*/
    fwrite(inventory, sizeof(struct part), num_parts, fp);
    fclose(fp);

    return 0;
}
