/*
                                                        LightOj 1001
                                                        Opposite Task
 
This problem gives you a flavor of the concept of a special judge. That means the judge is smart enough to verify your code even though it may print different results. In this problem, you are asked to find the opposite task of the previous problem.

To be specific, I have two computers where I stored my problems. Now I know the total number of problems is n. There are no duplicate problems, and there can be at most 10 problems in each computer. You have to find the number of problems on each of the computers.

Since there can be multiple solutions. Any valid solution will do.

Input
Input starts with an integer T (≤ 25), denoting the number of test cases.

Each case starts with a line containing an integer n (0 ≤ n ≤ 20) denoting the total number of problems.

Output
For each case, print the number of problems stored in each computer in a single line. A single space should separate the non-negative integers.

Sample
Input
3
10
7
7

Output
0 10
0 7
1 6
                                                        
*/


//CODE

// LightOj 1001

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, n, r, d, s;
	cin >> t;

	while(t--){
		cin >> n;

		if(n>=0 && n<= 20){
			r = n%2;
			d = n/2;
			s = r+d;

			cout << d << " " << s << endl;
		}
	}

	return 0;
}
