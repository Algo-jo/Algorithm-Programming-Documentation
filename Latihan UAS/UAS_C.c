#include <stdio.h>

int main(){
    int n, l, diamond[1050] = {0};
    scanf("%d %d", &n, &l);
    for(int i = 0; i < n; i++){
        scanf("%d", &diamond[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j > i; j--){
            if(diamond[j] < diamond[j - 1]){
                int temp = diamond[j];
                diamond[j] = diamond[j - 1];
                diamond[j - 1] = temp;
            }
        }
    }

    double a, b, c;
    a = diamond[0];
    b = l - diamond[n - 1];
    if(a < b) c = b;
    else c = a;

    double maks = 0, selisih = 0;
    for(int i = 0; i < n - 1; i++){
        selisih = diamond[i] - diamond[i + 1];
        if(selisih < 0) selisih *= -1;
        if(selisih > maks) maks = selisih; 
    }
    if(maks < c) maks = c;
    printf("%.2lf\n", maks);
    return 0;
}