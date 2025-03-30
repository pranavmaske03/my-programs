using System;


class MainClass
{
    static void DisplayFactorsSum(int No)
    {
        int sum = 0;

        for(int iCnt = 1; iCnt <= (No/2); iCnt++)
        {
            if(No % iCnt == 0)           
            {
                sum = sum + iCnt;
            }
        }
        Console.WriteLine("Result is : {0}",sum);
    }
    static void Main()
    {
        int value = 0;

        Console.WriteLine("Enter number");
        value = int.Parse(Console.ReadLine());
        
        DisplayFactorsSum(value);
    }
}