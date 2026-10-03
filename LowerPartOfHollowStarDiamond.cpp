#include<iostream>
using namespace std;
int main(){
	int count=8;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
		cout<<"*";
	}
		for(int s=1;s<=count;s++){
		cout<<" ";
	}
		for(int j=1;j<=i;j++){
		cout<<"*";
	}
		cout<<endl;
		count-=2;
}
return 0;
}

