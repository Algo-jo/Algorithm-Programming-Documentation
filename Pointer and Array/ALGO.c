#include <stdio.h>
#include <string.h>
int main(){

    // int numbers, operation;
    // scanf("%d", &numbers);

    // operation = numbers % 100;
    // if(operation <= 9){
    //     printf("0%d", operation);
    // }
    // else if(operation >= 10) printf("%d", operation);

    // int taka, aoki, action;
    // scanf("%d %d %d", &taka, &aoki, &action);
    // int combine = taka + aoki;

    // if(taka >= action){
    //     printf("%d %d", taka - action, aoki);
    // }
    // if(combine >= action){
    //     printf("0 %d", taka + aoki - action);
    // }
    // if(combine <= action){
    //     printf("0 0");
    // }

    // int watermelon;
    // scanf("%d", &watermelon);

    // if(watermelon >= 4 && watermelon % 2 == 0){
    //     printf("YES\n");
    // }
    // else printf("NO\n");

    // int number, total = 0;
    // scanf("%d", &number);

    // for(int i = 1; i <= number; i++){
    //     total = i + total;
    // }
    // printf("%d", total);

    // int testcase, nilai, kkm, lolos = 0;
    // scanf("%d %d", &testcase, &kkm);

    // for(int i = 1; i <= testcase; i++){
    //     scanf("%d", &nilai);

    //     if(nilai >= kkm){
    //         lolos++;
    //     }
    // }
    // printf("%d", lolos);

    // int size;
    // scanf("%d", &size);

    // for(int i = 1; i <= size; i++){
    //     for(int j = size; j >= 1; j--){
    //         if(i == j){
    //             printf("*");
    //         }
    //         else {
    //             printf("%d", j);
    //         }
    //     }
    //     printf("\n");
    // }

    // int size;
    // int value = 0;
    // scanf("%d", &size);
    
    // int checker = size + 1;
    // for(int i = size; i >= 1; i--){
    //     for(int j = 1; j <= size; j++){
    //         if(i + j <= checker){
    //             value++;
    //             printf("%d ", value);
    //         }
    //     }
    //     printf("\n");
    // }
    // int count;
    // scanf("%d", &count);
    // printf("L");
    //     for(int i = 1; i <= count; i++){
    //         printf("o");
    //     }
    // printf("ng\n");

    // int testcase;
    // char a[1001];
    // char b[] = "YES";
    // scanf("%d", &testcase); getchar();
    //     for(int i = 0; i < testcase; i++){
    //         scanf("%s", &a);

    //         int validate = strcmpi(a, b);
    //         if(validate == 0) printf("YES\n");
    //         else printf("NO\n");

    //     }
    // 
    // int testcase;
    // scanf("%d", &testcase);
    // for(int i = 0; i < testcase; i++){
    //     char length[105];
    //     scanf("%s", length);

    //     int validate = strlen(length);

    //     if(validate > 10){
    //         printf("%c", length[0]);
    //         printf("%d", validate - 2);
    //         printf("%c\n", length[validate - 1]);
    //     }
    //     else printf("%s\n", length);


    // }

    char map[101];
    int entrance = -1, treasure = 1, exit = -1;
    scanf("%s", &map);

    int length = strlen(map);
    for(int i = 0; i < length; i++){
        if(map[i] == '|'){
            if(entrance == -1){
                entrance = i;
            }
            else if(exit == -1){
                exit = i;
            }
        }
        else if(map[i] == '*'){
            if(treasure == -1){
            treasure = i;
            }
        }
    }
    if(entrance < treasure && treasure < exit){
        printf("in\n");
    }
    else printf("out\n");


    return 0;
}