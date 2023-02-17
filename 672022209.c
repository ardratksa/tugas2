#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define phi 3.14285714

void main ()
{
    system ("COLOR F1");
    system ("cls");
    int pilihan;
    printf ("===========================\n");
    printf ("      Menu Kalkulator      \n");
    printf ("===========================\n");
    printf ("1. PingPoroLanSudo\n");
    printf ("2. SinCosTan\n");
    printf ("3. Hitung Keliling dan Luas\n");
    printf ("4. Hitung Akar Kuadrat\n");
    printf ("5. Exit");
    printf ("\n=========================\n");
    printf ("Masukkan Pilihan Anda: ");
    scanf ("%d", &pilihan);

    switch(pilihan)
    {
        case 1: PingPoroLanSudo(); break;
        case 2: SinCosTan(); break;
        case 3: kelilingdanluas (); break;
        case 4: akarkdrt (); break;
        case 5: system ("cls");
        printf ("Thank You\n"); break;
        default:  printf("\nFormat Salah!!! \n");
        printf("press any key to continue...");
        getch();
        system("cls");
        main ();
    }
}

void PingPoroLanSudo()
{
    menu1:
    system ("cls");
    int PingPorolanSudo;
    float a, b, c;
    float d, e, f;
    char ulang;
    printf ("\n\n===================\n");
    printf ("Ping Poro Lan Sudo\n");
    printf ("===================\n\n");
    printf ("1. Perkalian\n");
    printf ("2. Pembagian\n");
    printf ("3. Penjumlahan\n");
    printf ("4. Pengurangan\n");
    printf ("5. Return Menu Utama\n");
    printf ("\n========================\n");
    printf ("Masukkan Pilihan Anda: ");
    scanf ("%d", &PingPorolanSudo);
    switch (PingPorolanSudo)
    {
    case 1 :
        perkalian:
        system ("cls");
        printf ("Masukkan angka pertama: ");
        scanf ("%f", &a);
        printf ("Masukkan angka kedua: ");
        scanf ("%f", &b);
        c = a*b;
        printf ("Hasil dari %.2f x %.2f adalah %.2f", a, b, c);
        ulang1:
        printf ("\n\nMenghitung kembali? (y/n) ");
        scanf ("%c", &ulang);
        ulang= getchar();
        if (ulang=='y')
        {
            printf ("\n");
            goto perkalian;
        }
        if (ulang=='n')
        {
            printf ("\n");
            goto menu1;
        }
        else
        {
            system ("cls");
            printf ("\nPilihan Salah!");
            goto ulang1;
        }
        break;

    case 2 :
        pembagian:
        system ("cls");
        printf ("Masukkan angka pertama: ");
        scanf ("%f", &d);
        printf ("Masukkan angka kedua: ");
        scanf ("%f", &e);
        f = d/e;
        printf ("Hasil dari %.2f : %.2f adalah %.2f", d, e, f);
        ulang2:
        printf ("\n\nMenghitung kembali? (y/n) ");
        scanf ("%c", &ulang);
        ulang= getchar();
        if (ulang=='y')
        {
            printf ("\n");
            goto pembagian;
        }
        if (ulang=='n')
        {
            printf ("\n");
            goto menu1;
        }
        else
        {
            system ("cls");
            printf ("\nPilihan Salah!");
            goto ulang2;
        }
        break;

    case 3 :
        penjumlahan:
        system ("cls");
        printf ("Masukkan angka pertama: ");
        scanf ("%f", &a);
        printf ("Masukkan angka kedua: ");
        scanf ("%f", &b);
        c = a+b;
        printf ("Hasil dari %.2f + %.2f adalah %.2f", a, b, c);
        ulang3:
        printf ("\n\nMenghitung kembali? (y/n) ");
        scanf ("%c", &ulang);
        ulang= getchar();
        if (ulang=='y')
        {
            printf ("\n");
            goto penjumlahan;
        }
        if (ulang=='n')
        {
            printf ("\n");
            goto menu1;
        }
        else
        {
            system ("cls");
            printf ("\nPilihan Salah!");
            goto ulang3;
        }
        break;

    case 4:
        perkaliann:
        system ("cls");
        printf ("Masukkan angka pertama: ");
        scanf ("%f", &a);
        printf ("Masukkan angka kedua: ");
        scanf ("%f", &b);
        c = a-b;
        printf ("Hasil dari %.2f - %.2f adalah %.2f", a, b, c);
        ulang4:
        printf ("\n\nMenghitung Kembali? (y/n) ");
        scanf ("%c", &ulang);
        ulang= getchar();
        if (ulang=='y')
        {
            printf ("\n");
            goto perkaliann;
        }
        if (ulang=='n')
        {
            printf ("\n");
            goto menu1;
        }
        else
        {
            system ("cls");
            printf ("\nPilihan Salah!");
            goto ulang4;
        }
        break;

    case 5: main();
    break;


    default:
        printf("Format Salah!!! \n");
        printf("press any key to continue...");
        getch();
        system("cls");
        main ();
    }

}

