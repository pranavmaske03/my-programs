// Hybrid Inheritance
using System;

class Marvellous
{
    public Marvellous()
    {
        Console.WriteLine("Inside Marvellous constructor");
    }
    public void Fun()
    {
        Console.WriteLine("Inside fun");
    }
}
class Infosystems : Marvellous
{
    public Infosystems()
    {
        Console.WriteLine("Inside Infosystems constructor");
    }
}

class PPA : Infosystems
{
    public PPA()
    {
        Console.WriteLine("Inside PPA constructor");
    }
}

class LB : Infosystems
{
    public LB()
    {
        Console.WriteLine("Inside LB constructor");
    }
}

class MainClass
{
    public static void Main()
    {
        PPA obj = new PPA();
        obj.Fun();
        LB obj1 = new LB();
        obj1.Fun();
    }
}