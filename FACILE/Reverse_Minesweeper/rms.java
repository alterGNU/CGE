import java.util.*;
import java.io.*;
import java.math.*;

class Matrice{
    private int l, c;
    private int[][] tab;
    public Matrice(int l, int c){
        this.l=l;
        this.c=c;
        tab = new int[l][c];
    }
    public void setValue(int i, int j, int value){ tab[i][j]=value; }
    public void solve(){
        for (int i=0; i<l; i++){
            for (int j=0; j<c; j++){
                if (tab[i][j]<0){
                    for (int a=(i>1 ? i-1 : 0); (i+2<l ? a<i+2 : a<l); a++){
                        for (int b=(j>1 ? j-1 : 0); (j+2<c ? b<j+2 : b<c); b++){
                            if ((a!=i || b!=j)&&(tab[a][b]>-1)){
                                tab[a][b]++;
                            }
                        }
                    }
                }
            }
        }
    }
    public void rep(){
        for (int i=0; i<l; i++){
            for (int j=0; j<c; j++){
                System.out.print(String.format("%c",(tab[i][j]>0 ? '0'+tab[i][j]:'.')));
            }
            System.out.println();
        }
    }
}

class Solution {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int w = in.nextInt();
        int h = in.nextInt();
        Matrice mat = new Matrice(h, w);
        if (in.hasNextLine()) { in.nextLine(); }
        for (int i = 0; i < h; i++) {
            String line = in.nextLine();
            for (int j = 0; j < w; j++) { mat.setValue(i, j, (line.charAt(j)=='.' ? 0 : -1)); }
        }
        mat.solve();
        mat.rep();
    }
}
