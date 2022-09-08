#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char r ;
    do {
        switch (r) {
            case 'a':
                printf(" /\n");
                printf("/\n");
                printf("\\\n");
                printf(" \\\n");
                break;
            case 'd':
                printf("\\\n");
                printf(" \\\n");
                printf(" /\n");
                printf("/\n");
                break;
            case 'w':
                printf("   /\\\n");
                printf("  /  \\\n");
                printf(" /    \\\n");
                printf("/      \\\n");
                break;
            case 's':
                printf("\\      /\n");
                printf(" \\    /\n");
                printf("  \\  /\n");
                printf("   \\/\n");
                break;
        }
        r = getch();
        system("CLS");
    } while (r!='x') ;
    printf("\nselesai....");
    return 0;
}
