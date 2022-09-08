#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct t_mhs {
    char nama[100];
    char nim[9];
};

int main() {
    char daftarNama[1000][100];
    char daftarNim[1000][100];
    char tombol;
    int urut=0;
    t_mhs dataMhs[1000];
    do {
        char nama[100];
        char nim[9];
        printf("\nTulis nama anda!\n");
        gets(nama);
        printf("\nTulis NIM anda!\n");
        gets(nim);
        strcpy(dataMhs[urut].nama,nama);
        strcpy(dataMhs[urut++].nim,nim);
//        strcpy(daftarNama[urut++],nama);
//        strcpy(daftarNim[urut++],nim);
        printf("Untuk isi data lagi tekan Y/y!");
        tombol = getch();
        system("CLS");
    } while ( (tombol=='Y') || (tombol=='y')  ) ;
    printf("\nselesai....");
    for (int t=0;t<urut;t++) printf("%s\n",dataMhs[t].nama);
//    for (int t=0;t<urut;t++) printf("%s\n",daftarNim[t]);
    return 0;
}
