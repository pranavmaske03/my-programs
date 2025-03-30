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
            Console.WriteLine("Inside fun of Bye...");
        }
    }
}

class Namespace2
{
    public static void Main(string[] args)
    {
        Demo.Hello obj1 = new Demo.Hello();
        Demo.Bye obj2 = new Demo.Bye();
        obj1.Fun(); 
        obj2.Fun();       
    }
}