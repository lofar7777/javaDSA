public class BubbleSort {
    public static void bubbleSort(int[] arr){
        int n = arr.length;
        int count = 0;
        // Outer loop for passes
        for(int i = 0; i < n-1; i++){
            boolean swapped = false; // Flag to detect any swap
            // Inner loop for comparison in each pass
            for(int j = 0; j < n - 1 - i; j++){

                // Compare adjacent elements
                if(arr[j] > arr[j + 1]){

                    // Swap if in wrong order
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j + 1] = temp;

                    // A swap happened
                    swapped = true;
                    count ++;
                }
            }

            // If no elements were swapped -> array is sorted
            if(!swapped){
                break;
            }
        }
    }
    public static void main(String[] args){

        int[] arr = { 5, 1, 4, 2, 8};

        System.out.println("Before sorting: ");
        for (int a : arr) System.out.print(a + " ");

        bubbleSort(arr);

        System.out.println("\nAfter sorting: ");
        for(int a : arr) System.out.print(a + " ");
    }
}
