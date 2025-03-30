using System;

class PrivateX
{
    public int num;
    public static string str;
    private char ch;

    public PrivateX(int no)
    {
        this.num = no;
        ch = 'S';
    }

    private PrivateX()
    {
        
    }

    static PrivateX()
    {
        str = "Marvellous Infosystems";
    }

    public void Display()
    {
        Console.WriteLine("INside Display...");
        Console.WriteLine(this.ch);
    }
}

class Private_Constructor
{
    public static void Main(String[] arg)
    {
        PrivateX obj = new PrivateX(11);

        Console.WriteLine(obj.num);
        Console.WriteLine(PrivateX.str);
        obj.Display();
    }
}