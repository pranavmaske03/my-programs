using System;


class Object_Type2
{
    public static void Main(string[] args)
    {
        object[] Arr = {11, 11.111, "Jay Ganesh", 'P',3875.28734};

        object[] Brr = new object[3] {"Pranav", 'P', 11};

        foreach(object iCnt in Arr)
        {
            Console.WriteLine(iCnt);
        }

        foreach(object iCnt in Brr)
        {
            Console.WriteLine(iCnt);
        }
    }
}