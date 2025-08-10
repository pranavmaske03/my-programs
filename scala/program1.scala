import scala.io.StdIn.{readInt}

object Demo
{
    def main(args : Array[String])
    {
        println("enter first number")
        var no1 : Int = readInt()
        println("Enter second number")
        var no2 : Int = readInt()

        var result = ((no1 / no2) * 100).toFloat

        println(result);
    }
}