void SinCosTan ()
{
    menu2:
    system ("cls");
    int Sincostan;
    float a;
    char ulang2;
    printf ("\n======================\n");
    printf ("      Sin Cos Tan      \n");
    printf ("======================\n\n");
    printf ("1. Sinus\n");
    printf ("2. Cosinus\n");
    printf ("3. Tangen\n");
    printf ("4. Return Menu Utama\n");
    printf ("\n======================\n");
    printf ("Masukkan Pilihan Anda: ");
    scanf ("%d", &Sincostan);

    switch (Sincostan)
    {
        case 1:
        sinuss:
        system ("cls");
        printf ("Masukkan derajat Sinus: ");
        scanf ("%f", &a);
        printf ("Hasil Sinus adalah: %.2f", sin(a*(phi/180)));
        ulang11:
        printf ("\n\nMenghitung Ulang? (y/n) ");
        scanf ("%c", &ulang2);
        ulang2 = getchar ();
        if (ulang2 == 'y')
        {
            printf ("\n");
            goto sinuss;
        }
        if (ulang2 == 'n')
        {
            printf ("\n");
            goto menu2;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang11;
        }
        break;

        case 2:
        cosinuss:
        system ("cls");
        printf ("Masukkan derajat Cosinus: ");
        scanf ("%f", &a);
        printf ("Hasil Cosinus adalah: %.2f", cos(a*(phi/180)));
        ulang12:
        printf ("\n\nMenghitung Ulang? (y/n) ");
        scanf ("%c", &ulang2);
        ulang2 = getchar ();
        if (ulang2 == 'y')
        {
            printf ("\n");
            goto cosinuss;
        }
        if (ulang2 == 'n')
        {
            printf ("\n");
            goto menu2;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang12;
        }
        break;

        case 3:
        tangenn:
        system ("cls");
        printf ("Masukkan derajat Tangen: ");
        scanf ("%f", &a);
        printf ("Hasil Tangen adalah: %.2f", tan(a*(phi/180)));
        ulang13:
        printf ("\n\nMenghitung Ulang? (y/n) ");
        scanf ("%c", &ulang2);
        ulang2 = getchar ();
        if (ulang2 == 'y')
        {
            printf ("\n");
            goto tangenn;
        }
        if (ulang2 == 'n')
        {
            printf ("\n");
            goto menu2;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang13;
        }
        break;

        case 4: main(); break;

        default:
            printf("Format Salah!!! \n");
        printf("press any key to continue...");
        getch();
        system("cls");
        main ();

    }
}
void kelilingdanluas ()
{
    system ("cls");
    int KelilingDanLuas;
    printf ("\n==============================\n");
    printf ("     Keliling Luas Volume     \n");
    printf ("==============================\n");
    printf ("1. Hitung Keliling Bangun Datar\n");
    printf ("2. Hitung Luas Bangun Datar\n");
    printf ("3. Hitung Volume Bangun Ruang\n");
    printf ("4. Return Menu Utama\n");
    printf ("-=============================\n");
    printf ("Masukkan Pilihan Anda: ");
    scanf ("%d", &KelilingDanLuas);
    switch (KelilingDanLuas)
    {
        case 1: keliling (); break;
        case 2: luas (); break;
        case 3: volume (); break;
        case 4: main (); break;
        default:
            printf("\nFormat Salah!!! \n");
        printf("press any key to continue...");
        getch();
        system("cls");
        main ();
    }

}

