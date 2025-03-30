using System;

class Marvellous
{
    public Marvellous()
    {
        Console.WriteLine("Inside marvellous constructor");
    }
    
    public void Fun()
    {
        Console.WriteLine("Inside fun");
    }
}

class PPA : Marvellous
{
    public PPA()
    {
        Console.WriteLine("Inside PPA");
    }

    public void Sun()
    {
        Console.WriteLine("Inside Sun");
    }
}

class LB : Marvellous
{
    public LB()
    {
        Console.WriteLine("INside LB");
    }

    public void Gun()
    {
        Console.WriteLine("Inside Fun");
    }
}

class MainClass
{
    public static void Main()
    {
        PPA obj1 = new PPA();
        LB obj2 = new LB();   
        obj1.Fun();
        obj2.Fun();
    }
}