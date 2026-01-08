public class Prime100 {
    public static void main(String[] args) {

        for (int i = 2; i <= 100; i++) {
            boolean isPrime = true;

            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
                System.out.print(i + " ");
        }
    }
}
// This can also be done with recursion 