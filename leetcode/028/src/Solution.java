class Solution {
	
	public int strStr(String haystack, String needle) {
		int ans = 0;
		if (needle.equals("")) return 0;
		int lengthOfHaystack = haystack.length();
		int lengthOfNeedle = needle.length();
		if (lengthOfHaystack < lengthOfNeedle)
			return -1;
		boolean flag = false;
		OUT:
		for (int i = 0; i <= lengthOfHaystack - lengthOfNeedle; i++) {
			for (int j = 0; j <= lengthOfNeedle; j++) {
				if (haystack.charAt(j + i) != needle.charAt(j))
					break;
				if (j == lengthOfNeedle - 1 && haystack.charAt(j + i) == needle.charAt(j)) {
					flag = true;
					ans = i;
					break OUT;
				}	
			}
		}
		if (!flag) return -1;
		return ans;
	}
	
}