import java.util.Scanner;
public class hq9 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String p = scan.nextLine();
        for (int i = 0; i < p.length(); i++){
            if (p.charAt(i) == 'H' || p.charAt(i) == 'Q' || p.charAt(i) == '9'){
                System.out.println("YES");
                System.exit(0);
            }
        }
        System.out.println("NO");
    }
}

