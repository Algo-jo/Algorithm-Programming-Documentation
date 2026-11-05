#include <stdio.h>

int main() {
    int N, roll[2000], position = 0;
    int ladders[3][2] = {{9, 21}, {33, 42}, {76, 92}};
    int snakes[3][2] = {{53, 37}, {80, 59}, {97, 88}};

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &roll[i]);
    }
    for(int i = 0; i < N; i++){
        position += roll[i];
    }

    if(position > 30000) {position = 30000;}

    for(int j = 0; j < N; j++){
        if(position == ladders[j][0]){
            position == ladders[j][1];
            break;
        }
    }
    for(int j = 0; j < N; j++){
        if(position == snakes[j][0]){
            position == snakes[j][1];
            break;
        }

    }
    printf("%d", position);
    return 0;   
}