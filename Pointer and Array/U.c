#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        int size;
        scanf("%d", &size);

        int value[10001] = {0};
            for(int j = 0; j < size; j++){
                scanf("%d", &value[j]);
            }
            int pilihanLili = 0;
            int pilihanBibi = 0;
            scanf("%d", &pilihanBibi);
            scanf("%d", &pilihanLili);
        
        if(pilihanLili != pilihanBibi){
            printf("Case #%d : ", i + 1);
            if(value[pilihanLili - 1] > value[pilihanBibi - 1]){
                printf("Lili\n");
            }
            if(value[pilihanLili - 1] < value[pilihanBibi - 1]){
                printf("Bibi\n");
            }
            if(value[pilihanLili - 1] == value[pilihanBibi - 1]){
                printf("Draw\n");
            }
        }
    }

    return 0;
}