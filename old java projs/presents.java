import java.util.Scanner;
public class presents{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] p = new int[n];
        // 
        for (int i = 0; i < n; i++){
            p[scan.nextInt() - 1] = i;
        }
        for (int i = 0; i < n; i++){
            System.out.print(p[i] + 1 + " ");
        }
        scan.close();
    }
}