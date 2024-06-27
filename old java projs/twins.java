import java.util.Scanner;
public class twins{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        int ans=1;
        int sum = 0;
        int c = 0;
        for (int i = 0; i < n; i++){
            a[i] = in.nextInt(); 
        }
        twins obj = new twins();
        obj.sort(a);
        for(int i=0;i<a.length;i++){
            sum+=a[i];
            for(int j=i+1;j<a.length;j++){
                c+=a[j];
            }
            if(sum>c){
                System.out.println(ans);
                System.exit(0);
            }
            else{
                ans++;
            }
        }
    }

    void sort(int[] arr){
        int n = arr.length;
        for (int i = 0; i < n - 1; i++){
            int min = i;
            for (int j = i+1;j<n;j++){
                if(arr[j]<arr[min]){
                    min=j;
                }
                int temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

// finish later, think im close but idk. 

