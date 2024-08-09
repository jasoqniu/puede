import java.util.*;
import java.io.*;
public class LL_Testdriva 
{

    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        LinkedList list = new LinkedList();
        int c=0;
        while(c!=5)
        {

        System.out.println("====================");
        System.out.println("----------");
        System.out.println("Menu Linked List");
        System.out.println("----------");
        System.out.println("1.) add front ");
        System.out.println("2.) add back");
        System.out.println("3.) view all");
        System.out.println("4.) search");
        System.out.println("5.) exit");
        System.out.println("====================");
        System.out.println("Choose:");
        c = s.nextInt();
        if(c==1)
        {
            System.out.println("Input Data:");
            int data=s.nextInt();
            list.front(list,data);

            System.out.println(" ");
        }
        else if(c==2)
        {
			System.out.println("Input Data:");
            int data=s.nextInt();
			list.insert(list,data);

            System.out.println(" ");
        }
        else if(c==3)
        {
			list.printList(list);

            System.out.println(" ");
        }
        else if(c==4)
        {
			System.out.println("Search Data");
			int search=s.nextInt();
			if(list.search(list, search))
			{
				System.out.println("Data found");
                System.out.println(" ");
			}
			else
			{
				System.out.println("Data not found");
                System.out.println(" ");
			}

        }

        }
	} 
}
