
class Solution {
	
	int divide(int dividend, int divisor) {
		boolean isGreaterThanZero = true;
		if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0))
			isGreaterThanZero = false;
		long num1 = Math.abs((long)dividend);
		long num2 = Math.abs((long)divisor);
		long result = 0;
		while (num1 >= num2) {
			long tmp = num2;
			long count = 1;
			while (num1 >= tmp) {
				result += count;
				num1 -= tmp;
				count = count << 1;
				tmp = tmp << 1;
			}
		}
		if (!isGreaterThanZero) result = (-1) * result;
		if (result > 2147483647) result = 2147483647;
		return (int)result;
	}
	
}
