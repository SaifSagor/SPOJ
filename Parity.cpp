/*
                                                                            //LightOJ 1182
                                                                                Parity

Given an integer n, first we represent in binary. Then we count the number of ones. We say n has odd parity if the number of one's is odd. Otherwise we say n has even parity.

For example, 21 = (10101)2 has odd parity since the number of one's is 3. 6 = (110)2 has even parity.

Now you are given n, we have to say whether n has even or odd parity.

Input
Input starts with an integer T (≤ 1000), denoting the number of test cases.

Each case contains an integer n (1 ≤ n < 231).

Output
For each case, print the case number and odd if n has odd parity, otherwise print even.

Sample
Input
2
21
6

Output
Case 1: odd
Case 2: even

*/


//CODE

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, t_count=1;
	cin >> t;
	long long int num;

	while(t--){

		cin >> num;

		int i=0, count=0, temp;

		while(num>0){
			temp = num % 2;
			count = count + temp;
			num = num/ 2;
			i++;
		}

		if(count% 2 == 0){
			cout << "Case " << t_count << ": " << "even" << endl;
		}
		else if(count% 2 != 0){
			cout << "Case " << t_count << ": " << "odd" << endl;
		}

		t_count++;
	}

	return 0;
}
