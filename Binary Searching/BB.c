#include <stdio.h>

double operation(double N){
    return 1.0/6.0 * N * (N + 1) * (2 * N + 1); 
}

double binarySearch(double target, double right, double left){
    
    double result;
    while(left <= right){
        long long mid = (left + right) / 2;
        double operator = operation(mid);
        if(operator >= target){
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
        printf("Case #%d: ", i + 1);

        double result = binarySearch(M, 1000000000000000001, 0);
        printf("%.0lf\n", result);
    }

    return 0;
}