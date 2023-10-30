#include <stdio.h>

void clearbuffer() {
    while ((getchar()) != '\n');
}

int cv4_prve(){
    FILE *fw;
    int N, c = 1;
    printf("Zadajte pocet riadkov Floydovho trojuholnika od 1 do 10: ");
    scanf("%d", &N);

    fw = fopen("floyd.txt", "w");
    if(N >= 1 && N <= 10){
        printf("Vznikne supor floyd.txt a bude obsahovat %d riadkov:\n", N);
        for(int i = 1; i<=N; i++){
            for(int j = 1; j<=i; j++){
                fprintf(fw, "%d ", c);
                printf("%d ", c);
                c+=1;
            }
            fprintf(fw, "\n");
            printf("\n");

        }
    }
    else{printf("Nespravny vstup");}
    fclose(fw);
}

int cv4_druhe(){
    FILE *ffile;
    int a, b;

    ffile = fopen("rozmery.txt", "r");
    if(fscanf(ffile, "%d %d\n", &a, &b) == 2){
        for(int i = 1; i<=a; i++){
            printf("%d: ", i);
            for(int j = i; j<=b; j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    else{printf("Nespravny rozmery");}
    fclose(ffile);
}

int cv4_tretie (){
    FILE *ffile;
    int n;

    ffile = fopen("tretia.txt", "w");
    printf("Zadajte pocet riadkov Floydovho trojuholnika od 1 do 15: ");
    scanf("%d", &n);
    if(n>=1 && n<=15){
        fprintf(ffile, "Ukazkovy vstup:\n");
        for(int i = 0; i<n; i++){
            for(int j = 1; j<=n-i; j++){
                fprintf(ffile, "%d ", j);
            }
            fprintf(ffile, "\n");
        }
    }
    else{printf("Nespravny rozmery");}
    fclose(ffile);
}

int cv4_stvrte(){
    FILE *ffile;
    int n;

    ffile = fopen("stvrta.txt", "w");
    printf("Zadajte pocet riadkov Floydovho trojuholnika od 1 do 15: ");
    scanf("%d", &n);
    if(n>=1 && n<=15){
        fprintf(ffile, "Ukazkovy vstup:\n");
        for(int i = 0; i<n; i++){
            for(int j = n-i; j>0; j--){
                fprintf(ffile, "%d ", j);
            }
            fprintf(ffile, "\n");
        }
    }
    else{printf("Nespravny rozmery");}
    fclose(ffile);
}

int cv4_piate(){

  int n;

  printf("zadajte cislo: ");
  scanf("%d", &n);

  int sum = 0, sum0 = 0;
  for (int i=1; i<=n; i++) {
    sum += i;
    if (sum % 3 == 0) sum0 = sum;
  }
  printf("%d", sum0);
}

int cv4_sieste(){
    int n, k;

    scanf("%d", &n);
    if(n%2 == 1 && n>=1 && n<=15){
         for(int i = 1; i<=(2*n-1); i++){
        for(int j = 1; j<=n; j++){
            k = i>n ? 2*n-i : i;
            printf("%c ", k<j ? '-':'*');
        }
        printf("\n");
    }
    }
}

int cv4_sedme(){
    int n, k;

    scanf("%d", &n);
    if(n%2 == 1 && n>=1 && n<=15){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                if(i==j || i+j == n+1 || i == (n+1)/2 || j == (n+1)/2) printf("* ");
                else printf("- ");
            }
            printf("\n");
        }
    }
}

int cv4_osme(){
    int n, v;

    scanf("%d %d", &n, &v);
    if(v>=1 && n<=15 && v>=1 && v<=5 && n%2==1){
        for(int i=1; i<=v; i++){
            for(int j=1; j<=(2*n-1); j++){
                for(int l=1; l<=(2*n-1); l++){
                    if(j==l || j+l == 2*n || j==n || l==n) printf("* ");
                    else printf("- ");
                }
                printf("\n");
            }
        }
    }
}

int cv4_deviate(){
    int n, v;

    scanf("%d %d", &n, &v);
    if(v>=1 && n<=15 && v>=1 && v<=5 && n%2==1){
        for(int i=1; i<=n; i++){
            for(int l=1; l<=v; l++){
                for(int j=1; j<=n; j++){
                    if(i==j || i+j == n+1 || i == (n+1)/2 || j == (n+1)/2) printf("* ");
                    else printf("- ");
                }
            }
            printf("\n");
        }
    }
}

int main(){
    /*cv4_prve();
    clearbuffer();
    cv4_druhe();
    clearbuffer();
    cv4_tretie();
    clearbuffer();
    cv4_stvrte();
    clearbuffer();
    cv4_piate();
    clearbuffer();
    cv4_sieste();
    clearbuffer();
    cv4_sedme();
    clearbuffer();
    cv4_osme();
    clearbuffer();*/
    cv4_deviate();
    clearbuffer();
    return 0;
}
