/*
Accept two numbers from user and display first number in second
number of times.
*/

import java.lang.*;
import java.util.*;

class ArithmeticX
{
	void Display(int iNo1, int iNo2)
	{
		if(iNo2 < 0)
		{
			iNo2 = -iNo2;
		}

		while(iNo2 != 0)
		{
			System.out.print(iNo1+"\t");

			iNo2--;
		}
		System.out.println();
	}
}

class Main
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);

		int iValue1 = 0, iValue2 = 0;
		
		System.out.println("Enter First Number");
		iValue1 = sobj.nextInt();

		System.out.println("Enter Second Number");
		iValue2 = sobj.nextInt();

		ArithmeticX aobj = new ArithmeticX();
		aobj.Display(iValue1,iValue2);
	}
}