
import java.util.Scanner;

class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Solution getResult = new Solution();
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		String s1 = sc.nextLine();
		String s2 = sc.nextLine();
		int result = getResult.strStr(s1, s2);
		System.out.println(result);
	}

}
