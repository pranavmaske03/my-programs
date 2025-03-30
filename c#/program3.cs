using System;
using DigitX;

namespace DigitX
{
    class Digit
    {
        internal int No;

        public Digit(int no)
        {
            this.No = no;
        }

        public bool CheckDigit()
        {
            int iDigit = 0, temp = this.No;

            while(temp != 0)
            {
                iDigit = temp % 10;
                if(iDigit == 7)
                {
                    break;
                }
                temp = temp / 10;
            }
            if(iDigit == 7)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

class program3
{
    public static void Main(string[] args)
    {
        int value = 0;
        bool bRet = false;

        Console.WriteLine("Enter number : ");
        value = int.Parse(Console.ReadLine());

        Digit obj = new Digit(value);
        
        bRet = obj.CheckDigit();
        if(bRet == true)
        {
            Console.WriteLine("7 is present");
        }
        else
        {
            Console.WriteLine("7 is not present");
        }
    }
}