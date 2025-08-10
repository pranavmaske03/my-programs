
import java.util.*;

class Collection
{
    public static void main(String af[])
    {  
        Hashtable <String, Integer> hobj = new Hashtable<String,Integer>();

        hobj.put("c progrmming",990);
        hobj.put("c++ programming",1280);
        hobj.put("java programming",780);
        hobj.put("pythn programming",1560);

        System.out.println("book price is "+hobj.get("java programming"));
        hobj.remove("c++ programming");

        Enumeration eobj = hobj.keys();
        while(eobj.hasMoreElements())
        {
            System.out.println(eobj.nextElement());
        }
    }
}