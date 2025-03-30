using System;

class Digit
{
    public int No;

    public Digit(int no)
    {   
        this.No = no;
    }

    public int SumDigit()
    {
        int iDigit = 0,Sum = 0,temp = 0;

        temp = this.No;
        while(temp != 0)
        {
            iDigit = temp % 10;
            Sum = Sum + iDigit;
            temp = temp / 10;
        }
        return Sum;
    }
}

class program7
{
    public static void Main(string[] args)
    {
        int value = 0;

        Console.WriteLine("Enter number : ");
        value = int.Parse(Console.ReadLine());

        Digit obj = new Digit(value);
        int ret = obj.SumDigit();

        Console.WriteLine("Sum of the digits are : "+ret);
    }
}