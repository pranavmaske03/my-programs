using System;

class MainClass
{
    static bool CheckBit(int No)
    {
        int iMask = 0X00000108;
        long result = 0;

        result = iMask & No;
        if(result == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    static void Main()
    {
        int value = 0;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        bool bret =  CheckBit(value);
        if(bret == true)
        {
            Console.WriteLine("4th and 9th bit is ON");
        }
        else
        {
            Console.WriteLine("4th and 9th Bit is OFF :");
        }
    }
}