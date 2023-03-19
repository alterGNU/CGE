#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFF 256

//void unary(char c){
//    int bin[BUFF];
//    int i = 0;
//    while(c>0){
//        bin[i] = c % 2;
//        c/=2;
//        i++;
//    }
//    int j=i-1;
//    while(j>=0){
//        int n=j-1;
//        while(n>=0 && bin[j]==bin[n]){ n--; }
//        printf("%s ",(bin[j])?"0":"00");
//        for (int r=1;r<=j-n;r++){
//            printf("0");
//        }
//        printf((j>1)?" ":"");
//        j-=(j-n);
//    }
//}

int main() {
    char m[BUFF];
    scanf("%[^\n]", m);
    fprintf(stderr,"%s\n",m);
    //unary(m);
    int num = strtol(m, NULL, 2);
    printf("%d", num);
    return 0;
}
