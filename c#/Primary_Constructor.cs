// PARAMETARISED CONSTRUCTOR

using System;

class ParametarisedX
{
    public int num;
    public string str;
    public char ch;

    public ParametarisedX(int no,string str,char ch)
    {
        this.num = no;
        this.str = str;
        this.ch = ch;
    }

    public void Display()
    {
        Console.WriteLine("INside Display...");
    }
}

class Primary_Constructor
{
    public static void Main()
    {
        ParametarisedX obj = new ParametarisedX(11,"Pranav",'P');

        Console.WriteLine(obj.num);
        Console.WriteLine(obj.str);
        Console.WriteLine(obj.ch);
    }
}