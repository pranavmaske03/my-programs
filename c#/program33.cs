using System;


class MainClass
{
    public static int CountDigit(int No)
    {
        int count = 0;

        while(No != 0)
        {
            No % 10;
            count++;
            No = No / 10;
        }
        return count;
    }

    static void Main()
    {
        int ret = 0,value = 0;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        ret = CountDigit(value);
        Console.WriteLine("Count of the digit is : "+ret);
    }
}