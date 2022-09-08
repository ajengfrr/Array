#include <stdio.h>
#include <conio.h>
#include <string.h>
int main() {
    char tombol;
    char daftarNIM[100][9];
    char daftarNama[100][50];
    int posisi=0;
    do {
        char nim[9];
        printf("\nisi nim: ");
        gets(nim);
        strcpy(daftarNIM[posisi],nim);
        char nama[50];
        printf("isi nama: ");
        gets(nama);
        strcpy(daftarNama[posisi++],nama);
        printf("tekan Y/y untuk isi data lagi:");
        tombol = getch();
    } while( (tombol=='Y') || (tombol=='y') );
    for (int i=0;i,i<posisi;i++) {
        printf("\n%s - %s",daftarNIM[i],daftarNama[i]);
    }
    printf("\n\n\n");
    return 0;
}
