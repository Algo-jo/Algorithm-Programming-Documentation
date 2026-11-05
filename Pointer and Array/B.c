#include <stdio.h>
int main(){
    int testcase, banyakPerubahan;
    int hargaAwal[101] = {0};
    
    scanf("%d", &testcase);
        for(int i = 0; i < testcase; i++){
            scanf("%d", &hargaAwal[i]);
        }
    //Masuk ke dalam perubahan data

    scanf("%d", &banyakPerubahan);
        for(int j = 0; j < banyakPerubahan; j++){
            int target;
            int hargaBaru;
            scanf("%d %d", &target, &hargaBaru);

            hargaAwal[target - 1] = hargaBaru;
      
            printf("Case #%d: ", j + 1);
            for(int k = 0; k < testcase; k++){
                printf("%d ", hargaAwal[k]);
            }
            printf("\n");
        }
    return 0;
}