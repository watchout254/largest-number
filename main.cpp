#include <iostream>

using namespace std;

int main() {
	double fig1, fig2, fig3;
	
	cout<<"\tWelcome!!!...you are required to enter any three numbers to find out the largest number among the three \n";
	cout<<"Kindly enter any number: \n";
	cin>>fig1;
	
	cout<<"Enter another number: \n";
	cin>>fig2;
	
	cout<<"Enter the last number: \n";
	cin>>fig3;
	
	if(fig1 > fig2 && fig1 > fig3) {
		cout<<"Largest number is: " <<fig1;
	}
	
	else if(fig2 > fig1 && fig2 > fig3) {
		cout<<"Largest number is: " <<fig2;
	}
	
	else {
		cout<<"Largest number is: " <<fig3;
	}
	
	cout<<"\nThank you!!Try other values any time.";
		
}
