#include <stdio.h>
#include <string.h>

int main(){
    FILE *file = fopen("testdata.in", "r");
    int testcase;
    fscanf(file, "%d\n", &testcase);

    char string[26] = {0};
    for(int i = 0; i < testcase; i++){
        fscanf(file, "%s\n", string);

        int length = strlen(string);
        int perubahan = 0;
        char awal[120] = {0};
        char akhir[120] = {0};
        fscanf(file, "%d\n", &perubahan);
        
        for(int j = 0; j < perubahan; j++){
            fscanf(file, "%c %c\n", &awal[j], &akhir[j]);

            for(int x = 0; x < j; x++){
                if(awal[j] == awal[x]){
                    awal[j] = '0';
                    break;
                }
            }
        }
        for(int k = 0; k < perubahan; k++){
            if(awal[k] == '0') continue;
            for(int l = 0; l < length; l++){
                if(awal[k] == string[l]){
                    string[l] = akhir[k];
                } 
            }
        }
        int counts[26] = {0};

        // for(int z = 0; z < length; z++){
        //     if(string[z] >= 'A' && string[z] <= 'Z'){
        //         char index = string[z] - 'A';
        //         counts[index]++;
        //     }
        // }
        // for(int a = 0; a < 26; a++){
        //     if(counts[a] > 0){
        //         printf("%c %d\n", 'A' + a, counts[a]);
        //     }
        // }

        for(int a = 0; a < length; a++){
            if(string[a] >= 'A' && string[a] <= 'Z'){
                char index  = string[a] - 'A';
                counts[index]++;
            }
        }
        for(int a = 0; a < 26; a++){
            if(counts[a] > 0){
                printf("%c %d\n", a + 'A', counts[a]);
            }
        }

    }
    return 0;
}