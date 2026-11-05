#include <stdio.h>
int main(){
    int kapasitas, item;
    scanf("%d", &kapasitas);
    int count = 0;
    int packet = 0;
    for(int i = 1; i <= kapasitas; i++){
        scanf("%d", &item); count++;
        if(count % kapasitas / 2 == 0){
            packet = packet + 1;
        }
    }
    printf("%d", packet);
    packet = 0;
    return 0;
}