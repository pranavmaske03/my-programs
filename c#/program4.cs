using System;

class NumberX
{
    public int No;

    public NumberX(int no)
    {
        this.No = no;
    }

    public void DisplayFactors()
    {
        for(int i = 1; i <= (No/2); i++)
        {
            if((No % i) == 0)
            {
                Console.WriteLine(i+"\t");
            }
        }
        Console.WriteLine();
    }
}

class program4
{
    public static void Main(string[] args)
    {
        int value = 0;

        Console.WriteLine("Enter number : ");
        value = int.Parse(Console.ReadLine());

        NumberX obj = new NumberX(value);
        obj.DisplayFactors();
    }
}