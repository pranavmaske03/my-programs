using System;

class Arithmetic
{
    public int No1;
    public int No2;

    public Arithmetic(int no1, int no2)
    {
        this.No1 = no1;
        this.No2 = no2;
    }

    public int Addition()
    {
        int Ans = 0;
        Ans = this.No1 + this.No2;
        return Ans;
    }
}

class program2
{
    public static void Main(string[] args)
    {
        int iValue1 = 0;
        int iValue2 = 0;
        int iRet = 0;

        Console.WriteLine("Enter first number");
        iValue1 = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Enter second number");
        iValue2 = int.Parse(Console.ReadLine());

        Arithmetic obj = new Arithmetic(iValue1,iValue2);
        iRet = obj.Addition();

        Console.WriteLine("Addition is : "+iRet);
    }
}