using System;

class StringX
{
    public string str;

    public StringX(string s)
    {
        this.str = s;
    }

    public string StringReverse()
    {
        int start = 0,end = 0;
        char temp = '\0';

        char[] Arr = str.ToCharArray();

        start = 0;
        end = str.Length-1;

        while(start < end)
        {
            temp = Arr[start];
            Arr[start] = Arr[end];
            Arr[end] = temp;

            start++;
            end--;
        }

        string s = new string(Arr);
        return s;
    }
}

class MainClass
{
    static void Main()
    {
        string str = "",sRet = "";

        Console.WriteLine("Enter string :");
        str = Console.ReadLine();

        StringX obj = new StringX(str);
        sRet = obj.StringReverse();

        Console.WriteLine("Reverse string is : "+sRet);
    }
}