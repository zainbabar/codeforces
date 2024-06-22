import java.util.Scanner;

public class insearchofaneasyproblem {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        boolean ans = false;
        for (int i = 0; i < n; i++){
            if (scan.nextInt() == 1){
                ans = true;
            }
        }
        if (ans){
            System.out.println("hard");
        }
        else {
            System.out.println("easy");
        }
    scan.close();
    }
}
