//LightOj 1010

//CODE

// LightOJ 1010

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t,m,n, total_block, t_count=1, knight, x;
	cin >> t;

	while(t--){
		cin >> m >> n;

		total_block = m * n;

		if(m == 1 || n == 1){
			knight = total_block;
		}
		else if(m == 2 || n == 2){
			if(m==2){
				x = n;
			}
			else{
				x = m;
			}

			if(x%4 == 0){
				knight = x;
			}
			else if(x%4 == 1){
				knight = x+1;
			}
			else if(x%4 == 2){
				knight = x+2;
			}
			else if(x%4 == 3){
				knight = x+1;
			}
		}
		else if(total_block % 2 == 0){
			knight = total_block/2;
		}
		else{
			knight = (total_block+1)/2;
		}

		cout << "Case " << t_count << ": " << knight << endl;
		t_count++;
	}
	
	return 0;
}
