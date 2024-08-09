
import java.util.*;
public class detik {

    public static void main(String[] args) {
        System.out.print("Detik = ");
        Scanner s = new Scanner(System.in);
        int detik = s.nextInt();
        int hr = detik/3600;
        int min = (detik%3600)/60;
        int sec = (detik%60);
        System.out.println(hr + " jam " + min + " menit " + sec + " detik ");

    }
}