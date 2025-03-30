using System;

interface first
{
    void Fun();
}

interface second
{
    void Fun();
}

class Demo : first , second
{
    public void Fun()
    {
        Console.WriteLine("Inside Fun");
    }
}

class MainClass
{
    public static void Main()
    {
        Demo obj = new Demo();
        obj.Fun();
    }
}