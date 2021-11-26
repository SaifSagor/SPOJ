//LightOJ 1331

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, t_count = 1;
	double r1, r2, r3, a, b, c, s, t_area, ang_A, ang_B, ang_C, s1_area, s2_area, s3_area, ans;

	cin >> t;

	while(t--){
		cin >> r1 >> r2 >> r3;

		a = r1 + r2;
		b = r1 + r3;
		c = r2 + r3;

		s = (a+b+c)/2.0;
		t_area = sqrt(s*(s-a)*(s-b)*(s-c));

		ang_A = acos((b*b + c*c - a*a)/(2*b*c));
		ang_B = acos((a*a + c*c - b*b)/(2*a*c));
		ang_C = acos((a*a + b*b - c*c)/(2*a*b));

		s1_area = 0.5 * r1*r1 * ang_C;
		s2_area = 0.5 * r2*r2 * ang_B;
		s3_area = 0.5 * r3*r3 * ang_A;

		ans = t_area - (s1_area+s2_area+s3_area);

		printf("Case %d: %.10lf\n",t_count,ans);
		t_count++;
	}

	return 0;
}
