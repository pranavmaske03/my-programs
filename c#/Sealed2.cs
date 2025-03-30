using System;

class Base
{
    public virtual void Fun()
    {
        Console.WriteLine("Inside Fun of base");
    }
    public virtual void Gun()
    {
        Console.WriteLine("Inside Gun of base");
    }
}

class Derived : Base
{
    public override void Fun()
    {
        Console.WriteLine("Inside Fun of Derived");
    }
    public sealed override void Gun()  // overridden stops by using sealed keyword
    {
        Console.WriteLine("Inside Gun of derived");
    }
}

class Derived1 : Derived
{
    public override void Fun()
    {
        Console.WriteLine("Inside Fun of Derived");
    }
    //public override void Gun(){} Error
}

class MainClass
{
    static void Main()
    {
        Derived1 obj = new Derived1();
        obj.Fun();
        obj.Gun();
    }
}