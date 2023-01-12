import java.util.*;
import java.math.BigInteger;
/*BigInteger class is used for the mathematical operation which involves 
very big integer calculations that are outside the limit of all available 
primitive data types.
*/
class factorial_of_large_number {
	static BigInteger fact(int x) {
		BigInteger f = new BigInteger("1");
		for (int i = 2; i <= x; i++) {
			f = f.multiply(BigInteger.valueOf(i));
		}
		return f;
	}
	public static void main(String[] args) {
		System.out.print("Enter the number : ");
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		System.out.println(fact(x));
	}
}