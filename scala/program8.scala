import scala.io.StdIn.{readInt}

class Pattern(iNo : Int)
{
    def displayPattern() : Unit  = {
        for(i <- 1 to this.iNo)
        {
            print("*\t")
        }
        println()
    }
}

object Demo 
{    
    def main(args : Array[String])
    {
        println("Enter frequency : ")
        var freq : Int = readInt()

        var obj = new Pattern(freq)
        obj.displayPattern()
    }
}