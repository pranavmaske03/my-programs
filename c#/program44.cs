using System;

class StringX
{
    public int CountVowels(string str)
    {
        int count = 0;
        char[] Arr = str.ToCharArray();

        foreach(char iCnt in Arr)
        {
            if((iCnt == 'a') || (iCnt == 'e') || (iCnt == 'i') || (iCnt == 'o')|| (iCnt == 'u') || (iCnt == 'A') || (iCnt == 'E') || (iCnt == 'I') || (iCnt == 'O') || (iCnt == 'U'))
            {
                count++;
            }
        }
        return count;
    }
}

class MainClass
{
    static void Main()
    {
        string str = "";

        Console.WriteLine("Enter string :");
        str = Console.ReadLine();

        StringX obj = new StringX();
        
        Console.WriteLine("Count of the vowels is : "+obj.CountVowels(str));
    }
}