import scala.io.StdIn.{readInt}

class Factorial(var num : Int)
{
    def factorial() : Int = {
        var fact = 1;
        for (i <- 1 to this.num)
        {
            fact *= i;
        }
        fact;
    }
}

object Demo extends App
{
    println("Enter number : ")
    var num : Int = readInt()

    var obj = new Factorial(num);
    println(obj.factorial());
}