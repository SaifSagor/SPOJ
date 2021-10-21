// LightOJ 1008

//CODE

// LightOj 1008

#include<bits/stdc++.h>
using namespace std;

int main(){

	long long int t,s,r,c,root,l,temp;
	int t_count = 1;
	cin >> t;

	while(t--){
		cin >> s;
		root = ceil(sqrt(s));
		l = pow(root,2.0)-s;

		if(l < root){
			r = root;
			c = l+1;
		}
		else{
			r = (s - ((root-1)*(root-1)));
			c = root;
		}

		if(root % 2 == 0){
			temp = c;
			c = r;
			r = temp;
		}

		cout << "Case "<< t_count << ": " << c << " " << r << endl;

		t_count++;
	}

	return 0;
}
