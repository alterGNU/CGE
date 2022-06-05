import java.util.*;
import java.io.*;
import java.math.*;

class Node {
    // ATTRIBUTS
    private int x;
    private int y;
    private char v;
    private String rN="-1 -1";
    private String dN="-1 -1";
    // CONSTRUCTOR
    public Node(int x, int y, char v){
        this.x=x;
        this.y=y;
        this.v=v;
    }
    // GETTERS
    public int getX(){ return x; }
    public int getY(){ return y; }
    public char getV(){ return v; }
    // SETTERS
    public void setRN(String value){ rN=value; }
    public void setDN(String value){ dN=value; }
    // METHODS
    public String toString(){return y+" "+x+" "+rN+" "+dN;}
}

class Player {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int w = in.nextInt();
        int h = in.nextInt();
        if (in.hasNextLine()) { in.nextLine(); }
        ArrayList<Node> mat = new ArrayList();
        for (int i = 0; i < h; i++) {
            String line = in.nextLine();
            for (int j = 0; j < line.length(); j++){
                Node n = new Node(i,j,line.charAt(j));
                mat.add(n);
                // Update previous nodes att.
                if (mat.size()>1){
                    boolean xFound = false;
                    boolean yFound = false;
                    String value = String.valueOf(n.getY())+" "+String.valueOf(n.getX());
                    for (int m=mat.indexOf(n)-1;m>-1;m--){
                        Node ante = mat.get(m);
                        if (xFound && yFound){ break; }
                        if (!xFound && n.getV()=='0' && ante.getV()=='0' && (ante.getX()==n.getX())){
                            ante.setRN(value);
                            xFound=true;
                        }
                        if (!yFound && n.getV()=='0' && ante.getV()=='0' && (ante.getY()==n.getY())){
                            ante.setDN(value);
                            yFound=true;
                        }
                    }
                }
            }
        }
        // Show Time!
        for (int n=0;n<mat.size();n++){
            Node nd = mat.get(n);
            if (nd.getV()=='0'){ System.out.println(nd);}
        }
    }
}
