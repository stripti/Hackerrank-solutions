import java.io.;
import java.math.;
import java.security.;
import java.text.;
import java.util.;
import java.util.concurrent.;
import java.util.regex.;

public class Solution {

    static int[] rotLeft(int[] a, int n, int d) {
        int[] b = new int[n];
        for(int i=0;i<n-d;i++)
        {
            b[i] = a[d+i];
        }
        int l = 0;
        for(int i=n-d;i<n;i++)
        {
            b[i] = a[l++];
        }
       return b; 


    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv(OUTPUT_PATH)));

        String[] nd = scanner.nextLine().split( );

        int n = Integer.parseInt(nd[0]);

        int d = Integer.parseInt(nd[1]);

        int[] a = new int[n];

        String[] aItems = scanner.nextLine().split( );
        scanner.skip((rn[nru2028u2029u0085]));

        for (int i = 0; i  n; i++) {
            int aItem = Integer.parseInt(aItems[i]);
            a[i] = aItem;
        }

        int[] result = rotLeft(a,n, d);

        for (int i = 0; i  result.length; i++) {
            bufferedWriter.write(String.valueOf(result[i]));

            if (i != result.length - 1) {
                bufferedWriter.write( );
            }
        }

        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
