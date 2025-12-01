public class FibonacciLoop {
    public static void main(String[] args) {

        int n = 10;  // number of terms

        int first = 0;   // 1st term
        int second = 1;  // 2nd term

        System.out.print("Fibonacci Series: " + first + " " + second + " ");

        for (int i = 3; i <= n; i++) {
            int next = first + second;  // next term = sum of previous two
            System.out.print(next + " ");

            // update values
            first = second;
            second = next;
        }
    }
}