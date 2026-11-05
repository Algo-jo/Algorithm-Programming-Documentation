#include <stdio.h>
int main(){
    //Declaring the variable
    int a1, b1, c1, d1, t;
    int a2, b2, c2, d2;
    int a3, b3, c3, d3;
    double total1, total2, total3;

    // Inputting all of the variable
    scanf("%d", &t);
    if(t==3){
    scanf("%d %d %d %d", &a1, &b1, &c1, &d1); getchar();
    scanf("%d %d %d %d", &a2, &b2, &c2, &d2); getchar();
    scanf("%d %d %d %d", &a3, &b3, &c3, &d3); getchar();

    // Box no. 1
    double B1, B2, B3, B4;
    B1 = (double)a1/1*2; B2 = (double)b1/2*4; B3 = (double)c1/3*4; B4 = (double)d1/4*2;
    total1 = (B1 + B2 + B3 + B4);

    // Box no. 2
    double C1, C2, C3, C4;
    C1 = (double)a2/1*2; C2 = (double)b2/2*4; C3 = (double)c2/3*4; C4 = (double)d2/4*2;
    total2 = (C1 + C2 + C3 + C4);

    // Box no. 3
    double D1, D2, D3, D4;
    D1 = (double)a3/1*2; D2 = (double)b3/2*4; D3 = (double)c3/3*4; D4 = (double)d3/4*2;
    total3 = (D1 + D2 + D3 + D4);

    // Output of all of the boxes
    printf("%.2lf\n", total1);
    printf("%.2lf\n", total2);
    printf("%.2lf\n", total3);
    }
    return 0;

}