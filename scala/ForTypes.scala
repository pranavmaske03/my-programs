
object ForTypes
{
    def main(args : Array[String])
    {
        // simple for loop using to
        println("Output using simple for loop")
        for(i <- 1 to 10)
        {
            print(i+"\t");
        }
        println();
        // simple for loop using until
        for(i <- 1 until 10)
        {
            print(i+"\t");
        }
        println("\nEven number using for loop with filters")
        // For loop with filters
        for(i <- 1 to 10 if i % 2 == 0)
        {
            print(i+"\t");
        }

        // for loop with multiple generators
        for(i <- 1 to 3; j <- 1 to 3)
        {
            print(s"i = $i, j = $j")
        }

        println();
        // for with yeild
        var squares = for(i <- 1 to 5) yield i * i;
        println(squares);
    }
}