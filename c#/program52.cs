using System;

class DigitX
{
    public int No;

    public DigitX(int no)
    {
        this.No = no;
    }

    public int ReverseNum()
    {
        int result = 0,iDigit = 0;
        int temp = this.No;

        while(temp != 0)
        {
            iDigit = temp % 10;
            result = (result * 10) + iDigit;
            temp = temp / 10;
        }

        return result;
    }
}

class MainClass
{
    static void Main()
    {
        int value = 0;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        DigitX obj = new DigitX(value);
        int ret = obj.ReverseNum();
        Console.WriteLine("Reverse number is : "+ret);
    }
}