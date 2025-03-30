using System;
using first;
using first.second;

namespace first
{
    namespace second
    {
        class Hello
        {
            public void fun()
            {
                Console.WriteLine("Inside fun of second namespace...");
            }

            public void sun()
            {
                Console.WriteLine("Inside sun..");
            }
        }
    }

    class Demo
    {
        public void fun()
        {
            Console.WriteLine("Inside fun of first namespace...");
        }

        public void gun()
        {
            Console.WriteLine("Inside gun...");
        }
    }
}

class Namespace4
{
    public static void Main(string[] args)
    {
        // without use of 'using' keyword.
        // first.Demo obj1 = new first.Demo();
        // first.second.Hello obj2 = new first.second.Hello();
        Demo obj1 = new Demo();
        Hello obj2 = new Hello();
        obj1.fun();       
        obj1.gun();
        obj2.fun();
        obj2.sun();
    }
}