#include <stdio.h>
#include <string.h>
int main(){
    int size;
    int hargaAwal[1005];
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        scanf("%d", &hargaAwal[i]);
    }
    // 1 2 3
    // 0 1 2
    int testcase;
    scanf("%d", &testcase);
    for(int j = 0; j < testcase; j++){
        int hargaKe, perubahan;
        scanf("%d %d", &hargaKe, &perubahan);

        hargaAwal[hargaKe - 1] = perubahan;
        printf("Case #%d: ", j + 1);
        for(int k = 0; k < size; k++){
            printf("%d", hargaAwal[k]);
            if(k == size - 1) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}
