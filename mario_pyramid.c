#include <stdio.h>

int main() {
    int height, current_height, space_width, hash_width;
    printf("How tall is the pyramid (1-8)?\n");
    scanf("%d", &height);
    // Build pyramid row for each int in user input
    for (current_height = 1; current_height <= height; ++current_height)
    {
        // Print spaces equal to pyramid height - current row of the pyramid
        for (space_width = 1; space_width <= height-current_height; ++space_width){
            printf(" ");
        }
        // Print hashes equal to current row of the pyramid
        for (hash_width = 1; hash_width <= current_height; ++hash_width){
            printf("#");
        }
        // Print space to break up left side of pyramid from right
        printf(" ");
        // Print hashes equal to current row of the pyramid
        for (hash_width = 1; hash_width <= current_height; ++hash_width){
            printf("#");
        }
        // Print newline
        printf("\n");
    }
    return 0;
}