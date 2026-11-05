#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int tc;
    fscanf(fp, "%d\n", &tc);
    for(int i = 0; i < tc; i++){
        char str[1000] = {0}, a, b;
        int used[100] = {0}, count[100] = {0};
        int n;
        fscanf(fp, "%s\n", str);
        fscanf(fp, "%d\n", &n);
        int len = strlen(str);
        for(int j = 0; j < n; j++){
            fscanf(fp, "%c %c\n", &a, &b);

            for(int k = 0; k < len; k++){
                if(str[k] == a && used[a] != -1) str[k] = b;
            }
            used[a] = -1;
        }
        // printf("%s\n", str);
        for(int j = 0; j < len; j++){
            count[str[j] - 'A']++;
        }
        for(int j = 0; j < 26; j++){
            if(count[j] != 0) printf("%c %d\n", j + 'A', count[j]);
        }
    }
    fclose(fp);
    return 0;
}