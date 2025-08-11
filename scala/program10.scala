import scala.io.StdIn.{readInt}

class Pattern(var row: Int,var col: Int)
{
    def displayPattern() : Unit = {
        for(i <- 1 to row; j <- 1 to col) {
            if(i == j) print("*\t")
            else print("#\t");
            if(j == col) println();
        }
    }
}   

object Demo extends App
{
    println("Enter number of rows : ");
    var row  = readInt()

    println("Enter number columns : ")
    var col = readInt()

    var obj = new Pattern(row,col)
    obj.displayPattern()
}