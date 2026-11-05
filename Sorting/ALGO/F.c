#include <stdio.h>
#include <string.h>

int main(){
    int testcase;
    scanf("%d", &testcase); getchar();

    char matkul[105][20];
    long long int dl[105];
    for(int i = 0; i < testcase; i++){
        scanf("%s %lld", matkul[i], &dl[i]); 
    }

    for(int i = 0; i < testcase; i++){
        int min = i;
        for(int j = testcase - 1; j > i; j--){
            if(dl[j] < dl[min]){
                min = j;
            }
            else if(dl[j] == dl[min]){
                if(strcmp(matkul[j], matkul[min]) < 0){
                    min = j;
                }
            }
        }

        if(min != i){
            long long int temp = dl[i];
            dl[i] = dl[min];
            dl[min] = temp;

            char tempo[105];
            strcpy(tempo, matkul[i]);
            strcpy(matkul[i], matkul[min]);
            strcpy(matkul[min], tempo);
        }
    }

    for(int i = 0; i < testcase; i++){
        printf("%s\n", matkul[i]);
    }
    return 0;
}