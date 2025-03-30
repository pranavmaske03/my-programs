using System;

class Pattern
{
    public int iRow;
    public int iCol;

    public Pattern(int no1, int no2)
    {
        this.iRow = no1;
        this.iCol = no2;
    }

    public void DisplayPattern()
    {
        int i = 0, j = 0;
        char ch = '\0';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                Console.Write(ch+"\t");
            }
            Console.WriteLine();
        }
    }
}

class program15
{
    public static void Main(string[] args)
    {
        int value1 = 0, value2 = 0;

        Console.WriteLine("Enter the number of rows :");
        value1 = int.Parse(Console.ReadLine());

        Console.WriteLine("Enter the number of columns :");
        value2 = int.Parse(Console.ReadLine());

        Pattern obj = new Pattern(value1,value2);
        obj.DisplayPattern();
    }
}