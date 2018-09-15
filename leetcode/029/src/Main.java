
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		/*TLESolution getAnswer = new TLESolution();
		System.out.println(getAnswer.add(a,b));
		System.out.println(getAnswer.subtract(a,b));
		System.out.println(getAnswer.multiply(a,b));
		System.out.println(getAnswer.divide(a,b)); */
		
		Solution getResult = new Solution();
		System.out.println(getResult.divide(a, b));
	}

}