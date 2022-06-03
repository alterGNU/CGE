import java.util.*;
import java.io.*;
import java.math.*;

class Code{
    private String message;
    private String binary="";
    private String code="";
    public String getBinary(){return binary; }
    public Code(String message){
        this.message=message;
        for (char e : message.toCharArray()){
            String bin = Integer.toBinaryString((byte) e);
            int zeros = 7 - bin.length();
            if (zeros>0){
                for (int i=0;i<zeros;i++){ binary+="0"; }
            }
            binary+=bin;
        }
        int a = 0;
        for (int i = 1; i<binary.length(); i++){
            if(binary.charAt(a)!=binary.charAt(i)){
                code+=(binary.charAt(a)=='0'?"00":"0")+" ";
                for (int j=0;j<(i-a);j++){ code+="0"; }
                code+=" ";
                a = i ;
            }
        }
        code+=(binary.charAt(a)=='0'?"00":"0")+" ";
        for (int j=0;j<(binary.length()-a);j++){ code+="0"; }
    }
    public String toString(){ return code; }

}

class Solution {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        Code c = new Code(in.nextLine());
        System.out.println(c);
    }
}
