#include <stdio.h>
#include <string.h>

int binarysearch(char choice[],int testcase, char array[][30]){
    int low = 0;
    int high = testcase - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(strcmp(choice, array[mid]) == 0){
            return mid;
        }
        else if(strcmp(choice, array[mid]) < 0){
            high = mid - 1;
        }
        else if(strcmp(choice, array[mid]) > 0){
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    FILE *file;
    file = fopen("testdata.in", "r");
    
    int testcase;
    fscanf(file, "%d\n", &testcase);

    char NIM[testcase + 5][30];
    char name[testcase + 5][50];
    for(int i = 0; i < testcase; i++){
        fscanf(file, "%s %s\n", NIM[i], name[i]);
    }

    int test;
    fscanf(file, "%d\n", &test);

    char choice[test + 5][30];
    for(int j = 0; j < test; j++){
        fscanf(file, "%s\n", choice[j]);
    }

    int hasil[test + 5];
    for(int j = 0; j < test; j++){
        hasil[j] = binarysearch(choice[j], testcase, NIM);
    }

    for(int j = 0; j < test; j++){
        if(hasil[j] == -1){
            printf("Case #%d: N/A\n", j + 1);
        }
        else{
            printf("Case #%d: %s\n", j + 1, name[hasil[j]]);
        }
    }
       
    fclose(file);
    return 0;
}