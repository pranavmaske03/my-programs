
object ForYield
{
    def main(args : Array[String])
    {
        var even = for(i <- 1 to 10 if i % 2 == 0) yield i
        var odd = for(i <- 1 to 10 if i % 2 == 1) yield i

        println(even)
        println(odd)

        val pairs = for {
            x <- 1 to 5
            y <- 1 to 3
        } yield (x,y)

        println(pairs);
    }
}