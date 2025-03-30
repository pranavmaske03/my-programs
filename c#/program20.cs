using System;

class program20
{
    public static void DisplayTable(int No)
    {
        int i = 0;

        for(i = 1; i <= 10; i++)
        {
            Console.WriteLine("{0} x {1 } = {2}",No,i,No*i);
        }
    }

    public static void Main()
    {
       int value = 0;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        DisplayTable(value);
    }
}