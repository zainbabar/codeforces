import java.util.Scanner;
public class football {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        int c=0;
        if (s.length() > 6){
            for (int i = 0; i < s.length() - 6; i++){
                for (int j = 0; j < 7; j++){
                    if (s.charAt(i) == s.charAt(i + j)){
                        c++;
                    }
                    else {
                        break;
                    }
                }
                if (c >= 7){
                    System.out.println("YES");
                    System.exit(0);
                }
                c = 0;
            }
        }
        System.out.println("NO");
    }
}
