import java.util.Scanner;
public class tram {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int ans = 0; 
        int on = 0;
        for (int i = 0; i < n; i++){
            on -= scan.nextInt();
            on += scan.nextInt();
            if (on  > ans){
                ans = on;
            }
        }
        System.out.println(ans);
    }
}
