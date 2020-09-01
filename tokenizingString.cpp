#include<bits/stdc++.h>

using namespace std;

int main(){
	string str,s1;
	getline(cin,s1);
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	getline(cin,str);
	vector<string> tokens;
	stringstream check1(str);
	string tok;
	
	while(getline(check1,tok, ':')){
		tokens.push_back(tok);
	}
	
	int count = 0;
	for(int i=0;i<tokens.size();i++){
		string str = tokens[i];
		int flag=0;
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		if(str.length()!=s1.length())
			continue;
		else{
			for(int i=0;i<s1.size();i++){
				if(s1[i]==str[i])
					continue;
				else if(s1[i]=='_')
					continue;
				else
					flag=1;
			}
		}
		if(flag==0){
			count++;
			transform(str.begin(), str.end(), str.begin(), ::toupper);
			cout << str << ":" ;
		}
	}
	
	if(count==0)
		cout << "ERROR-009" << "\n";
		
return 0;
}
