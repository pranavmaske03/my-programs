using System;

class MainClass
{
    static void Main()
    {
        // Declare without initializing.
        string str1;
       
        // Initialize to null.
        //string? message2 = null;

        // Initialize as an empty string.
        // Use the Empty constant instead of the literal "".
        string str2 = System.String.Empty;

        // Use System.String if you prefer.
        System.String str3 = "Hello World!";

        // In local variables (i.e. within a method body)
        // you can use implicit typing.
        var str4 = "Marvellous";

        // Use a const string to prevent 'str4' from
        // being used to store another string value.
        const string str5 = "Infosystems";

        // Use the String constructor only when creating
        // a string from a char*, char[], or sbyte*. See
        // System.String documentation for details.
        char[] letters = { 'A', 'B', 'C' };
        string alphabet = new string(letters);

        Console.WriteLine(alphabet);
    }
}