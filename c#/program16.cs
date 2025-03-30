using System;

class program16
{
    public static int CountEven(int No)
    {
        int iDigit = 0,count = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            if((iDigit%2) == 0)
            {
                count++;
            }
            No = No / 10;
        }
        return count;
    }
    
    public static void Main(string[] args)
    {
        int value = 0, ret = 0;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        ret = CountEven(value);
        Console.WriteLine("Count of the even digit is : {0}",ret);
    }
}