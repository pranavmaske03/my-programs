using System;

class StringX
{
    public string str;

    public StringX(string s)
    {
        this.str = s;
    }

    public int SerchFirstOcc(char ch)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < str.Length; iCnt++)
        {
            if(this.str[iCnt] == ch)
            {
                break;
            }
        }
        if(this.str.Length == iCnt)
        {
            return -1;
        }
        else 
        {
            return iCnt;
        }
    }
}

class MainClass
{
    static void Main()
    {
        string str = "";
        char ch = '\0';

        Console.WriteLine("Enter string :");
        str = Console.ReadLine();

        Console.WriteLine("Enter character to search :");
        ch = Convert.ToChar(Console.Read());

        StringX obj = new StringX(str);
        int ret = obj.SerchFirstOcc(ch);

        if(ret != -1)
        {
            Console.WriteLine("\nFirst occurence is at index : {0}",ret);
        }
        else
        {
            Console.WriteLine("\nThere is no such character :");
        }
    }
}