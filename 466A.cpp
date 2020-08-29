#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n=0,m=0,a=0,b=0;
	cin >> n >> m >> a >> b;
	int cost=0;
	if(a*m<=b){
	//	cout << "yes 1";
	cost = a*n;
	}
	
	else if(n<m){
		if(a*n>b)
		cost = b;
		
		else
		cost = n* min(a,b);
	}
	
	else if(n==m){
	//	cout << "yes 4";
	cost = n * min(a,b);
	}
	
	else{
	//	cout << "yes 5";
		while(n)
		{
			if(n>=m)
			{
				cost+= b;
				n-= m;
			}
			else
			break;
		}
		// yaha p cost zyadda hori hai
		if(a*n>b)
		cost+= b;
		else
		cost+= a*n;
	}
	
	cout << cost;
	
return 0;
}
