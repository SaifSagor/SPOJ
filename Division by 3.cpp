/*                                                                  LightOJ 1136
                                                                    Division by 3
                                                                    
                                                                    
There is sequence 1, 12, 123, 1234, ..., 12345678910, .... Now you are given two integers A and B, you have to find the number of integers from Ath number to Bth (inclusive) number, which are divisible by 3.

For example, let A = 3. B = 5. So, the numbers in the sequence are, 123, 1234, 12345. And 123, 12345 are divisible by 3. So, the result is 2.

Input
Input starts with an integer T (≤ 10000), denoting the number of test cases.

Each case contains two integers A and B (1 ≤ A ≤ B < 231) in a line.

Output
For each case, print the case number and the total numbers in the sequence between Ath and Bth which are divisible by 3.

Sample
Input	
2
3 5
10 110

Output
Case 1: 2
Case 2: 67

*/


//CODE

#include<bits/stdc++.h>
using namespace std;

long long int div_by_3(long long int pos){

	if(pos == 0){
		return 0;
	}
	long long int ans;

	if(pos % 3 == 0){
		ans = pos/3;
	}
	else if(pos % 3 == 1 || pos % 3 == 2){
		ans = (pos/3)+1;
	}

	return pos - ans;
}

int main(){

	int t, t_count=1;
	cin >> t;
	long long int a,b;

	while(t--){

		long long int result;

		cin >> a >> b;

		result = div_by_3(b) - div_by_3(a-1);


		cout << "Case " << t_count << ": " << result  << endl;
		
		t_count++;
	}

	return 0;
}
