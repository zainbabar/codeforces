import java.util.Scanner;
public class x282A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        int x = 0;
        for (int i = 0; i < n; i++){
            String s = scan.nextLine();
            if (s.equals("++X") || s.equals("X++")){
                x++;
            }
            else if (s.equals("--X") || s.equals("X--")){
                x--;
            }
        }
        System.out.println(x);
    }  
}
