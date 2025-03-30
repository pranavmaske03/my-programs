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

        for(i = this.iRow; i >= 1; i--)
        {
            for(j = this.iCol; j >= 1; j--)
            {
                Console.Write(i+"\t");
            }
            Console.WriteLine("\n");
        }
    }
}

class program21
{
    static void Main(string[] args)
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