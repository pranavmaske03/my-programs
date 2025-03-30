// Read() method

using System;

class Input2
{
    public static void Main(string[] arg)
    {
        int userInput = 0;
        char ch = '\0';

        Console.WriteLine("Input using Read : ");
        ch = Convert.ToChar(Console.Read());
		Console.WriteLine("\nEntered Character is : "+ch);    
    }
}