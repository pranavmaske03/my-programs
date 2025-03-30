// ReadLine() method

using System;

class Input1
{
    public static void Main(string[] arg)
    {
        string name = "";
        int age = 0;
        float f = 0.0f;

        Console.Write("Enter your name : ");
        name = Console.ReadLine();

        Console.Write("Enter age : ");
        age = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Enter float number : ");
        f = float.Parse(Console.ReadLine());

        Console.WriteLine("Entered name is : "+name);
        Console.WriteLine("Your age is : "+age);
        Console.WriteLine("Float number is : "+f);
    }
}