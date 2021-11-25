// LightOJ 1305

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, t_count = 1;
	int a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y, area;

	cin >> t;

	while(t--){
		cin >> a_x >> a_y >> b_x >> b_y >> c_x >> c_y;

		d_x = a_x + c_x - b_x;
		d_y = a_y + c_y - b_y;

		area = 0.5*abs(
			(a_x*b_y+b_x*c_y+c_x*d_y+d_x*a_y)-(b_x*a_y+c_x*b_y+d_x*c_y+a_x*d_y));

		cout << "Case " << t_count << ": " << d_x << " " << d_y << " " << area << endl;
		t_count++;
	}

	return 0;
}
