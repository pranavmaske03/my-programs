using System;

namespace Demo
{
    class Hello
    {
        public int no;

        public Hello()
        {
            this.no = 21;
        }

        public void Fun()
        {
            Console.WriteLine(this.no);
            Console.WriteLine("Inside Fun of HEllo...");
        }
    }

    class Bye
    {
        public int no;

        public Bye()
        {
            this.no = 11;
        }

        public void Fun()
        {
            Console.WriteLine(this.no);
            Console.WriteLine("Inside Fun of Bye...");
        }
    }

    class Namespace1
    {
        public static void Main(string[] args)
        {
            Hello obj1 = new Hello();
            Bye obj2 = new Bye();
            obj1.Fun(); 
            obj2.Fun();       
        }
    }
}