import java.util.Scanner;

public class vanyaandfence {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int h = scan.nextInt();
        int ans = 0;
        for (int i = 0; i < n; i++){
            if (scan.nextInt() <= h){
                ans++;
            }
            else {
                ans+=2;
            }
        }
        System.out.println(ans);
    }
}

