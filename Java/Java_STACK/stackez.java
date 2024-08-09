import java.util.*;
public class stackez 
{
    public static void main(String[] args) 
    {
        Stack stack = new Stack();
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        for(int a=1;a<=t;a++)
        {
            int n = s.nextInt();
            if(n==1)
            {
                int push = s.nextInt();
                stack.push(push);
            }
            else if(n==2)
            {
                if(stack.count()!=0)
                {
                    stack.pop();
                }
                else
                {
                    System.out.println("Empty!");
                }
            }
            else if(n==3)
            {
                if(stack.count()!=0)
                {
                    System.out.println(stack.peek());
                }
                else
                {
                    System.out.println("Empty!");
                }
            }
        }
    }
}