void keliling ()
{
    keliling1:
    system ("cls");
    int Keliling;
    float a, b, Kelilinga, Kelilingb, Kelilingc, Kelilingd, Kelilinge;
    float g, h, i, j, k;
    char ulanggg;
    printf ("\n=============================\n");
    printf ("    Keliling Bangun Datar  \n");
    printf ("=============================\n\n");
    printf ("1. Keliling Persegi\n");
    printf ("2. Keliling Trapesium\n");
    printf ("3. Keliling Layang-layang\n");
    printf ("4. Keliling Lingkaran\n");
    printf ("5. Kembali Ke Menu Sebelumnya\n");
    printf ("\n==============================\n");
    printf ("Masukkan Pilihan Anda: ");
    scanf ("%d", &Keliling);
    switch (Keliling)
    {
    case 1:
        kelper:
        system ("cls");
        printf ("Masukkan Sisi Persegi: ");
        scanf ("%f", &a);
        Kelilinga = (4*a);
        printf ("Keliling Persegi adalah = %.2f", Kelilinga);
        ulang21:
        printf ("\n\nIngin mengulangi Keliling Persegi? (y/n) ");
        scanf ("%c", &ulanggg);
        ulanggg = getchar ();
        if (ulanggg == 'y')
        {
            printf ("\n");
            goto kelper;
        }
        if (ulanggg == 'n')
        {
            printf ("\n");
            goto keliling1;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang21;
        }
        break;

    case 2:
        keltrap:
        system ("cls");
        printf ("Masukkan Sisi Atas Trapesium Sama Kaki: ");
        scanf ("%f", &g);
        printf ("Masukkan Sisi Bawah Trapesium Sama Kaki: ");
        scanf ("%f", &h);
        printf ("Masukkan Sisi Miring Trapesium Sama Kaki: ");
        scanf ("%f", &i);
        Kelilingb = (2*i) + g + h;
        printf ("Keliling Trapesium Sama Kaki adalah = %.2f", Kelilingb);
        ulang22:
        printf ("\n\nIngin mengulangi Keliling Trapesium? (y/n) ");
        scanf ("%c", &ulanggg);
        ulanggg = getchar ();
        if (ulanggg == 'y')
        {
            printf ("\n");
            goto keltrap;
        }
        if (ulanggg == 'n')
        {
            printf ("\n");
            goto keliling1;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang22;
        }
        break;

    case 3:
        kellayang:
        system ("cls");
        printf ("Masukkan Panjang Sisi Atas: ");
        scanf ("%f", &g);
        printf ("Masukkan Panjang Sisi Bawaah: ");
        scanf ("%f", &h);
        Kelilingc = 2*(g+h);
        printf ("Keliling Layang-layang adalah = %.2f", Kelilingc);
        ulang23:
        printf ("\n\nIngin mengulangi Keliling Layang-layang? (y/n) ");
        scanf ("%c", &ulanggg);
        ulanggg = getchar ();
        if (ulanggg == 'y')
        {
            printf ("\n");
            goto kellayang;
        }
        if (ulanggg == 'n')
        {
            printf ("\n");
            goto keliling1;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang23;
        }
        break;

    case 4:
        kelling:
        system ("cls");
        printf ("Masukkan Panjang Diameter: ");
        scanf ("%f", &j);
        printf ("Masukkan Panjang Jari-jari: ");
        scanf ("%f", &k);
        Kelilingd = 22 * j / 7;
        Kelilinge = 22 * 2 * k / 7;
        printf ("Keliling Lingkaran Berdasarkan Diameter adalah = %.2f\n", Kelilingd);
        printf ("Keliling Lingkaran Berdasarkan Jari-jari adalah = %.2f", Kelilinge);
        ulang24:
        printf ("\n\nIngin mengulangi Keliling Lingkaran? (y/n) ");
        scanf ("%c", &ulanggg);
        ulanggg = getchar ();
        if (ulanggg == 'y')
        {
            printf ("\n");
            goto kelling;
        }
        if (ulanggg == 'n')
        {
            printf ("\n");
            goto keliling1;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang24;
        }
        break;

    case 5: kelilingdanluas (); break;
    default:
        printf("\nFormat Salah!!! \n");
        printf("press any key to continue...");
        getch();
        system("cls");
        main ();
    }
}

