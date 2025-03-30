using System;

class Factorial
{
    public int No;

    public Factorial(int no)
    {
        this.No = no;
    }

    public int DisplayFactorial()
    {
        int iFact = 1;

        for(int iCnt = 1; iCnt <= No; iCnt++)
        {
            iFact = iFact * iCnt;  
        }
        return iFact;
    }
}

class program6
{
    public static void Main()
    {
        int value = 0;
        int ret = 0;

        Console.WriteLine("Enter number : ");
        value = int.Parse(Console.ReadLine());

        Factorial obj = new Factorial(value);
        ret = obj.DisplayFactorial();

        Console.WriteLine("Factorial is : "+ret);
    }
}