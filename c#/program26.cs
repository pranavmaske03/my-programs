using System;

class Prime
{
    internal int Num;

    internal Prime(int no)
    {
        this.Num = no;
    }

    internal bool CheckPrime()
    {
        bool flag = true;
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (Num/2); iCnt++)
        {
            if((Num%iCnt) == 0)
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
}

class MainClass
{
    public static void Main()
    {
        int value = 0;
        bool bRet = false;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        Prime obj = new Prime(value);
        bRet = obj.CheckPrime();

        if(bRet == true)
        {
            Console.WriteLine("{0} is prime number",value);
        }
        else
        {
            Console.WriteLine("{0} is not prime number",value);
        }
    }
}