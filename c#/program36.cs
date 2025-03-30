using System;


class MainClass
{
    static void DisplayPattern(int No)
    {
        for(int iCnt = 1; iCnt <= No; iCnt++)
        {
            Console.Write("{^_^} \t");
        }
        Console.WriteLine();
    }
    static void Main()
    {
        int value = 0;

        Console.WriteLine("Enter frequency");
        value = int.Parse(Console.ReadLine());
        
        DisplayPattern(value);
    }
}