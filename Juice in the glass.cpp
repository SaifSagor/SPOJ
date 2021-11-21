// LightOJ 1216

//CODE

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, t_count=1, r1, r2, h, p;
	double v_glass, v_water, r_water_surface;
	cin >> t;

	while(t--){
		cin >> r1 >> r2 >> h >> p;

		r_water_surface = r2 + (p*(r1-r2))/(h*1.0);
		v_water = (M_PI/3.0)*p*(r_water_surface*r_water_surface+r2*r2+r_water_surface*r2);

		printf("Case %d: %.10lf\n",t_count,v_water);

		t_count++;
	}

	return 0;
}
