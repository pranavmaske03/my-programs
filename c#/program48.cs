using System;


class DigitX
{
    public int No;

    public DigitX(int no)
    {
        this.No = no;
    }

    public float Average()
    {
        int count = 0,iDigit = 0,Sum = 0;
        int temp = this.No;

        while(temp != 0)
        {
            iDigit = temp % 10;
            Sum = Sum + iDigit;
            count++;
            temp = temp / 10;
        }
        float Result = (float)Sum / (float)count;
        return Result;
    }
}

class MainClass
{
    static void Main()
    {
        int value = 0;
        float fRet = 0.0f;

        Console.WriteLine("Enter number :");
        value = Convert.ToInt32(Console.ReadLine());

        DigitX obj = new DigitX(value);
        fRet = obj.Average();

        Console.WriteLine("Average is : "+fRet);
    }
}