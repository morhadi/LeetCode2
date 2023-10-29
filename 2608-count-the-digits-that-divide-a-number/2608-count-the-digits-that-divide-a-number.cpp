class Solution {
public:
    int countDigits(int num) {
        int c =0 , n = num ;
	while (n > 0) {
		int r = n%10;
		if (num % r ==0) c++ ;
		n /= 10;
	}
	return c;
    }
};