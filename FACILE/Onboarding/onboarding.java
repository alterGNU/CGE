import java.util.*;
import java.io.*;
import java.math.*;

class Ennemi{
    private String name;
    private int dist;
    public String getName(){return name; }
    public int getDist(){return dist; }
    public Ennemi(String name, int dist){ 
        this.name=name;
        this.dist=dist;
    }
}
    
class Player {
    public static void main(String args[]) {
        ArrayList<Ennemi> targets = new ArrayList<Ennemi>();
        Scanner in = new Scanner(System.in);
        while (true) {
            Ennemi e1 = new Ennemi(in.next(), in.nextInt());
            Ennemi e2 = new Ennemi(in.next(), in.nextInt());
            targets.add(e1);
            targets.add(e2);
            int index = 0;
            int min = targets.get(0).getDist();
            for (int i=1;i<targets.size();i++){
                if(targets.get(i).getDist()<min){
                    index = i;
                    min = targets.get(i).getDist();
                }
            }
            Ennemi target = targets.remove(index);
            System.out.println(target.getName());
        }
    }
}
