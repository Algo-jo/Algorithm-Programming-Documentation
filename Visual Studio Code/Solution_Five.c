#include <stdio.h>

int main(){

    int testcase;
    scanf("%d", &testcase); getchar();
    
    for (int i = 1; i <= testcase; i++) {
    	int needs, home, store, combine;
        scanf("%d %d %d", &needs, &home, &store); getchar();
    	combine = home + store;
    if (needs <= home + store) {
        printf("Case #%d: yes\n", i);
    }
    else {
	printf("Case #%d: no\n", i);
}
}
    return 0;
}