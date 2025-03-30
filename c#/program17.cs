using System;

class program17
{
    public static int Factorial(int No)
    {
       int iFact = 1;

       for(int iCnt = 1; iCnt <= No; iCnt++)
       {
            iFact = iFact * iCnt;
       }
       return iFact;
    }
    
    public static void Main(string[] args)
    {
        int value = 0, ret = 0;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        ret = Factorial(value);
        Console.WriteLine("Result is = {0}",ret);
    }
}