using System;

class NumberX
{
    public int No;

    public NumberX(int no)
    {
        this.No = no;
    }

    public int SumFactor()
    {
        int sum = 0;

        for(int iCnt = 1; iCnt <= (this.No/2); iCnt++)
        {
            if((this.No%iCnt) == 0)
            {
                sum = sum + iCnt;
            }

            if(sum > this.No)
            {
                break;
            }
        }
        return sum;
    }

    public bool CheckPerfect()
    {
        int result = 0;

        result = SumFactor();
        if(result == this.No)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program11
{
    public static void Main()
    {
        int value = 0;
        bool bRet = false;

        Console.WriteLine("Enter number : ");
        value = int.Parse(Console.ReadLine());

        NumberX obj = new NumberX(value);
        bRet = obj.CheckPerfect();

        if(bRet == true)
        {
            Console.WriteLine("Number is Perfect..");
        }
        else
        {
            Console.WriteLine("Number is NOT Perfect..");
        }
    }
}