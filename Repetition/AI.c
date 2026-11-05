#include <stdio.h>

int main(){
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int size;
        int array[100000] = {0};
        scanf("%d", &size);
        for(int j = 0; j < size; j++){
            scanf("%d", &array[j]);
        }

        int answer = -1;
        int tempLeft = 0, tempRight = 0;
        for(int j = 0; j < size - 1; j++){
            // left
            for(int k = 0; k <= j; k++){
                tempLeft += array[k];
            }
            // Right
            for(int l = j + 1; l <= size; l++){
                tempRight += array[l];
            }
            // printf("%d\n", tempLeft);
            // printf("%d\n", tempRight);
            if(tempLeft == tempRight){
                answer = 1;
                break;
            }
            tempLeft = 0;
            tempRight = 0;
        }
        printf("Case #%d: ", i + 1);
        if(answer == 1) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}