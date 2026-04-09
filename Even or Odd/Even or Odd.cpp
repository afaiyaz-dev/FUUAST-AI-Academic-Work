#include<iostream>
using namespace std;

int main() {
	int a;
	cout<<"enter a number to check if its even or odd";
	cin>>a; // divide the number with 2 and check the remainder id its 0 than the number is even else its odd 
	if (a%2==0){ // Check if the remainder is 0 when divided by 2  // 0 is also an even number 
		cout<<"number is even";
	}
	else {
		cout<<"number is odd";
	}
}
