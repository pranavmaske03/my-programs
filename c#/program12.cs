using System;

struct DigitX
{
    public int No;

    public DigitX(int no)
    {
        this.No = no;
    }

    public int CountFrequency()
    {
        int iDigit = 0, temp = this.No, count = 0;

        while(temp != 0)
        {
            iDigit = temp % 10;
            if(iDigit == 7)
            {
                count++;
            }
            temp = temp / 10;
        }
        return count;
    }
}

class program12
{
    public static void Main()
    {
        int value = 0;

        Console.WriteLine("Enter number : ");
        value = int.Parse(Console.ReadLine());

        DigitX obj = new DigitX(value);
        Console.WriteLine("Frequency of the 7 is : "+obj.CountFrequency());
        Console.WriteLine("Frequency of the 7 is : "+obj.CountFrequency());
    }
}