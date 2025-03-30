using System;

class MainClass
{
    static void DisplayDigit(int No)
    {
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            Console.Write(iDigit+"\t");
            No = No / 10;
        }
        Console.WriteLine();
    }

    static void Main()
    {
        int value = 0;

        Console.WriteLine("Enter number");
        value = int.Parse(Console.ReadLine());

        DisplayDigit(value);
    }
}