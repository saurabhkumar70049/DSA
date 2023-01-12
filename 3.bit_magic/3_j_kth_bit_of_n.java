import java.util.*;
class kth_bit {
    static void kth(int n, int k) {
        if (((n >> (k-1)) & 1) != 0) {
            System.out.println("SET");
        }
        else {
            System.out.println("NOT SET");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n : ");
        int n = sc.nextInt();
        System.out.print("Enter k : ");
        int k = sc.nextInt();

        kth(n, k);

    }
}