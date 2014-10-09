#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc == 1) {
        printf("You only have one argument. Praise the LORD!\n");
    } else if (argc > 1 && argc < 7) {
        printf("Here's your arguments:\n");

        for (i=0; i<argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {
        printf("ARGUMENT OVERLOAD!!!");
    }

    return 0;
}
