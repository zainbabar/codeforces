import java.util.Scanner;
public class evenodds {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long n = scan.nextLong();
        long k = scan.nextLong();

        // calc the postion of the last odd num in the sequence
        // if its even the n the + 1 would trunctuate
        // if its odd then the + 1 would make it even theres 1 extra odd num i.e 4:3 ratio 
        long numOdds = (n + 1) / 2;

        if (k <= numOdds){
            // if postin of k is in the range of odds 
            // i.e. 2 * 1 - 1 gives first, 2 * 2 - 1 gives second, etc. 
            System.out.println(2 * k - 1);
        }
        else {
            // positon of k is in range of evens
            System.out.println(2 * (k - numOdds));
            // the postion of the kth number after the odds is k - numOdds
            // we want to find how far in it is into the sequence
            // then just mulitpy by its positon, i.e 2 * 1 or 2 * 2 to get the first and second nums of the sequence
        }
    }
}
