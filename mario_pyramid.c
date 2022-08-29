#include <stdio.h>

int main() {
    int height;
    int current_height;
    int space_width;
    int hash_width;
    printf("How tall is the pyramid (1-8)?\n");
    scanf("%d", &height);
    for (current_height = 1; current_height <= height; ++current_height)
    {
        for (space_width = 1; space_width <= height-current_height; ++space_width){
            printf(" ");
        }
        for (hash_width = 1; hash_width <= current_height; ++hash_width){
            printf("#");
        }
        printf(" ");
        for (hash_width = 1; hash_width <= current_height; ++hash_width){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}