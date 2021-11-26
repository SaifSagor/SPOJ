//LightOJ 1433

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, t_count = 1;
	int ox, oy, ax, ay, bx, by;
	double r, ang, ab, s;

	cin >> t;

	while(t--){
		cin >> ox >> oy >> ax >> ay >> bx >> by;

		r = sqrt((ox-ax)*(ox-ax) + (oy-ay)*(oy-ay));
		ab = sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by));
		ang = acos((2*r*r-ab*ab)/(2*r*r));

		s = r* ang;

		printf("Case %d: %.10lf\n",t_count,s);
		t_count++;
	}

	return 0;
}
