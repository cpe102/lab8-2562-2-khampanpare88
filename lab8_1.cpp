#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int initial;
	float rate,pay;
	cout<<"Enter initial loan:";
	cin>>initial;
	cout<<"Enter interest rate per year (%):";
	cin>>rate;
	cout<<"Enter amount you can pay per year:";
	cin>>pay;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	int E=1;
	float P,I,T,N;
		
		P=initial;
		I=P*rate/100.00;
		T=P+I;
		N=T-pay;
		if(N<pay){pay=T;
		N=pay-T;}

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << E; 
		cout << setw(13) << left << P;
		cout << setw(13) << left << I;
		cout << setw(13) << left << T;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << N;
		cout << "\n";
		
	
			while(N>0){
			P=N;
			I=P*rate/100;
			T=P+I;
			
			E++;
			if(N<pay){pay=T;}
			N=T-pay;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << E; 
			cout << setw(13) << left << P;
			cout << setw(13) << left << I;
			cout << setw(13) << left << T;
			cout << setw(13) << left << pay;
			cout << setw(13) << left << N;
			cout << "\n";	
			
		}
	

	return 0;
}
