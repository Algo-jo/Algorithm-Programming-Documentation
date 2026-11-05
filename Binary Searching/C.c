#include<stdio.h>

double formula(double num){
    double result = 1.0/6.0*num*(num+1)*(2*num+1);
    return result;
}

double binary(double left, double right, double m){
    double temp2;
    while(left <= right){
        unsigned long long mid = left + (right-left)/2;
        double temp = formula(mid);

        if(temp >= m){
            temp2 = mid;
            right = mid-1;
        }else{
            left = mid+1;
        }
    }

    return temp2;
}

int main(){
    
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        double m;
        scanf("%lf", &m);

        double maxN = binary(0, 1000000000000000001, m);
        printf("Case #%d: %.0lf\n", i , maxN);
    }
    return 0;
}