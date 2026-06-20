#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

char *nato[26] = {
    "Alfa", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf", "Hotel",
    "India", "Juliett", "Kilo", "Lima","Mike", "November", "Oscar",
    "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor",
    "Whiskey", "Xray", "Yankee", "Zulu"
};


int main(int argc, char *argv[]) {
    if (argc < 2) {
        puts("Usage: ./nato word word2 word3");
        return EXIT_FAILURE;
    }

    for (int h = 1; h < argc; h++) {
        for (int i = 0, len = strlen(argv[h]); i < len; i++) {
            for (int j = 0; j < 25; j++) {
                if (toupper(argv[h][i]) == nato[j][0]) {
                    printf("%s", nato[j]);
                    break;
                }
            }
        }
        printf(" ");
    }
    
    printf("\n");

    return EXIT_SUCCESS;
}
