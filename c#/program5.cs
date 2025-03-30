using System;
using MyArray;

namespace MyArray
{
    class ArrayX
    {            
        public int[] Arr;

        public ArrayX(int size)
        {
            this.Arr = new int[size];
        }

        public void Accept()
        {
            Console.WriteLine("Enter the elements of the array : ");

            for(int iCnt = 0; iCnt < Arr.Length; iCnt++)
            {
                this.Arr[iCnt] = int.Parse(Console.ReadLine());
            }
        }

        public void Display()
        {
            Console.WriteLine("Elements of the array are : ");

            for(int iCnt = 0; iCnt < Arr.Length; iCnt++)
            {
                Console.Write(this.Arr[iCnt]+"\t");
            }
            Console.WriteLine();
        }

        public bool Search(int search)
        {
            bool flag = false;

            for(int i = 0; i < Arr.Length; i++)
            {
                if(this.Arr[i] == search)
                {
                    flag = true;
                    break;
                }
            }
            return flag;
        }        
    }
}

class program5
{
    public static void Main(string[] args)
    {
        int size = 0;
        int value = 0;
        bool bRet = false;

        Console.WriteLine("Enter the size of the array : ");
        size = int.Parse(Console.ReadLine());

        ArrayX obj = new ArrayX(size);
        obj.Accept();
        obj.Display();

        Console.WriteLine("Enter the number to search in array :");
        value = int.Parse(Console.ReadLine());

        bRet = obj.Search(value);
        if(bRet == true)
        {
            Console.WriteLine("Element is present in array :");
        }
        else
        {
            Console.WriteLine("Element is not present in array : ");
        }
    }
}