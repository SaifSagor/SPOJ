/*
                                                                        LightOJ 1053
                                                                        Higher Math

You are building a house. You'd prefer if all the walls have a precise right angle relative to the ground, but you have no device to measure angles. A friend that says he has a great idea how you could ensure that all walls are upright: All you need to do is step away a few feet from the wall, measure how far away you are from the wall, measure the height of the wall, and the distance from the upper edge of the wall to where you stand. You friend tells you to do these measurements for all walls, then he'll tell you how to proceed. Sadly, just as you are done, a timber falls on your friend, and an ambulance brings him to the hospital. This is too bad, because now you have to figure out what to do with your measurements yourself.

Given the three sides of a triangle, determine if the triangle is a right triangle, i.e. if one of the triangle's angles is 90 degrees.

Input
Input starts with an integer T (≤ 200), denoting the number of test cases.

Each test case consists of three integers 1 ≤ a, b, c ≤ 40000 separated by a space. The three integers are the lengths of the sides of a triangle.

Output
For each case, print the case number and yes or no depending on whether it's a right angle or not.

Sample
Input
2
36 77 85
40 55 69

Output
Case 1: yes
Case 2: no
                                                                        
*/


//CODE

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, t_count = 1;
	long long int a, b, c, h, s;
	cin >> t;

	while(t--){
		cin >> a >> b >> c;

		if(a>b && a>c){
			h = a*a;
			s = b*b+c*c;
		}
		else if(b>a && b>c){
			h = b*b;
			s = a*a+c*c;
		}
		else if(c>a && c>b){
			h = c*c;
			s = a*a+b*b;
		}

		if(h == s){
			cout << "Case " << t_count << ": " << "yes" << endl;
		}
		else{
			cout << "Case " << t_count << ": " << "no" << endl;
		}
		t_count++;
	}

	return 0;
}
