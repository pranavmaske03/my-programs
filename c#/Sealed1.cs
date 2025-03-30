using System;

sealed class Base
{
    public void Fun()
    {
        Console.WriteLine("Inside fun of demo");
    }

    public  void Sun()
    {
        Console.WriteLine("Inide Sun of Demo");
    }
}

class Derived : Base  // Error 
{
    
}

class MainClass
{
    static void Main()
    {
        Derived obj = new Derived();
    }
}