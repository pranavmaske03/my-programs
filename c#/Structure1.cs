using System;

public struct Demo
{
    public int data;
    public char ch;
    public string str;

    public Demo(int no,char c,string s)
    {
        data = no;
        ch = c;
        str = s;
    }

    public void Display()
    {
        Console.WriteLine("Inside Display..");
    }
}

class MainClass
{
    public static void Main(string[] args)
    {
        Demo obj = new Demo(11,'P',"Pranav");
   
        obj.Display();
        Console.WriteLine(obj.data);
        Console.WriteLine(obj.ch);
        Console.WriteLine(obj.str);
    }
}