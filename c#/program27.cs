using System;

class NumberX
{
    internal int Num;

    internal NumberX(int no)
    {
        this.Num = no;
    }

    internal int Factorial()
    {
        int iFact = 1;

        if(Num < 0)
        {
            Num = -Num;
        }

        for(int iCnt = 1; iCnt <= Num; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }
}

class MainClass
{
    public static void Main()
    {
        int value = 0;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        NumberX obj = new NumberX(value);
        int ret = obj.Factorial();

        Console.WriteLine("Result is : "+ret);
    }
}