void luas ()
{
    luass:
    system ("cls");
    int Luas;
    float Luasp, Luast, Luasll, Luasld, Luaslr;
    float s, pj, lb, tg, ld, pd, pr;
    char luas1;
    printf ("\n===============================\n");
    printf ("       Luas Bangun Datar        \n");
    printf ("===============================\n\n");
    printf ("1. Luas Persegi\n");
    printf ("2. Luas Trapesium\n");
    printf ("3. Luas Layang-layang\n");
    printf ("4. Luas Lingkaran\n");
    printf ("5. Kembali Ke Menu Sebelumnya\n");
    printf ("\n===============================\n");
    printf ("Masukkan Pilihan Anda: ");
    scanf ("%d", &Luas);
    switch (Luas)
    {
    case 1:
        lpersegi:
        system ("cls");
        printf ("Masukkan Sisi Persegi: ");
        scanf ("%f", &s);
        Luasp = s*s;
        printf ("Luas Persegi adalah = %.2f", Luasp);
        ulang31:
        printf ("\n\nIngin mengulangi Luas Persegi? (y/n) ");
        scanf ("%c", &luas1);
        luas1 = getchar ();
        if (luas1 == 'y')
        {
            printf ("\n");
            goto lpersegi;
        }
        if (luas1 == 'n')
        {
            printf ("\n");
            goto luass;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang31;
        }
        break;

    case 2:
        ltrapesium:
        system ("cls");
        printf ("Masukkan Sisi Atas Trapesium Sama Kaki: ");
        scanf ("%f", &pj);
        printf ("Masukkan Sisi Bawah Trapesium Sama Kaki: ");
        scanf ("%f", &lb);
        printf ("Masukkan Tinggi Trapesium Sama Kaki: ");
        scanf ("%f", &tg);
        Luast = (pj+lb) * tg / 2;
        printf ("Luas Trapesium Sama Kaki adalah = %.2f", Luast);
        ulang32:
        printf ("\n\nIngin mengulangi Luas Trapesium? (y/n) ");
        scanf ("%c", &luas1);
        luas1 = getchar ();
        if (luas1 == 'y')
        {
            printf ("\n");
            goto ltrapesium;
        }
        if (luas1 == 'n')
        {
            printf ("\n");
            goto luass;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang32;
        }
        break;

    case 3:
        llayang:
        system ("cls");
        printf ("Masukkan Diagonal Panjang: ");
        scanf ("%f", &pd);
        printf ("Masukkan Diagonal Lebar: ");
        scanf ("%f", &ld);
        Luasll = pd * ld / 2;
        printf ("Luas Layang-layang adalah = %.2f", Luasll);
        ulang33:
        printf ("\n\nIngin mengulangi Luas Layang-layang? (y/n) ");
        scanf ("%c", &luas1);
        luas1 = getchar ();
        if (luas1 == 'y')
        {
            printf ("\n");
            goto llayang;
        }
        if (luas1 == 'n')
        {
            printf ("\n");
            goto luass;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang33;
        }

    case 4:
        llingkaran:
        system ("cls");
        printf ("Masukkan Panjang Diameter: ");
        scanf ("%f", &pd);
        printf ("Masukkan Panjang Jari-jari: ");
        scanf ("%f", &pr);
        Luasld = (22 * pd * pd / 7) / 4;
        Luaslr = 22 * pr * pr / 7;
        printf ("Luas Lingkaran Berdasarkan Diameter adalah = %.2f\n", Luasld);
        printf ("Luas Lingkaran Berdasarkan Jari-jari adalah = %.2f", Luaslr);
        ulang34:
        printf ("\n\nIngin mengulangi Luas Lingkaran? (y/n) ");
        scanf ("%c", &luas1);
        luas1 = getchar ();
        if (luas1 == 'y')
        {
            printf ("\n");
            goto llingkaran;
        }
        if (luas1 == 'n')
        {
            printf ("\n");
            goto luass;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang34;
        }
        break;

    case 5: kelilingdanluas (); break;
    default:  printf("\nFormat Salah!!! \n");
        printf("press any key to continue...");
        getch();
        system("cls");
        main ();
    }
}

