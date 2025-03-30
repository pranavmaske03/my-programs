using System;


class MainClass
{
    static void Main()
    {
        string str1 = "hello";
        string str2 = "hello";

        Console.WriteLine(str1 == str2);
        Console.WriteLine(object.ReferenceEquals(str1,str2));

        string s = "hello world";
        str2 += " world";

        Console.WriteLine(s == str2);
        Console.WriteLine(object.ReferenceEquals(s,str2));

        Console.WriteLine(String.Equals(s,str2));
        Console.WriteLine(String.Compare(s,str2));
    }
}