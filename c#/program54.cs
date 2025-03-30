using System;


class MainClass
{   
    static bool CheckCapital(char ch)
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    static void Main()
    {
        char ch = '\0';

        Console.WriteLine("Enter character :");
        ch = Convert.ToChar(Console.Read());

        bool bRet = CheckCapital(ch);
        if(bRet == true)
        {
            Console.WriteLine("\nit is capital");
        }
        else
        {
            Console.WriteLine("\nit is not capital");
        }
    }
}