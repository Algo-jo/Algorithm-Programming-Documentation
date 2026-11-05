#include <stdio.h>
#include <string.h>

struct data{
    int no;
    char nama[51];
}mhs[100];;

void sorting(int count, char sortby[], char method[]){
    int i, j;
    struct data temp;

    for(i = 0; i < count - 1; i++){
        for(j = count - 1; j > i; j--){
            if(strcmp(sortby, "NO") == 0){
                if(strcmp(method, "ASC") == 0){
                    if(mhs[j].no < mhs[j - 1].no){
                        temp = mhs[j];
                        mhs[j] = mhs[j - 1];
                        mhs[j - 1] = temp;
                    }
                }
                else if(strcmp(method, "DESC") == 0){
                    if(mhs[j].no > mhs[j - 1].no){
                        temp = mhs[j];
                        mhs[j] = mhs[j - 1];
                        mhs[j - 1] = temp;
                    }
                }
            }
            else if(strcmp(sortby, "NAMA") == 0){
                if(strcmp(method, "ASC") == 0){
                    if(strcmp(mhs[j].nama, mhs[j - 1].nama) < 0){
                        // Karena temp itu struct.. jadi bisa langsung diassign
                        // ga perlu pake strcpy
                        temp = mhs[j];
                        mhs[j] = mhs[j - 1];
                        mhs[j - 1] = temp;
                    }
                }
                else if(strcmp(method, "DESC") == 0){
                    if(strcmp(mhs[j].nama, mhs[j - 1].nama) > 0){
                        temp = mhs[j];
                        mhs[j] = mhs[j - 1];
                        mhs[j - 1] = temp;
                    }
                }
            }
        }
    }
}

int main(){
    int n;
    char sortby[10], method[10];

    FILE *fin = fopen("testdata1.in", "r");
    // baca file
    fscanf(fin, "%d\n", &n);

    for(int i = 0; i < n; i++){
        fscanf(fin, "%d#%[^\n]\n", &mhs[i].no, &mhs[i].nama);
        // printf("%d %s\n", mhs[i].no, mhs[i].nama);
    }
    // process
    fscanf(fin, "%s %s\n", sortby, method);
    sorting(n, sortby, method);
    for(int j = 0; j < n; j++){
        printf("%d %s\n", mhs[j].no, mhs[j].nama);
    }

    fclose(fin);
    return 0;
}