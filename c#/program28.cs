using System;

class DigitX
{
    public int Num;

    public DigitX(int no)
    {
        this.Num = no;
    }

    public int CountFrequency(int search)
    {
        int iDigit = 0, count = 0,temp = this.Num;

        if((search < 0) || (search > 9 ))
        {
            Console.WriteLine("Invalid Input ");
            Console.WriteLine("NOTE : please enter digit between (0 to 9)");
            return -1;
        }

        if(Num < 0)
        {
            Num = -Num;
        }

        while(temp != 0)
        {
            iDigit = temp % 10;
            if(iDigit == search)
            {
                count++;
            }
            temp = temp / 10;
        }
        return count;
    }
}

class MainClass
{
    static void Main()
    {
        int value = 0;
        int digit = 0;

        Console.WriteLine("Enter number :");
        value = int.Parse(Console.ReadLine());

        Console.WriteLine("Enter digit (between 0 to 9) to cheak frequency :");
        digit = int.Parse(Console.ReadLine());

        DigitX obj = new DigitX(value);
        int ret = obj.CountFrequency(digit);

        if(ret != -1)
        {
            Console.WriteLine("count of the digit is : "+ret);
        }
    }
}
