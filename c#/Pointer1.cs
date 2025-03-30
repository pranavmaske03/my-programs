using System;

class Pointer1
{
    public unsafe static void Main(String[] args)
    {
        int no = 11;
        char ch = 'P';

        int* iptr = null;
        char* cptr = null;

        iptr = &no;
        cptr = &ch;

        Console.WriteLine(*iptr);
        Console.WriteLine(*cptr);
        Console.WriteLine((int)iptr);
        Console.WriteLine((int)cptr);
    }
}