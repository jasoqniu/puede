import java.util.*;
public class ARMY {
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        int T = s.nextInt();
        for(int t=1;t<=T;t++)
        {
            int G;
            G = s.nextInt();
            int MG;
            MG = s.nextInt();
            List<Integer> g = new ArrayList<>();
            List <Integer> mg = new ArrayList<>();
            for(int a=1;a<=G;a++)
            {
                int in = s.nextInt();
                g.add(in);
            }
            for(int a=1;a<=MG;a++)
            {
                int in = s.nextInt();
                mg.add(in);
            }

            int minG = Collections.max(g);
            int minMG = Collections.max(mg);
            
            if(minG>=minMG)
            {
                System.out.println("Godzilla");
            }
            else
            {
                System.out.println("MechaGodzilla");
            }

        }
    }
}
