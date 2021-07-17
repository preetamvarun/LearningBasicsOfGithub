#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

//Input range varies from [0,inf)


bool checkEven(ull x){
	bool answer = false;
	if(x % 2 == 0){
		answer = true;
	}
	return answer;
}


int main(){
	ull n; cin>>n;
	checkEven(n) == true ? cout<<"It is a even number" : cout<<"it is odd number";
	return 0;
}