using System;

class Input2
{
    public static void Main(string[] arg)
    {
        Console.WriteLine("Enter any key...");
        ConsoleKeyInfo ch = Console.ReadKey();
        Console.WriteLine();

        if(ch.KeyChar == 'A')
        {
            Console.WriteLine("HEllo");
        }
        else
        {
            Console.WriteLine("Bye");
        }  

        char chr = '\0';
        chr = Console.ReadKey().KeyChar; 
        Console.WriteLine(chr);
    }
}




