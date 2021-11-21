/*

                                                                              Intersection of Cubes
                                                                                  LightOJ 1211
                                                                                  
                                                                                  
You are given n cubes, each cube is described by two points in 3D space: (x1, y1, z1) being one corner of the cube and (x2, y2, z2) being the opposite corner. Assume that
the sides of each of the cubes are parallel to the axis. Your task is to find the volume of their intersection.

Input
Input starts with an integer T (≤ 100), denoting the number of test cases.

Each case starts with a line containing an integer n (1 ≤ n ≤ 100).
Each of the next n lines contains six integers x1 y1 z1 x2 y2 z2 (1 ≤ x1, y1, z1, x2, y2, z2 ≤ 1000, x1 < x2, y1 < y2, z1 < z2) where (x1, y1, z1) is the co-ordinate of one 
corner and (x2, y2, z2) is the co-ordinate of the opposite corner.

Output
For each case, print the case number and volume of their intersection.

Sample
Input
2
2
1 1 1 3 3 3
1 1 1 2 2 2
3
7 8 9 20 20 30
2 2 2 50 50 50
13 14 15 18 30 40

Output
Case 1: 1
Case 2: 450

*/

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, n, t_count=1 ,x1,x2,y1,y2,z1,z2, xCommon, yCommon, zCommon, volume;
	cin >> t;

	while(t--){

		int xFar=0, yFar=0, zFar=0;
		int xNear=1001, yNear=1001, zNear=1001;
		cin >> n;

		for(int i=1; i<=n; i++){
			cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

			if(x1 > xFar){
				xFar = x1;
			}
			if(y1 > yFar){
				yFar = y1;
			}
			if(z1 > zFar){
				zFar = z1;
			}
			if(x2 < xNear){
				xNear = x2;
			}
			if(y2 < yNear){
				yNear = y2;
			}
			if(z2 < zNear){
				zNear = z2;
			}
		}
		xCommon = xNear - xFar;
		yCommon = yNear - yFar;
		zCommon = zNear - zFar;

		volume = xCommon * yCommon * zCommon;

		if(volume > 0){
			cout << "Case " << t_count << ": " << volume << endl;
		}
		else{
			cout << "Case " << t_count << ": " << 0 << endl;
		}
		t_count++;
	}

	return 0;
}
