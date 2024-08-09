import java.util.*;
public class themidplanet {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        HashMap<String,Integer> planet = new HashMap<String,Integer>();
        HashMap<Integer,String> planet2 = new HashMap<Integer,String>();
        int index=1;
        boolean bypass1=false;
        boolean bypass2=false;
        for(int a=1;a<=n;a++)
        {
            String in = s.next();
            String in2= s.next();
            if(!planet.containsKey(in) )
            {
                planet.put(in,index);
                planet2.put(index, in);
                index++;
            }
            if(!planet.containsKey(in2))
            {
                planet.put(in2,index);
                planet2.put(index, in2);
                index++;
            }
        }

        index--;
        /* 
        for(int a=1;a<=index;a++)
        {
            System.out.println(a);
            System.out.println(planet2.get(a));
        }
        */
        int mid = 0;
        if ( index % 2 != 0)
            mid= index / 2 + 1;
        else
            mid= index / 2 ;
            
       // System.out.println("MID = "+planet2.get(mid));


        boolean prime=true;
        for(int a=2;a<=Math.sqrt(mid);a++)
        {
            if(mid%a==0)
            {
                prime=false;
            }
        }
        if(prime)
        {
            //System.out.println("PRIME");
            System.out.println(planet2.get(mid) + " - " + planet2.get(index));
        }
        else
        {
            //System.out.println("NOT PRIME");
            System.out.println(planet2.get(mid) + " - " + planet2.get(1));
        }
        
    }
}