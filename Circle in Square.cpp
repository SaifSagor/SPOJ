// LightOJ 1022

//CODE

//LightOJ 1022

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, t_count=1;
	double pi = 2*acos(0.0);
	cin >> t;

	while(t--){

		double r, shaded_area, square_area, circle_area;
		cin >> r;
	    double a = 2*r;

	    circle_area = pi*r*r;
	    square_area = a*a;

	    shaded_area = square_area - circle_area;

	    printf("Case %d: %.2lf\n",t_count, shaded_area);
		t_count++;
	}
	
	return 0;
}
