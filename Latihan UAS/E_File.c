#include <stdio.h>

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int tc, n;
    fscanf(fp, "%d\n", &tc);
    for(int i = 0; i < tc; i++){
        int arr[120] = {0};
        int area = 0, perimeter = 0;
        fscanf(fp, "%d\n", &n);
        for(int j = 0; j < n; j++){
            fscanf(fp, "%d", &arr[j]);
            // printf("%d ", arr[j]);
            area += arr[j];
        }
        perimeter = arr[0] + arr[n - 1] + (2 * n); 

        int temp = 0;
        for(int j = 0; j < n - 1; j++){
            temp = arr[j] - arr[j + 1];
            if(temp < 0) temp *= -1;
            perimeter += temp;
        }
        printf("Case #%d: %d %d\n", i + 1, perimeter * 2, area * 4);
    }
    fclose(fp);
    return 0;
}