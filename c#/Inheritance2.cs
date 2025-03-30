using System;

namespace Interface 
{

    class Hello
    {
        public Hello()
        {
            Console.WriteLine("INside Hello constructor");
        }

        public void Fun()
        {
            Console.WriteLine("Inside fun");
        }       
    }
    class Bye : Hello
    {
        public Bye()
        {
            Console.WriteLine("INside Bye constructor");
        }

        public void Gun()
        {
            Console.WriteLine("Inside Gun");
        }   
    }
    class Tata : Bye 
    {
        public Tata()
        {
            Console.WriteLine("INside Tata constructor");
        }

        public void Sun()
        {
            Console.WriteLine("Inside sun");
        }   
    }

    class MainClass
    {
        public static void Main()
        {
            Tata obj = new Tata();
            obj.Fun();
            obj.Gun();
            obj.Sun();
        }
    }
}