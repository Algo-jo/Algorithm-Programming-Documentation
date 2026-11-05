#include <stdio.h>
#include <string.h>
int main(){
    // char A[16] = "skibidi toilet";
    // int str = strlen(A);
    // for(int i = 0; i < str; i++){
    //     printf("%d. %c\n", i + 1, A[i]);
    // }


    // char nama[20] = "skibidi toilet";
    // scanf("%s", &nama);
    // printf("%s\n", nama);
    // for(int i = 0; i < 20; i++){
    //     printf("%c\n", nama[i]);
    // }

    // char nama[15] = "saipudin";
    // int count;
    // for(int i = 0; nama[i]; i++){
    //     count++;
    // }
    // printf("%d", count);

    // char a1[100] = "Skibidiweeee";
    // char a2[100] = "skibidi dop dop dop dop yes yes yes";

    // // strcpy(a2, a1);
    // printf("%s\n", a2);

    // a1[0] = a2[0];
    // printf("%s\n", a1);

    // char a[10] = "aA";
    // char b[10] = "a"; // --> strcmp = membandingkan 2 string dengan output 0, 1, atau -1
    // int compar = strcmp(a, b); // --> strcmpi = membandingkan 2 string, tidak memperdulikan kapital dan hasil berupa perbandingan ascii value
    // printf("%d\n", strcmpi(a, b));
    
    // char validPass[100] = "SkibidI";
    // char pass[100];

    // scanf("%s", &pass);
    // int valid = strcmp(validPass, pass);

    // if(valid == 0){
    //     printf("You may come in\n");
    // }
    // else printf("Go away you bastard\n");
    // char final[100];
    // int ipk = 5;
    // char replace[100] = "OKIE";

    // scanf("%s", &replace);

    // sprintf(final, "%s", replace);
    // printf("%s\n", final);

    // char ok[100];
    // char new[100];
    // int siap;
    // scanf("%[^\n]", &ok);
    // sscanf(new, "%s %d", &new, &siap);

    // printf("%s\n", ok);
    // printf("%d\n", siap);
    // printf("%s\n", new);

    // char old[100] = "Ini sebelum di sprintf";
    // printf("%s\n", old);
    // sprintf(old, "Ini string setelah direplace");
    // printf("%s\n", old);

    // char another[100] = "Ini string lama";
    // printf("%s\n", another);
    // char new[100];
    // puts("");
    // sprintf(new, "Ini adalah string terbaru nya / %s", another);
    // printf("%s\n", new);

    // char a[10] = "Halo";
    // char b[10] = "Udin";

    // sprintf(a, "%s %s", a, b);
    // printf("%s", a);

    // printf("\n\n\n");

    // char ini[100] = "ILY 3000";
    // int angka;
    // sscanf(ini, "ILY 3000", &angka);
    // printf("%s\n", ini);
    // printf("%d\n", angka);

    // char nama[30] = "Johannes Aaron Framon";
    // for(int i = 0; nama[i]; i++){
    //     if(nama[i] >= 'a' && nama[i] <= 'z'){
    //         printf("%c", nama[i]);
    //     }
    //     if(nama[i] == ' ') printf(" ");
    //     if(nama[i] >= 'A' && nama[i] <= 'Z'){
    //         printf("%c", nama[i]);
    //     }
    // }

    // char namaDia[15] = "Johannes Aaron";
    // for(int i = 0; namaDia[i] != '\0'; i++){
    //     if(namaDia[i] >= 'a' && namaDia[i] <= 'z'){
    //         printf("%c", namaDia[i] - 32);
    //     }
    //     if(namaDia[i] == ' ') printf(" ");

    //     if(namaDia[i] >= 'A' && namaDia[i] <= 'Z'){
    //         printf("%c", namaDia[i] + 32);
    //     }
    // }


    // char nama[10] = "Aaron";
    // char balik = strlen(nama);

    // for(int i = balik - 1; i >= 0; i--){
    //     printf("%c", nama[i]);
    // }

    int testcase;
    char database[2000];
    scanf("%d", &testcase);

    for(int i = 0; i < testcase; i++){
        scanf("%s", &database);
        printf("Case #%d: ", i + 1);
        int counter = strlen(database);

        for(int j = 0; j < counter; j++){
            if(j == 0) printf("%d", database[j]);
            else printf("-%d", database[j]);
        }
        puts("");
    }
    return 0;
}
