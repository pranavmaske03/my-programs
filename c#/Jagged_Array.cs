using System;

class Jagged_Array
{
    public static void Display(int[][] Arr)
    {
        int i = 0;
        int j = 0;

        Console.WriteLine(Arr.Length);
        while(i < Arr.Length)
        {
            for(j = 0; j < Arr[i].Length; j++)
            {
                Console.Write(Arr[i][j]+"\t");
            }
            Console.WriteLine();
            i++;
        }
    }

    public static void Main(string[] arg)
    {
        int size = 0;
        int col = 0;

        Console.WriteLine("Enter the number of rows of the jagged array : ");
        size = Convert.ToInt32(Console.ReadLine());

        int[][] Arr = new int[size][];

        int i = 0;
        int iCnt = 0;
        try
        {
            while(i < size)
            {
                Console.WriteLine("Enter the number columns for the "+i+" row");
                col = Convert.ToInt32(Console.ReadLine());

                Arr[i] = new int[col];

                Console.WriteLine("Enter elements : ");
                for(iCnt = 0; iCnt < Arr[i].Length; iCnt++)
                {
                    Arr[i][iCnt] = Convert.ToInt32(Console.ReadLine());
                }
                i++;
            }

            Display(Arr)           ;
        }
        catch(Exception eobj)
        {
            Console.WriteLine(eobj);
        }
    }
}