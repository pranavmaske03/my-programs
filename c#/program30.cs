using System;

struct MainStruct
{
    public static int SumFactor(int iNo)
    {
        int Sum = 0;

        for(int iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo%iCnt) == 0)
            {
                Sum = Sum + iCnt;
            }
        }
        return Sum;
    }

    static void Main(string[] args)
    {
        int value = 0;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        Console.WriteLine("Result is : "+SumFactor(value));
    }
}