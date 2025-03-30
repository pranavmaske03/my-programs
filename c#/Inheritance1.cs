using System;

class Hello
{
    public Hello()
    {
        Console.WriteLine("INside Hello constructor");
    }

    public void Fun()
    {
        Console.WriteLine("Inside fun of base");
    }
}

class Bye : Hello
{
    public Bye()
    {
        Console.WriteLine("Inside Bye constructor");
    }
    
    public void Gun()
    {
        Console.WriteLine("Inside Gun of derived");
    }
}

class MainClass
{
    public static void Main()
    {
        Bye obj = new Bye();
        obj.Fun();
        obj.Gun();
    }
}