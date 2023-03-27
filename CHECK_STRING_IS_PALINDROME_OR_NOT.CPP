#include<iostream>
using namespace std;
bool ispalindrome(string str){
	int low=0;
	int high=str.length()-1;
	while(low<high){
		if(str[low] != str[high]){
			return false;
		}
		low++;
		high--;
	}
	return true;
}
int main() {
	string str;
	cin>>str;
	if(ispalindrome(str)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}
