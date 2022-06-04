import java.util.*;
import java.io.*;
import java.math.*;

class Solution {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        if (n!=0){
            int[] tab = new int[n];
            ArrayList<Integer> res ;
            int m = in.nextInt();
            for (int i = 1; i < n; i++) { 
                int v = in.nextInt();
                if (Math.abs(v)<Math.abs(m)||(v==-m && v>0)){
                    m = v;
                }
            }
            System.out.println(m);
        }else{
            System.out.println(0);
        }
    }
}
