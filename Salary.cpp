#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int Salary;
	float Total_pay;
	float const Bonus_Rate = 0.10;
	cout<<"Enter your Salary: ";
	cin>>Salary;
	Total_pay = Salary + (Salary * Bonus_Rate);
	cout<<"\nTotal_pay after 10% Bonus :"<<Total_pay; 
}
