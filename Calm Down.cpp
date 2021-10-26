/*
LightOJ 1072
*/

//CODE

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, t_count=1 ,n;
	cin >> t;

	while(t--){

		double R, r;
		cin >> R >> n;

		r = (sin(M_PI/n)*R)/ (1+sin(M_PI/n));

		printf("Case %d: %.10lf\n",t_count, r);
		t_count++;
	}

	return 0;
}

