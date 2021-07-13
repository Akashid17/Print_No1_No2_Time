/*
Accept two numbers from user and display first number in second
number of times.
*/

using System;

class ArithmeticX
{
	public

	void Display(int iNo1, int iNo2)
	{
		if(iNo2 < 0)
		{
			iNo2 = -iNo2;
		}

		for(int i = 0; i < iNo2; i++)
		{
			Console.Write(iNo1+"\t");
		}
		Console.WriteLine();
	}
}

class Demo
{
	public static void Main(string[] Args)
	{
		Console.WriteLine("Enter First Number");
		int iValue1 = Convert.ToInt32(Console.ReadLine());

		Console.WriteLine("Enter Second Number");
		int iValue2 = Convert.ToInt32(Console.ReadLine());

		ArithmeticX aobj = new ArithmeticX();
		aobj.Display(iValue1,iValue2);
	}
}