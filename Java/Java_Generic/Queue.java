import java.util.*;
public class Queue<Q> 
{
    private ArrayList<Q>queue=null;
    private int max;
    public Queue(int size)
    {
        queue = new ArrayList<>();
        max = size;
    }

    public boolean full()
    {
        if(max==queue.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public boolean isEmpty()
    {
        return queue.isEmpty();
    }

    public void add(Q x)
    {
        if(!full())
        {
            queue.add(x);
        }
    }

    public Q front()
    {
        return queue.get(0);
    }

    public Q pop()
    {
        if(!isEmpty())
        {
            return queue.remove(0);
        }
        return null;
    }

    public static void main(String[] args) 
    {

        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        Queue<Integer> q = new Queue<>(t+5);
        for(int a=1;a<=t;a++)
        {
            int n=s.nextInt();
            if(n==1)
            {
                int p = s.nextInt();
                q.add(p);
            }
            else if(n==2)
            {
                q.pop();
            }
            else if(n==2)
            {
                Integer f = q.front();
                if(f==null)
                {
                    System.out.println("Empty!");
                }
            }
        }

    }


}
