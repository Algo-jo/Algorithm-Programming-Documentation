#include <stdio.h>
#include <string.h>

int main(){
    FILE *file = fopen("testdata.in", "r");
    int testcase;
    fscanf(file, "%d\n", &testcase);

    char string[120] = {0};
    for(int i = 0; i < testcase; i++){
        fscanf(file, "%s\n", string);

        int length = 0;
        length = strlen(string);
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
        int A = 0, B = 0, C= 0, D = 0, E = 0, F = 0, G = 0, H = 0, I = 0,
        J = 0, K = 0, L = 0, M = 0, N = 0, O = 0, P = 0, Q = 0, R = 0,
        S = 0, T = 0, U = 0, V = 0, W = 0, X = 0, Y = 0, Z = 0;
        for(int z = 0; z < length; z++){
            if(string[z] == 'A') A++;
            else if(string[z] == 'B') B++;
            else if(string[z] == 'C') C++;
            else if(string[z] == 'D') D++;
            else if(string[z] == 'E') E++;
            else if(string[z] == 'F') F++;
            else if(string[z] == 'G') G++;
            else if(string[z] == 'H') H++;
            else if(string[z] == 'I') I++;
            else if(string[z] == 'J') J++;
            else if(string[z] == 'K') K++;
            else if(string[z] == 'L') L++;
            else if(string[z] == 'M') M++;
            else if(string[z] == 'N') N++;
            else if(string[z] == 'O') O++;
            else if(string[z] == 'P') P++;
            else if(string[z] == 'Q') Q++;
            else if(string[z] == 'R') R++;
            else if(string[z] == 'S') S++;
            else if(string[z] == 'T') T++;
            else if(string[z] == 'U') U++;
            else if(string[z] == 'V') V++;
            else if(string[z] == 'W') W++;
            else if(string[z] == 'X') X++;
            else if(string[z] == 'Y') Y++;
            else if(string[z] == 'Z') Z++;
        }
        if(A > 0) printf("A %d\n", A);
        if(B > 0) printf("B %d\n", B);
        if(C > 0) printf("C %d\n", C);
        if(D > 0) printf("D %d\n", D);
        if(E > 0) printf("E %d\n", E);
        if(F > 0) printf("F %d\n", F);
        if(G > 0) printf("G %d\n", G);
        if(H > 0) printf("H %d\n", H);
        if(I > 0) printf("I %d\n", I);
        if(J > 0) printf("J %d\n", J);
        if(K > 0) printf("K %d\n", K);
        if(L > 0) printf("L %d\n", L);
        if(M > 0) printf("M %d\n", M);
        if(N > 0) printf("N %d\n", N);
        if(O > 0) printf("O %d\n", O);
        if(P > 0) printf("P %d\n", P);
        if(Q > 0) printf("Q %d\n", Q);
        if(R > 0) printf("R %d\n", R);
        if(S > 0) printf("S %d\n", S);
        if(T > 0) printf("T %d\n", T);
        if(U > 0) printf("U %d\n", U);
        if(V > 0) printf("V %d\n", V);
        if(W > 0) printf("W %d\n", W);
        if(X > 0) printf("X %d\n", X);
        if(Y > 0) printf("Y %d\n", Y);
        if(Z > 0) printf("Z %d\n", Z);
    }
    return 0;
}