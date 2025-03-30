using System;

static class DemoStatic 
{
    public static int num;
    public static string str;
    public static double db;

    static DemoStatic()
    {
        num = 11;
        str = "pranav";
        db = 22.22;
    }

    public static void Fun()
    {
        Console.WriteLine("Inside fun");
    }
}

class MainClass
{
    public static void Main()
    {
        DemoStatic.Fun();

        Console.WriteLine(DemoStatic.num);
        Console.WriteLine(DemoStatic.db);
        Console.WriteLine(DemoStatic.str);
    }
}