void volume ()
{
    volumee:
    system ("cls");
    int Volume;
    float s, volk, las, ts, dl, jl, tp;
    float V1, V2, V3, V4;
    float VL1, VL2, VL3, VL4;
    float VB1, VB2;
    char volume1;
    printf ("\n==============================\n");
    printf ("     Volume Bangun Ruang      \n");
    printf ("==============================\n");
    printf ("1. Volume Kubus\n");
    printf ("2. Volume Prisma\n");
    printf ("3. Volume Limas\n");
    printf ("4. Volume Bola\n");
    printf ("5. Kembali Ke Menu Sebelumnya\n");
    printf ("==============================\n");
    printf ("Masukkan Pilihan Anda: ");
    scanf ("%d", &Volume);
    switch (Volume)
    {
    case 1:
        volkub:
        system ("cls");
        printf ("Masukkan Panjang Sisi: ");
        scanf ("%f", &s);
        volk = s * s * s;
        printf ("Volume Kubus adalah = %.2f", volk);
        ulang41:
        printf ("\n\nMenghitung Ulang?? (y/n) ");
        scanf ("%c", &volume1);
        volume1 = getchar ();
        if (volume1 == 'y')
        {
            printf ("\n");
            goto volkub;
        }
        if (volume1 == 'n')
        {
            printf ("\n");
            goto volumee;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang41;
        }
        break;

    case 2:
        volpris:
        system ("cls");
        printf ("Masukkan Sisi Persegi: ");
        scanf ("%f", &s);
        printf ("Masukkan Lebar Alas Segitiga: ");
        scanf ("%f", &las);
        printf ("Masukkan Tinggi Segitiga: ");
        scanf ("%f", &ts);
        printf ("Masukkan Diameter Lingkaran: ");
        scanf ("%f", &dl);
        printf ("Masukkan Jari-jari Lingkaran: ");
        scanf ("%f", &jl);
        printf ("Masukkan Tinggi Prisma: ");
        scanf ("%f", &tp);
        V1 = s * s * tp;
        V2 = (las * ts / 2) * tp;
        V3 = (22 * jl * jl / 7) * tp;
        V4 = (22 * dl * dl / 7) / 4 * tp;
        printf ("Volume Prisma Persegi adalah = %.2f\n", V1);
        printf ("Volume Prisma Segitiga adalah = %.2f\n", V2);
        printf ("Volume Silinder berdasarkan Jari-jari adalah = %.2f\n", V3);
        printf ("Volume Silinder berdasarkan Diameter adalah = %.2f\n", V4);
        ulang42:
        printf ("\n\nMenghitung Ulang?? (y/n) ");
        scanf ("%c", &volume1);
        volume1 = getchar ();
        if (volume1 == 'y')
        {
            printf ("\n");
            goto volpris;
        }
        if (volume1 == 'n')
        {
            printf ("\n");
            goto volumee;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang42;
        }
        break;

    case 3:
        vollim:
        system ("cls");
        printf ("Masukkan Sisi Persegi: ");
        scanf ("%f", &s);
        printf ("Masukkan Lebar Alas Segitiga: ");
        scanf ("%f", &las);
        printf ("Masukkan Tinggi Segitiga: ");
        scanf ("%f", &ts);
        printf ("Masukkan Diameter Lingkaran: ");
        scanf ("%f", &dl);
        printf ("Masukkan Jari-jari Lingkaran: ");
        scanf ("%f", &jl);
        printf ("Masukkan Tinggi Limas: ");
        scanf ("%f", &tp);
        VL1 = s * s * tp / 3;
        VL2 = (las * ts / 2) * tp / 3;
        VL3 = (22 * jl * jl / 7) * tp / 3;
        VL4 = (22 * dl * dl / 7) / 4 * tp / 3;
        printf ("Volume Limas Persegi adalah = %.2f\n", VL1);
        printf ("Volume Limas Segitiga adalah = %.2f\n", VL2);
        printf ("Volume Limas Silinder berdasarkan Jari-jari adalah = %.2f\n", VL3);
        printf ("Volume Limas Silinder berdasarkan Diameter adalah = %.2f\n", VL4);
        ulang43:
        printf ("\n\nMenghitung Ulang?? (y/n) ");
        scanf ("%c", &volume1);
        volume1 = getchar ();
        if (volume1 == 'y')
        {
            printf ("\n");
            goto vollim;
        }
        if (volume1 == 'n')
        {
            printf ("\n");
            goto volumee;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang43;
        }
        break;

    case 4:
        volbol:
        system ("cls");
        printf ("Masukkan Jari-jari Lingkaran = ");
        scanf ("%f", &jl);
        printf ("Masukkan Diameter Lingkaran = ");
        scanf ("%f", &dl);
        VB1 = (4.0/3) * phi * jl * jl * jl;
        VB2 = (22 * dl * dl * dl / 7) / 6;
        printf ("Volume Bola berdasarkan Jari-jari adalah = %.2f\n", VB1);
        printf ("Volume Bola berdasarkan Diameter adalah = %.2f\n", VB2);
        ulang44:
        printf ("\n\nMenghitung Ulang? (y/n) ");
        scanf ("%c", &volume1);
        volume1 = getchar ();
        if (volume1 == 'y')
        {
            printf ("\n");
            goto volbol;
        }
        if (volume1 == 'n')
        {
            printf ("\n");
            goto volumee;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Salah!");
            goto ulang44;
        }
        break;

    case 5: kelilingdanluas (); break;
    default:  printf("\nFormat Salah!!! \n");
        printf("press any key to continue...");
        getch();
        system("cls");
        main ();
    }
}
void akarkdrt ()
{
    akarkdrt:
    system ("cls");
    char akar1;
    float akr, sakr;
    printf ("Masukkan bilangan yang akan diakar = ");
    scanf ("%f", &akr);
    sakr  = sqrt (akr);
    printf ("Hasil akar dari %.2f adalah = %.2f", akr, sakr);
    ulang5:
    printf ("\n\n Menghitung Ulang? (y/n) ");
    scanf ("%c", &akar1);
    akar1 = getchar ();
    if (akar1 == 'y')
    {
    printf ("\n");
        goto akarkdrt;
    }
    if (akar1 == 'n')
    {
    main ();
    }
    else
    {
        system ("cls");
        printf ("Pilihan Salah!");
        goto ulang5;
    }
}
