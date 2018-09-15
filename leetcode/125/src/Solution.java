
import java.util.Scanner;

public class Solution {
	
	public static boolean isPalindrome(String s) {
		boolean flag = true;
		if (s == null) return false;
		if (s.equals("") || s.length() == 1) return true;
		int left = 0, right = s.length() - 1;
		while(true) {
			while(!Character.isDigit(s.charAt(left)) && !Character.isAlphabetic(s.charAt(left))) {
				left++;
				if (left >= s.length()) {
					flag = true;
					break;
				}
			}
			while(!Character.isDigit(s.charAt(right)) && !Character.isAlphabetic(s.charAt(right))) {
				right--;
				if (right < 0) {
					flag = true;
					break;
				}
			}
			if (left >= right) break;
			if (Character.isDigit(s.charAt(left)) && Character.isDigit(s.charAt(right)) && s.charAt(left) != s.charAt(right)) {
				flag = false;
				break;
			}
			if (Character.isAlphabetic(s.charAt(left)) && Character.isAlphabetic(s.charAt(right)) && Character.toLowerCase(s.charAt(left)) != Character.toLowerCase(s.charAt(right))) {
				flag = false;
				break;
			}
			if ((Character.isAlphabetic(s.charAt(left)) && Character.isDigit(s.charAt(right))) || (Character.isAlphabetic(s.charAt(right)) && Character.isDigit(s.charAt(left)))) {
				flag = false;
				break;
			}
			left++;
			right--;
			if (left >= right) break;
		}
		return flag;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String ss = sc.nextLine();
		System.out.println(isPalindrome(ss));
		sc.close();
	}

}
