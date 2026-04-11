 #include <iostream>
using namespace std; 
#include <string> 

int main()
{
	int a=15;     //liter of petrol to get discount
	int b;     //liters of pertrol 
	float c=30;     //fixed per liter price of petrol
	float tot;   //total bill
	
	{
		cout<<"Enter the quantity of petrol in liters\n";
		cin>>b;
		tot=b*c; //total bill example: 5liters of petrol*30=300
		cout<<"your total amount is ="<<tot<<"\n";
	}
	if (tot>=450) { // calculate discount                             // initial total bill tot/100*5-tot
			cout<<"Congratulations you got a discout of 5% which is="<<tot/100*5<<"\n"<<"your new total is="<<tot-tot/100*5; // final total bill 
	} // no need to use else if you dont want to 
	else {
			cout<<a-b<<" More liters of fuel to get a discount of 5%"; // extra, not nescessary
	}
	return 0;
}

