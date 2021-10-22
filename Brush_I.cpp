/*
                                                                        LightOJ 1015
                                                                        Brush(I)
                                                                        
Sometimes I feel angry to arrange contests, as I am too lazy. Today I am arranging a contest for the AIUB students. So, I made a plan to share some anger with them. While they will be busy with the contest, I will cover their rooms with dusts. And after the contest, they will surely get angry because they would have to clean up quite a bit.

So, at first, I will have to fix the amount of dusts for each student. This amount may not be the same for everyone. Now you are given the amount of dust unit for each student, you have to help me find the total dust unit I have to collect to cause them some pain.

But there is a problem, my random function which generates dust units for students has a bug, it sometimes returns negative numbers. If a student gets a negative number, I think he/she is lucky, the lucky person will have no dusts.

Input
Input starts with an integer T (≤ 100), denoting the number of test cases.

Each case starts with a blank line. The next line contains an integer N (1 ≤ N ≤ 1000), means that there are N students. The next line will contain N integers separated by spaces which denote the dust unit for all students. The dust unit for any student will not contain more than two digits.

Output
For each case print the case number and the total required dust units.

Sample
Input
2

3
1 5 10

2
1 99

Output
Case 1: 16
Case 2: 100

*/


//CODE

// LightOJ 1015

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, n , t_count=1;

	cin >> t;

	while(t--){

		int sum = 0;
		cin >> n;
		int dust[n];

		for(int i=0; i<n; i++){
			cin >> dust[i];
		}

		for(int i=0; i<n; i++){
			if(dust[i] >= 0){
				sum = sum + dust[i];
			}
		}

		cout << "Case " << t_count << ": " << sum << endl;
		t_count++;
	}

	return 0;
}
