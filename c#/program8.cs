using System;

class Pattern
{
    public int No;

    public Pattern(int no)
    {
        this.No = no;
    }

    public unsafe void DisplayPattern()
    {
        fixed(int *ptr = &No)

        for(int i = 1; i <= *(ptr); i++)
        {
            Console.Write("*\t");
        }
        Console.WriteLine();
    }
}

class program8
{
    public static void Main(string[] args)
    {
        int value = 0;

        Console.WriteLine("Enter frequency : ");
        value = int.Parse(Console.ReadLine());

        Pattern obj = new Pattern(value);
        obj.DisplayPattern();
    }
}