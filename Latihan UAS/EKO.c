#include <stdio.h>

int main(){
    FILE *fp = fopen("testdata.in", "r");
    FILE *out = fopen("output.in", "w");
    int n;
    int k, counter = 0;
    fscanf(fp, "%d\n", &n);
    for(int i = 0; i < n; i++){
        fscanf(fp, "%d ", &k);
        counter += k;
    }
    
    fprintf(out, "%d\n", counter);
    fclose(fp);
    fclose(out);
}