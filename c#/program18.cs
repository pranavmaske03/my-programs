using System;

class NumberX
{
    public int No;

    public NumberX(int no)
    {
        this.No = no;
    }

    public void DisplayEven()
    {
        for(int i = 1; i <= No; i++)
        {
            if(i % 2 == 0)
            {
                Console.WriteLine(i);
            }
        }
    }
}

class program18
{
    static void Main()
    {
        int value = 0;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        NumberX obj = new NumberX(value);
        obj.DisplayEven();
    }
}