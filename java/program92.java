import java.util.*;

class program92
{
    public static int SearchLastOcc(String str,char ch)
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        int iPos = -1;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {   
            if(Arr[iCnt] == ch)  
            {
                iPos = iCnt+1;
            }
        }
        return iPos;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        System.out.println("Enter the character you want to search");
        char ch = sobj.next().charAt(0);

        int ret = SearchLastOcc(str,ch);
        if(ret != -1)        
        {
            System.out.println("Last occurence of the character is : "+ret);
        }
        else
        {
            System.out.println("There is no such character");
        }
    }   
}