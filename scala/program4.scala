import scala.io.StdIn.{readInt}

class Factors(var num : Int)
{
    def DisplayFactors() = {
        var fact = for(i <- 1 to (num) if num % i == 0) yield i
        fact;
    }
}

object Demo extends App 
{
    println("Enter number :")
    var num : Int  = readInt();

    var obj = new Factors(num)
    var res = obj.DisplayFactors()
    println(res);
}