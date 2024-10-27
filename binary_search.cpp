import java.util.*;
public class BS {
    public static int bs(List<Integer> a, int x) {
        int l = 0, r = a.size() - 1;
        while (l <= r) {
            int mid = l + ((r - l) >> 1); 
            if (a.get(mid) < x)
                l = mid + 1;
            else if (a.get(mid) > x)  
                r = mid - 1;
            else 
                return mid; 
        }
        return -1; 
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> a = new ArrayList<>();   
        for (int i = 0; i < n; i++) {
            a.add(sc.nextInt());
        }     
        Collections.sort(a);
        int x = sc.nextInt();
        int result = bs(a, x);
        if (result == -1)
            System.out.println("Not found");
        else
            System.out.println("Found at index " + result);
    }
}
