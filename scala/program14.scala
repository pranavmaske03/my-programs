import scala.io.StdIn.{readInt}

class ArrayX(var size : Int)
{
    var arr = new Array[Int](size)

    def Accept() : Unit = {
        println("Enter elements of the array :")
        for(i <- 0 until size)
        {
            arr(i) = readInt()
        }
    }

    def searchElement(search : Int): Boolean = {
        for(num <- arr) {
            if(num == search) return true
        }
        false
    }
}

object Demo 
{
    def main(args : Array[String])
    {
        println("Enter number of elements : ")
        var size = readInt()

        var obj = new ArrayX(size)
        obj.Accept()

        println("Enter element search in array : ")
        var search = readInt()

        var res = obj.searchElement(search)
        if(res) {
            println("Element is present ")
        } else {
            println("Element is not present.")
        }
    }
}