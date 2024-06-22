import java.util.Scanner;

public class georgeandaccomodation {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int ans = 0;
        for (int i = 0; i < n; i++){
            int p = scan.nextInt();
            int q = scan.nextInt();
            if (p <= q - 2){
                ans++;
            }
        }
        System.out.println(ans);
    }
}
