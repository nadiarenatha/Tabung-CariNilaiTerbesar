#include <stdio.h>
#include <stdlib.h>

int main()
{
int pilihan;
float angka1,angka2,angka3,jari2,tinggi,luasalas,luasselimut,volumetabung,phi;
printf("Pilih Menu\n 1.Hitung\n 2.Cari Nilai Terbesar\n 3.Tampilkan NIM\n Pilihan = ");
pilihan = 1,2,3;
scanf("%int", &pilihan);
switch(pilihan){
case 1:
    printf("Masukkan jari-jari :");
    scanf("%f",&jari2);
    printf("Masukkan Tinggi:");
    scanf("%f",&tinggi);
    phi = 3,14;
    luasalas = phi*jari2*jari2;
    printf("Luas Alas : %f\n" ,luasalas);
    luasselimut = phi*2*jari2*tinggi;
    printf("Luas Selimut Tabung : %f\n",luasselimut);
    volumetabung = phi*jari2*jari2*tinggi;
    printf("Volume tabung : %f\n",volumetabung);
    system("pause");
    system("cls");
    main();
    break;

case 2 :
    printf("Masukkan Angka 1 = ");
    scanf("%f", &angka1);
    printf("Masukkan Angka 2 = ");
    scanf("%f", &angka2);
    printf("Masukkan Angka 3 = ");
    scanf("%f", &angka3);
    printf("Nilai Terbesar = ");
    if(angka1>angka2 && angka1>angka3)
    {
        printf("%f\n",angka1);
    }   else if (angka2>angka1 && angka2>angka3)
    {
        printf("%f\n",angka2);
    }   else if (angka3>angka1 && angka3>angka2)
    {
        printf("%f\n",angka3);
    }
    system("pause");
    system("cls");
    main();
    break;

case 3 :
    printf("Nama : Nadia Renatha\nNIM : 672018004\n");
    system("pause");
    system("cls");
    main();
    break;
}
}
