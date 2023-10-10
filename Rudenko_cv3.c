#include <stdio.h>

void cv3_prva(){
    int n;
    float zap, max = 0, poc;
    printf("Zadajte pocet realnych cisel: ");
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        float c;
        printf("Zadajte %d.: ", i+1);
        scanf("%g", &c);
        zap = c<0 ? c:zap;
        max = (c>=0 && c>=max) ? c:max;
        poc = (c>=-5.5 && c<=5.5) ? (poc+1):poc;
    }
    printf("Primer zapornych: %g\n", zap);
        printf("Maximum z kladnych: %.2f\n", max);
            printf("Pocet v rozsahu: %g\n", poc);
}


void cv3_druha(){
    int male=0, velke=0, cisla=0;
    char c;
    printf("Zadajte retazec: ");
    while((c = getchar()) != '\n'){
        male = (c>='a' && c<='z') ? (male+1):male;
        velke = (c>='A' && c<='Z') ? (velke+1):velke;
        cisla = (c>='0' && c<='9') ? (cisla+1):cisla;
    }
    printf("Male: %d\n", male);
        printf("Velke: %d\n", velke);
            printf("Cisla: %d\n", cisla);
}

void cv3_tretia(){
    int F, G, D;
    printf("Zadajte hranice intervalu a delitel: ");
    scanf("%d %d %d", &F, &G, &D);
    printf("V intervale <%d, %d> su delitelne cislom %d cisla: ", F, G, D);
    for(int i = F-1; i<=G; i++){
        if(i%D == 0){
            printf("%d ", i);
        }
    }
}

int main()
{
    cv3_tretia();
    return 0;
}
