#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HEADER "=================================\n|\t     KASABOT\t\t|\n=================================\nNAMA\t:Karta Sasmita\nPRODI\t:Teknik Informatika\n\n---------------------------------\n"
#define SMARTBOT "\033[1;32mBOT ==> \033[0m"

void clear_screen() {
    system("cls"); // Ganti dengan "clear" jika kamu pakai Linux/Mac
}

int main() {
    int select, i = 0;
    char name[50], kasa[100];

    printf("%s\nKASABOT digunakan hanya untuk\nkegabutan heheh...\n", HEADER);
    printf("\nSilahkan masukkan nama kamu = ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // hapus newline dari input

    clear_screen();

    if (strcmp(name, "karta sasmita") == 0) {
        printf("\033[1;36mHai [ADMIN]\033[0m\n");
    } else {
        printf("Hai %s, selamat datang di KASABOT\n", name);
    }

menu_utama:
    printf("\n\n1. Mulai\n2. Bantuan\n3. Keluar\nSilahkan pilih: ");
    scanf("%d", &select);
    getchar(); // Buang newline setelah input angka

    if (select == 1) {
        clear_screen();
        printf("%s", HEADER);
        while (i < 100) {
            printf("\n\nMasukkan perintah = ");
            fgets(kasa, sizeof(kasa), stdin);
            kasa[strcspn(kasa, "\n")] = '\0';

            if (strcmp(kasa, "hai") == 0) {
                printf("\n%sHai juga %s!", SMARTBOT, name);
            } else if (strcmp(kasa, "umur kamu berapa") == 0) {
                printf("\n%sUmur saya baru 1 hari", SMARTBOT);
            } else if (strcmp(kasa, "nama kamu siapa") == 0) {
                printf("\n%sNama saya KASABOT", SMARTBOT);
            } else if (strcmp(kasa, "apa kabar") == 0) {
                printf("\n%sKabar aku baik, gimana kabar kamu %s?", SMARTBOT, name);
            } else if (strcmp(kasa, "apa kesukaan aku") == 0) {
                printf("\n%sAku tidak tahu kesukaan kamu apa 😅", SMARTBOT);
            } else if (strcmp(kasa, "admin") == 0) {
                printf("\n%sAdmin adalah KARTA SASMITA", SMARTBOT);
            } else if (strcmp(kasa, "siapa pemilik kamu") == 0) {
                printf("\n%spemilik aku adalah KARTA SASMITA\n\tdia adalah mahasiswa IT yang masih semester 1\n\taku beruntung banget bisa dibuatnya!!!\n\tTERIMAKASIH KARTA SASMITA :)", SMARTBOT);
            } else if (strcmp(kasa, "i love you") == 0) {
                printf("\n%sI love you too %s 😘", SMARTBOT, name);
            } else if (strcmp(kasa, "aku rindu kamu") == 0) {
                printf("\n%sHai %s, aku juga rindu kamu 🥹", SMARTBOT, name);
            } else if (strcmp(kasa, "aku lagi sakit nih") == 0) {
                printf("\n%sWaahhh kamu lagi sakit ya %s!!! Semoga cepat sembuh yaa 🙏", SMARTBOT, name);
            } else if (strcmp(kasa, "keluar") == 0) {
                printf("\n%sDadah %s, sampai jumpa lagi yaa!\n", SMARTBOT, name);
                break;
            } else {
                printf("\nMaaf KASABOT tidak mengerti 😅\nKami akan berusaha lebih baik lagi!\n\n1. Mulai\n2. Bantuan\n3. Keluar\nSilahkan pilih: ");
                scanf("%d", &select);
                getchar();
                if (select == 1) {
                    clear_screen();
                    printf("%s", HEADER);
                    continue;
                } else if (select == 2) {
                    goto bantuan;
                } else if (select == 3) {
                    exit(0);
                } else {
                    printf("Maaf, menu tidak tersedia.");
                }
            }

            i++;
        }

    } else if (select == 2) {
bantuan:
        clear_screen();
        printf("   BANTUAN KATA KUNCI KASABOT\n=================================\n");
        printf("1. hai\n2. umur kamu berapa\n3. nama kamu siapa\n4. i love you\n");
        printf("5. aku rindu kamu\n6. aku lagi sakit nih\n7. admin\n8. siapa pemilik kamu\n");
        printf("9. apa kabar\n10. apa kesukaan aku\n\nKetik 'keluar' untuk kembali\n");
        getchar(); // tunggu enter
        clear_screen();
        goto menu_utama;
    } else if (select == 3) {
        exit(0);
    } else {
        printf("Maaf, menu tidak tersedia\n");
        goto menu_utama;
    }

    return 0;
}

