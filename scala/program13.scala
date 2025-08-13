import scala.io.StdIn.{readInt}

object Demo extends App
{
    def displayDigit(num : Int)
    {
        for(i <- num to 1 by -1)
        {
            print(i+"\t")
        }
        println()
    }

    println("enter number")
    var num = readInt()

    displayDigit(num)
}