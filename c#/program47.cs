using System;

class MainClass
{
    static int CountCapital(string str)
    {
        int count = 0;

        for(int i = 0; i < str.Length; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                count++;
            }
        }

        return count;
    }

    static void Main()
    {
        string str = "";

        Console.WriteLine("Enter string :");
        str = Console.ReadLine();

        int ret = CountCapital(str);
        Console.WriteLine("Count is : "+ret);
    }
}