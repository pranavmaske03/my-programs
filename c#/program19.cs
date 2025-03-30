using System;

class DigitX
{
    public int Num;

    public DigitX(int no)
    {
        this.Num = no;
    }

    public int Maximum()
    {
        int iMax = 0, temp = 0,iDigit = 0;

        temp = this.Num;
        while(temp != 0)
        {
            iDigit = temp % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            temp = temp / 10;
        }
        return iMax;
    }

    public int Minimum()
    {
        int iMin = 0, temp = 0,iDigit = 0;

        iMin = 9;
        temp = this.Num;
        while(temp != 0)
        {
            iDigit = temp % 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            temp = temp / 10;
        }
        return iMin;
    }
}

class program19
{
    private static void Main()
    {
        int value = 0,ret = 0;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        DigitX obj = new DigitX(value);

        ret = obj.Maximum();
        Console.WriteLine("Maximum digit is = {0}",ret);

        ret = obj.Minimum();
        Console.WriteLine("Minimum digit is = {0}",ret);
    }
}