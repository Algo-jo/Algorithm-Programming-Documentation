#include <stdio.h>
int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        int numLength;
        scanf("%d", &numLength);

            int total = 0;
            int numbers[101];
            for(int j = 0; j < numLength; j++){
                scanf("%d", &numbers[j]);
                total += numbers[j];
            }
        int numGreater = 0;
        for(int k = 0; k < numLength; k++){
            if(total < numbers[k]){
                numGreater++;
            }
        }
        printf("Case #%d: %d\n", i, total);
        printf("%d\n", numGreater);
    }
    return 0;
}