import java.util.*;
import java.io.*;
import java.math.*;
class Player {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        while (true) {
            int[] mountains = new int[8];
            for (int i = 0; i < 8; i++) {
                mountains[i] = in.nextInt();
            }
            int max = 0;
            int index = 0;
            for (int i = 0; i < 8; i++) { 
                if (max<mountains[i]){
                    max = mountains[i];
                    index = i;
                }
            }
            System.out.println(index);
        }
    }
}
