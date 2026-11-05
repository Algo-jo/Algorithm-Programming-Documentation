#include <stdio.h>

double operate(double N){
    return 1.0/6.0 * N * (N + 1) * (2 * N + 1); 
}

double binarySearch(double M, double left, double right){
    double result = -1;
    while(left <= right){
        unsigned long long mid = (left + right) / 2;
        double operation = operate(mid);
        if(operation >= M){
            result = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return result;
}

int main(){
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        double M;
        scanf("%lf", &M);
        double result = binarySearch(M, 0, 1000000000000000001);
        if(result == -1) result = -1;
        printf("Case #%d: %.0lf\n", i + 1, result);
    }

    return 0;
}