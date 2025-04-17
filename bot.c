#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define header "=================================\n|\t     KASABOT\t\t|\n=================================\nNAMA\t:Karta Sasmita\nPRODI\t:Teknik Informatika\n\n---------------------------------\n"
#define smartbot "BOT ==> "

void main()
{
        int i, select;
        char name[50], kasa[50];
        printf("%s\nKASABOT digunakan hanya untuk\nkegabutan heheh...\n", header);
        printf("\nsilahkan masukan nama kamu = "); gets(name); system("cls");
                if(strcmp(name,"karta sasmita")==0){textcolor(3);cprintf("hai [ADMIN]");}
                else {printf("hai %s selamat datang di KASABOT", name );}

        first :
        printf("\n\n1. mulai\n2. bantuan\n3. keluar\nsilahkan pilih : "); scanf("%d",&select);
                if (select==1){goto home;}
                else if (select==2){goto about;}
                else if(select==3){exit(0);}
                else {printf("maaf menu tidak tersedia"); goto first;}

        home : system("cls");
        printf("%s", header);
        do
        {
                printf("\n\nmasukan perintah = "); gets(kasa); i++;
                        if (strcmp(kasa,"hai")==0)
                                {
                                textcolor(2);
                                cprintf("\n%s", smartbot);
                                printf("hai juga %s", name);
                                getche();}
                        else if (strcmp(kasa,"umur kamu berapa")==0)
                                {
                                textcolor(2);
                                cprintf("\n%s", smartbot);
                                printf("umur saya baru 1 hari");
                                getche();}
                        else if (strcmp(kasa,"nama kamu siapa")==0)
                                {
                                textcolor(2);
                                cprintf("\n%s", smartbot);
                                printf("nama saya KASABOT");
                                getche();}
                        else if (strcmp(kasa,"apa kabar")==0)
                                {
                                textcolor(2);
                                cprintf("\n%s", smartbot);
                                printf("kabar aku baik, gimana kabar kamu %s", name);
                                getche();}
                        else if (strcmp(kasa,"apa kesukaan aku")==0)
                                {
                                textcolor(2);
                                cprintf("\n%s", smartbot);
                                printf("aku tidak tau kesukaan kamu apa");
                                getche();}
                        else if (strcmp(kasa,"admin")==0)
                                {
                                textcolor(2);
                                cprintf("\n%s", smartbot);
                                printf("admin adalah KARTA SASMITA ");
                                getche();}
                        else if (strcmp(kasa,"siapa pemilik kamu")==0)
                                {
                                textcolor(2);
                                cprintf("\n%s", smartbot);
                                printf("pemilik aku adalah KARTA SASMITA\n\tdia adalah mahasiswa IT yang masih semester 1\n\taku beruntung banget bisa dibuatnya!!!\n\tTERIMAKASIH KARTA SASMITA :)");
                                getche();}
                        else if(strcmp(kasa,"i love you")==0)
                                {
                                textcolor(2);
                                cprintf("\n%s", smartbot);
                                printf("i love you too %s", name);
                                getche();}
                        else if(strcmp(kasa,"aku rindu kamu")==0)
                                {
                                textcolor(2);
                                cprintf("\n%s", smartbot);
                                printf("hai %s aku juga rindu kamu", name);
                                getche();}
                        else if(strcmp(kasa,"aku lagi sakit nih")==0)
                                {
                                textcolor(2);
                                cprintf("\n%s", smartbot);
                                printf("waahhh kamu lagi sakit ya %s!!! semoga cepat sembuh yaa", name);
                                getche();}
                        else {  printf("\nmaaf KASABOT tidak mengerti\nkami akan berusaha lebih baik lagi\n\n1. mulai\n2. bantuan\n3. keluar\nSilahkan pilih: "); scanf("%d", &select);
                                if (select==1){goto home;}
                                else if(select==2){goto about;}
                                else if(select==3){exit(0);}
                                else {printf("maaf menu tida tersedia");} getche();system("cls"); goto home;
                                }
        }
        while(i<100);

        about : system("cls");
        printf("   BANTUAN KATA KUNCI KASABOT\n=================================\n1. hai\n2. umur kamu berapa\n3. nama kamu siapa\n4. i love you\n5. aku rindu kamu\n6. aku lagi sakit nih\n7. admin\n8. siapa pemilik kamu\n9. apa kabar\n10. apa kesukaan aku\n\nTekan enter untuk mulai"); getche();; goto home;
}
