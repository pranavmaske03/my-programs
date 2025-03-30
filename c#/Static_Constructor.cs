
using System;

class StaticX
{
    public static int num;
    public static string str;
    public static char ch;

    static StaticX()
    {
        num = 7;
        str = "Fuck YOu...";
        ch = 'L';
    }
}

class Static_Constructor
{
    public static void Main()
    {
        Console.WriteLine(StaticX.num);
        Console.WriteLine(StaticX.str);
        Console.WriteLine(StaticX.ch);
    }
}