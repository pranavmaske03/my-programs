using System;

class program25
{
    public static void CountCapitalSmall(string str)
    {
        char[] Arr = str.ToCharArray();
        int iCnt = 0, capital = 0, small = 0;

        for(iCnt = 0; iCnt < Arr.Length; iCnt++)        
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                capital++;
            }
            else if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                small++;
            }
        }
        Console.WriteLine("Count of the capital letters is : "+capital);
        Console.WriteLine("Count of the small letters is : "+small);
    }

    static void Main()
    {
        string str = "";

        Console.WriteLine("Enter string :");
        str = Console.ReadLine();

        CountCapitalSmall(str);
    }
}