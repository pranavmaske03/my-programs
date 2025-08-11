import scala.io.StdIn.{readInt}

class ArrayX (var size : Int)
{
    val arr = new Array[Int](size);

    def Accepts(): Unit = {
        println("Enter elements of the array : ")
        
        for(i <- 0 until this.size) 
        {
            arr(i) = readInt();
        }
    }

    def Display(): Unit = {
        println("Elements of the array are : ")

        for(num <- arr) {
            print(num + "\t");
        }
        println()
    }

    def countEven(): Int = {
        var count = 0

        for(num <- arr if num % 2 == 0) count += 1;
        count;
    }
}

object Demo extends App 
{
    println("Enter number of elements : ")
    var size : Int = readInt();

    var obj = new ArrayX(size)
    obj.Accepts()
    obj.Display()

    println("Count of the even elements are : "+obj.countEven())
}