#include <stdio.h>

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        int amount = 0;
        scanf("%d", &amount);

        int array[520] = {0};
        for(int j = 0; j < amount; j++){
            scanf("%d", &array[j]);
        }

        for(int x = 0; x < amount; x++){
            int min = x;
            for(int y = x; y < amount; y++){
                if(array[y] < array[min]){
                    min = y;
                }
            }
            if(min != x){
                int temp = array[min];
                array[min] = array[x];
                array[x] = temp;
            }
        }
        int half = amount / 2;

        int maks1 = 0, maks2 = 0;
        int selisih1 = 0, selisih2 = 0;
        for(int j = 0; j < half - 1; j++){
            selisih1 = array[j] - array[j + 1];
            if(selisih1 < 0) selisih1 *= -1;

            if(selisih1 > maks1){
                maks1 = selisih1;
            }
        }
        for(int j = half; j < amount - 1; j++){
            selisih2 = array[j] - array[j + 1];
            if(selisih2 < 0) selisih2 *= -1;

            if(selisih2 > maks2){
                maks2 = selisih2;
            } 
        }
        printf("Case #%d: ", i + 1);
        if(maks1 < maks2) printf("%d\n", maks2);
        else printf("%d\n", maks1);

    }
    return 0;
}