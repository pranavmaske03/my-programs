using System;

class Pattern
{
    public int iRow;
    public int iCol;

    public Pattern(int no1,int no2)
    {
        this.iRow = no1;
        this.iCol = no2;
    }

    public void DisplayPattern()
    {
        int i = 0,j = 0,no = 0;
        char ch = '\0';

        for(i = 1,ch = 'A',no = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if((i%2) == 0)
                {
                    Console.Write(ch+"\t");
                    if(j == iCol)
                    {
                        ch++;
                    }
                }
                else
                {
                    Console.Write(no+"\t");
                    if(j == iCol)
                    {
                        no++;
                    }
                }
            }
            Console.WriteLine();
        }
    }
}

class MainClass
{
    static void Main()
    {
        int value1 = 0,value2 = 0;

        Console.WriteLine("Enter number of rows :");
        value1 = int.Parse(Console.ReadLine());

        Console.WriteLine("Enter number of columns :");
        value2 = int.Parse(Console.ReadLine());

        Pattern obj = new Pattern(value1,value2);
        obj.DisplayPattern();
    }
}