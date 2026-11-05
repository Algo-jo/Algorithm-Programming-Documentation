#include<stdio.h>

long long int findLongestSegment(long long int a[], long long int target, long long int n){
    int maxLength = -1;
    long long int currSum = 0;
    int start = 0;

    for(int end=0; end<n; end++){
        currSum += a[end];

        while(currSum > target){
            currSum -= a[start];
            start++;
        }

        maxLength = (end-start+1 > maxLength) ? end-start+1 : maxLength;
    }
    return maxLength;
}

int main(){
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        long long n,m;
        scanf("%lld %lld", &n, &m);

        long long a[n+1];
        for(int j=0; j<n; j++){
            scanf("%lld", &a[j]);
        }

        long long result = findLongestSegment(a, m, n);
        if(!result) result = -1;
        printf("Case #%d: %lld\n", i, result);
    }
    return 0;
}