#include <stdio.h>
#include <conio.h>
int main() {
    char kalimat[100];
    for (int i=0; i<100; i++)
        kalimat[i]='x';

    printf("\n\n%s", kalimat);


    int data[100];
    for (int i=0; i<100; i++)
        data[i]=0;

    data[0]=100;
    data[50]=48;
    data[99]=3;
    data[5] = data[0]+data[1];

    for (int i=0; i<100; i++)
        printf("\n isi data %d:  %d",i+1, data[i] );


    return 0;
}
