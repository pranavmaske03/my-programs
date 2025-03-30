// interface with structure

using System;

interface Hello
{
    void Fun();
    void Gun();
    void Sun();
}

struct Bye : Hello
{
    public void Fun()
    {
        Console.WriteLine("INside Fun");
    }
    public void Gun()
    {
        Console.WriteLine("INside Gun");
    }
    public void Sun()
    {
        Console.WriteLine("INside Sun");
    }
}

class MainClass
{
    public static void Main(string[] args)
    {
        Bye obj = new Bye();
        obj.Fun();
        obj.Sun();
        obj.Gun();
    }
}