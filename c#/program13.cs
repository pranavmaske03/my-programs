using System;

struct Pattern
{
    public int No;

    internal Pattern(int no)
    {
        this.No = no;
    }

    public void DisplayPattern()
    {
        for(int iCnt = this.No; iCnt >= 1; iCnt--)
        {
            Console.Write(iCnt+"\t");
        }
        Console.WriteLine();
    }
}

class program13
{
    public static void Main()
    {
        int value = 0;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        Pattern obj = new Pattern(value);
        obj.DisplayPattern();
    }
}