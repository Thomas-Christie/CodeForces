import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class Wrong_Subtraction {
    public static void main(String[] args) throws IOException {
        ArrayList<Integer> a = new ArrayList<>();
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            if (in.hasNextInt())
                a.add(in.nextInt());
            else
                in.next();
        }
        int n = a.get(0);
        int k = a.get(1);
        System.out.println(new Solver().solve(n, k));
    }
}

class Solver {
    public int solve(int n, int k) {
        for(int i=0;i<k;i++) {
            if(n%10==0) {
                n/=10;
            } else {
                n-=1;
            }
        }
        return n;
    }
}

