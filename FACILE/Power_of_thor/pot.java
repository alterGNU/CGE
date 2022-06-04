import java.util.*;
import java.io.*;
import java.math.*;

class Point {
    private int x;
    private int y;
    public Point(int x, int y){
        this.x=x;
        this.y=y;
    }
    public String moveTo(Point target){
        String res = "";
        if(target.y!=y){
            if(target.y>y){
                res+="S";
                y+=1;
            }else{
                res+="N";
                y-=1;
            }
        }
        if(target.x!=x){
            if(target.x>x){
                res+="E";
                x+=1;
            }else{
                res+="W";
                x-=1;
            }
        }
    return res;
    }
}

class Player {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        Point target = new Point(in.nextInt(), in.nextInt());
        Point thor = new Point(in.nextInt(), in.nextInt());
        while (true) {
            int remainingTurns = in.nextInt();
            System.out.println(thor.moveTo(target));
        }
    }
}
