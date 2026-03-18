
import java.util.*;

public class A_HQ_9 {

    public static void main(String[] args) {
        String p;
        Scanner sc = new Scanner(System.in);
        p = sc.nextLine();
        boolean yes = false;
        for (int i = 0; i < p.length(); i++) {
            if (p.charAt(i) == 'H' || p.charAt(i) == 'Q' || p.charAt(i) == '9') {
                yes = true;
                break;
            }
        }
        System.out.println(yes ? "YES" : "NO");
    }
}
