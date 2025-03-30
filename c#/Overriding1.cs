using System;

class Base
{
    public virtual void Fun()
    {
        Console.WriteLine("Inside fun of base");
    }
    public virtual void Gun()
    {
        Console.WriteLine("Inside gun of base");
    }
    public virtual void Run()
    {
        Console.WriteLine("Inside run of base");
    }
    public void Sun()
    {
        Console.WriteLine("Inside sun of base");
    }
}

class Derived : Base
{
    public override void Fun()
    {
        Console.WriteLine("Inside fun of derived");
    }
    public override void Gun()
    {
        Console.WriteLine("Inside gun of derived");
    }
    public void Sun()
    {
        Console.WriteLine("Inside sun of derived");
    }
}

class MainClass
{
    static void Main()
    {
        Derived obj = new Derived();
        obj.Fun();
        obj.Gun();
        obj.Run();
        obj.Sun();
        Console.WriteLine("---------------------------");
        Base bobj = new Derived();      // upcasting
        bobj.Fun();
        bobj.Gun();
        bobj.Run();
        bobj.Sun();
    }
}