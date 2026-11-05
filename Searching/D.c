#include <stdio.h>
#include <string.h>

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        int amount = 0;
        scanf("%d", &amount); getchar();

        char nama[1050][15] = {0};
        int nilai[1050] = {0};
        for(int j = 0; j < amount; j++){
            scanf("%[^#]#%d", nama[j], &nilai[j]); getchar();
        }
        char target[15] = {0};
        scanf("%[^\n]", target);

        for(int a = 0; a < amount; a++){
            int min = a;
            for(int b = amount - 1; b > a; b--){
                if(nilai[b] > nilai[min]){
                    min = b;
                }
                else if(nilai[b] == nilai[min]){
                    if(strcmp(nama[b], nama[min]) < 0){
                        min = b;
                    }
                }
            }
            if(min != a){
                int temp = nilai[min];
                nilai[min] = nilai[a];
                nilai[a] = temp;

                char temporary[15];
                strcpy(temporary, nama[min]);
                strcpy(nama[min], nama[a]);
                strcpy(nama[a], temporary);
            }
        }

        int ketemu = 0;
        for(int y = 0; y < amount; y++){
            if(strcmp(target, nama[y]) == 0){
                ketemu = y + 1;
                break;
            }
        }
        printf("Case #%d: %d\n", i + 1, ketemu);
    }
    return 0;
}