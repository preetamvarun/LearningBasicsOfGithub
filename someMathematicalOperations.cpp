#include<bits/stdc++.h>
using namespace std;
typedef long long int ull;

bool checkEven(ull x){

	if ( x < 0 ){
		cout<<"getting into this block";
		throw "try to give a non negative integer";
	}


	bool answer = false;
	if(x % 2 == 0){
		answer = true;
	}
	return answer;
}


int main(){
	ull n; cin>>n;
	try{
		checkEven(n) == true ? cout<<"It is a even number" : cout<<"it is odd number";
	}
	catch(const char* msg){
		cout<<msg;
	}
	return 0;
}