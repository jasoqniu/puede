import java.util.*;

public class latihantrycatch2 {

    public static void main(String[] args) {
        try
        {
            Thread.sleep(10000);
            System.out.println("Hello Geeks");
        }
        catch(InterruptedException e)
        {
            System.out.println("Thread interrupted");
        }
    }
}
