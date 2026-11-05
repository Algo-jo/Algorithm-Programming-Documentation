#include <stdio.h>
long long int N = 5;

void sorting(long long int array[]){
    for(int i = 0; i < N * N; i++){
        for(int j = N * N - 1; j > i; j--){
            if(array[j] < array[j - 1]){
                long long int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
    }
}

void solving(int testcase, long long int array[]){
    sorting(array);
    // printing(array);

    long long int tebakan[5] = {0};
    tebakan[0] = array[0] / 2;
    tebakan[4] = array[24] / 2;
    tebakan[1] = array[1] - tebakan[0];
    tebakan[3] = array[23] - tebakan[4];
        for (int j = 0; j < 25; j++){
           
            printf("%d ", array[j]);
                
        } printf("\n");

    for (int j = 0; j < 5; j++){
        if (j == 2) continue;
            
        for (int k = 0; k < 5; k++){
            if (k == 2) continue;
                
            long long int total = tebakan[j] + tebakan[k];
            for (int z = 0; z < 25; z++){
                if (array[z] == total){
                    array[z] = -1;
                    break;
                }
            }
        }
    }

            
        for (int j = 0; j < 25; j++){
            if (array[j] != -1){
                tebakan[2] = array[j] - tebakan[0];
                break;
            }
        }
        for (int j = 0; j < 25; j++){
            printf("%lld ", array[j]);  
        } printf("\n");

    printf("Case #%d:", testcase + 1);
    for(int k = 0; k < N; k++){
        printf(" %d", tebakan[k]);
    }
    printf("\n");
}

int main(){
    int testcase;
    long long int array[N * N];
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        for(int j = 0; j < N * N; j++){
            scanf("%lld", &array[j]);
        }

        solving(i, array);
    }
    return 0;
}