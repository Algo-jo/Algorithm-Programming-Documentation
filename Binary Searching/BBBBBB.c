#include <stdio.h>

double rumus(double N){
    return ((N * (N + 1)) * (2 * N + 1)) / 6;
}

int main(){

    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        double n;
        scanf("%lf", &n);

        long long left = 1;
        long long right = 1000000000000000001;
        double result = 0;
        while(left <= right){
            unsigned long long mid = (left + right) / 2;
            double equation = rumus(mid);

            if(equation >= n){
                result = mid;
                right = mid - 1;
            }
            else left = mid + 1;
        }
        printf("Case #%d: %.0lf\n", i + 1, result);
    }
    return 0;
}