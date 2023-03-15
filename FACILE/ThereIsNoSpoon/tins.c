#include <stdlib.h>
#include <stdio.h>

void voisinH(int l,int c,char **mat,int h,int w){
    int x = -1;
    int y = -1;
    int nc = c + 1;
    while(nc<w){
        if(mat[l][nc]!='.'){
            x=l;
            y=nc; 
            break;
        }
        nc++;
    }
    printf(" %d %d",y,x);
}
void voisinV(int l,int c,char **mat,int h,int w){
    int x = -1;
    int y = -1;
    int nl = l + 1;
    while(nl<h){
        if(mat[nl][c]!='.'){
            x=nl;
            y=c;
            break;
        }
        nl++;
    }
    printf(" %d %d\n",y,x);
}
int main() {
    // INPUTS
    int width;           // the number of cells on the X axis
    scanf("%d", &width); // the number of cells on the Y axis
    int height;
    scanf("%d", &height); fgetc(stdin);
    char **mat = (char **)malloc(height * sizeof(char *));
    for (int i = 0; i < height; i++) {
        mat[i] = (char *)malloc((width+1) * sizeof(char));
        scanf("%[^\n]", mat[i]); fgetc(stdin);
    }
    // COMPUTS
    for (int l = 0; l < height; l++) {
        for (int c = 0; c < width; c++) {
            if(mat[l][c]!='.'){
                printf("%d %d",c,l);
                voisinH(l,c,mat,height,width);
                voisinV(l,c,mat,height,width);
            }
        }
    }
    // FREEUTS
    for (int i = 0; i < height; i++) { free(mat[i]); }
    free(mat);
    return 0;
}
