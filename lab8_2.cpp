#include<iostream>
using namespace std;

//Write the function printO() here
int printO(int N, int M){
	if(M>0){
		if(N>0){
			for(int x=1;x<=N;x++){
				for(int i=1;i<=M;i++){
					cout<<"O";
				}
				cout<<"\n";
			}
		}
		else
		{
			cout<<"Invalid input";
		}
		
	}
	else
		{
			cout<<"Invalid input";
		}
	
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
