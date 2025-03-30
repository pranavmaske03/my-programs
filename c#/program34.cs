using System;


class MainClass
{
    public static int CalculatePower(int iBase,int iPower)
    {
        int Result = 1;

        for(int i = 1; i <= iPower; i++)
        {
            Result = Result * iBase;
        }
        return Result;
    }

    static void Main()
    {
        int ret = 0,value1 = 0,value2 = 0;

        Console.WriteLine("Enter Base :");
        value1 = int.Parse(Console.ReadLine());

        Console.WriteLine("Enter Power :");
        value2 = int.Parse(Console.ReadLine());

        ret = CalculatePower(value1,value2);
        Console.WriteLine("Result is : "+ret);
    }
}