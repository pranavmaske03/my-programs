import scala.io.StdIn.{readInt};

class ArrayX(var size : Int) 
{
    val arr = new Array[Int](size);

    def Accepts() {
        println("Enter elements of the array : ")
        for(i <- 0 until size)
        {
            arr(i) = readInt();
        }
    }

    def Display() {
        println("Elements of the array are :")
        
        for(num <- arr) {
            println(num)
        }
    }

    def Search(target : Int): Boolean = {
        for(num <- arr) {
            if(num == target) return true;
        }
        false;
    }
}

object Demo
{
    def main(args : Array[String]) 
    {
        println("Enter number of elements : ");
        var size : Int = readInt();

        var obj = new ArrayX(size);
        obj.Accepts();
        obj.Display();

        println("Enter elements to check in the array : ")
        var target : Int = readInt();

        var bRet = obj.Search(target)
        if(bRet == true) { 
            println("Element is found")
        } else {
            println("Element not present");
        }
    }
}