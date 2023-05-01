#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *f;
    char filename[100], c;
    int num_chars = 0, num_words = 0, in_word = 0;

    printf("Enter the name of the file to count: ");
    scanf("%s", filename);

    f = fopen(filename, "r");

    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((c = fgetc(f)) != EOF) {
        num_chars++;

        if (isspace(c)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            num_words++;
        }
    }

    printf("The number of characters in the file is: %d\n", num_chars);
    printf("The number of words in the file is: %d\n", num_words);

    fclose(f);
    char* a;
	scanf("input£ºenter%s",a) ;
    return 0;
}

