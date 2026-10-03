#include<iostream>
using namespace std;
int main(){
	int	count=12;
	for(int i=1;i<=7;i++){
		for(int j=1;j<=i;j++){
		cout<<j;
	}
		for(int s=1;s<=count;s++){
		cout<<" ";
	}
		for(int j=i;j>=1;j--){
		cout<<j;
	}
		cout<<endl;
		count-=2;
		
	}
return 0;
}

