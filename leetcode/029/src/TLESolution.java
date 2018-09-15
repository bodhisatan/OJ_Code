
public class TLESolution {

		public int add(int num1, int num2) {
			int answerOfAdd = num1;
			while (num2 != 0) {
				int tmp = num1;
				num1 = num1 ^ num2;
				num2 = (tmp & num2) << 1;
				answerOfAdd = num1;
			}
			return answerOfAdd;
		}
		
		public int subtract(int num1, int num2) {
			num2 = this.add(~num2, 1);
			return this.add(num1, num2);
		}

		public int multiply(int num1, int num2) {
			boolean isNegative = false;
			if ((num1 > 0 && num2 < 0) || (num1 < 0 && num2 > 0)) isNegative = true;
			if (num1 < 0) num1 = this.add(~num1, 1);
			if (num2 < 0) num2 = this.add(~num2, 1);
			int answerOfMultiply = 0;
			while (num2 != 0) {
				if ((num2 & 1) != 0)
					answerOfMultiply = this.add(answerOfMultiply, num1);
				num1 = num1 << 1;
				num2 = num2 >> 1;
			}
			if (isNegative) answerOfMultiply = this.add(~answerOfMultiply, 1);
			return answerOfMultiply;
		}
		
		public int divide(int dividend, int divisor) {
			boolean isNegative = false;
			if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)) isNegative = true;
			if (dividend < 0) dividend = this.add(~dividend, 1);
			if (divisor < 0) divisor = this.add(~divisor, 1);
			int answerOfDivide = 0;
			while (dividend >= divisor) {
				answerOfDivide = this.add(answerOfDivide, 1);
				dividend = this.subtract(dividend, divisor);
			}
			if (isNegative) answerOfDivide = this.add(~answerOfDivide, 1);
			return answerOfDivide;
	    }
		
}