using System;

class NumberX
{
    internal int iPower;
    internal int iBase;

    internal NumberX(int no1, int no2)
    {
        this.iBase = no1;
        this.iPower = no2;
    }

    public int CalculatePower()
    {
        int Result = 1;

        for(int i = 1; i <= iPower; i++)
        {
            Result = Result * iBase;
        }
        return Result;
    }
}

class program23
{
    public static void Main()
    {
        int value1 = 0, value2 = 0;

        Console.WriteLine("Enter Base :");
        value1 = int.Parse(Console.ReadLine());

        Console.WriteLine("Enter Power :");
        value2 = int.Parse(Console.ReadLine());

        NumberX obj = new NumberX(value1, value2);
        Console.WriteLine("Result is : "+obj.CalculatePower());
    }
}