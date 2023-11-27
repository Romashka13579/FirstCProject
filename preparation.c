#include <stdio.h>
#include <stdlib.h>

int AnalyzujMaticu(int sucet, int parne){
    int m[3][3] = {{25, 50, 75}, 100, 2, 44, 6, 1};
    sucet = 0;
    parne = 0;
    int pocet = 0;
    printf("%d", m[1][1]);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(m[i][j]>=1 && m[i][j]<=50){
                pocet++;
                sucet += m[i][j];
                if(m[i][j]%2 == 0){
                    parne++;
                }
            }
        }
    }
    return pocet;
}

int main(){
    int m = {25, 50, 75, 100, 2, 44, 6, 1};
    int sum = 0, count = 0;
    int c = AnalyzujMaticu(0, 0);
    printf("%d", c);
    return 0;
}
