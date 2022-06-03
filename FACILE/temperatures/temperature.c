#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n; // the number of temperatures to analyse
    scanf("%d", &n);
    
    if (n > 0){
        int temp = 5526;
        for (int i = 0; i < n; i++) {
            int t; // a temperature expressed as an integer ranging from -273 to 5526
            scanf("%d", &t);
            fprintf(stderr, "temp:%d>t:%d ??\n",temp,t);   
            if (abs(temp)==abs(t) && temp!=t) temp=abs(t);   
            if (abs(temp)>abs(t)) temp=t; 
        }
        printf("%d\n",temp);
    } else {
        printf("0\n");
    }
    return 0;
}
