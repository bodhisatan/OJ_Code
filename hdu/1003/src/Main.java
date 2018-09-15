
import java.math.BigInteger;
import java.util.*;

class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int numberOfCase = sc.nextInt();
		int tmp = 0;
		BigInteger a, b, c;
		while (numberOfCase > tmp) {
			tmp++;
			a = sc.nextBigInteger();
			b = sc.nextBigInteger();
			c = a.add(b);
			System.out.println("Case " + tmp + ":");
			System.out.println(a + " + " + b + " = " + c);
			if (tmp != numberOfCase)
				System.out.println();
		}
	}

}
