
using System;

class Object_Type1
{
    public static void Main(string[] args)
    {
        int No = 10;

        object num = No;  // Boxing
        Console.WriteLine(num);

        int value = (int)num; // Unboxing
        Console.WriteLine(value);
    }
}