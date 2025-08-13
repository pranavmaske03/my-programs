import scala.io.StdIn.{readInt}

class Pattern(val row : Int, val col : Int)
{
    def displayPattern() : Unit = {
        for(i <- 1 to this.row) {
            var ch: Char = 'A'
            for(j <- 1 to this.col) {
                print(ch+"\t")
                ch = (ch + 1).toChar
            }
            println()
        }
    }
}

object Demo 
{
    def main(args : Array[String])
    {
        println("Enter number of rows : ")
        var row = readInt()
        
        println("Enter number of columns : ")
        var col = readInt()

        var obj = new Pattern(row,col)
        obj.displayPattern()
    }
}