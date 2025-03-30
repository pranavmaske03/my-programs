using System;

sealed class DigitX
{
    public int No;

    public DigitX(int no)
    {
        this.No = no;
    }

    public bool CheckPallindrome()
    {
        int iDigit = 0, iResult = 0;
        int temp = this.No;

        while(temp != 0)
        {
            iDigit = temp % 10;
            iResult = (iResult * 10) + iDigit;
            temp = temp / 10;
        }
        Console.WriteLine(iResult);
        if(this.No == iResult)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program24
{
    public static void Main()
    {
        int value = 0;
        bool bRet = false;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        DigitX obj = new DigitX(value);

        bRet = obj.CheckPallindrome();
        if(bRet == true)
        {
            Console.WriteLine("Number is pallindrome");
        }
        else
        {
            Console.WriteLine("Number is NOT pallindrome");
        }
    }
}