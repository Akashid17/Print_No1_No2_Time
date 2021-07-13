/*
Accept two numbers from user and display first number in second
number of times.
*/

using namespace std;

#include<iostream>

class ArithmeticX
{
public:
	
	void Display(int iNo1, int iNo2)
	{
		if(iNo2 < 0)
		{
			iNo2 = -iNo2;
		}

		for(int i = 1; i <= iNo2; i++)
		{
			cout<<iNo1<<"\t";
		} 
		cout<<"\n";
	}	
};

int main()
{
	int iValue1 = 0, iValue2 = 0;

	cout<<"Enter First Number\n";
	cin>>iValue1;

	cout<<"Enter Second Number\n";
	cin>>iValue2;

	ArithmeticX aobj;
	aobj.Display(iValue1, iValue2);

	return 0;
}