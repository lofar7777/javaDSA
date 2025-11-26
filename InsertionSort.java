public class InsertionSort {
    public static void insertionSort(int[] arr){
        int n = arr.length;
        // Start from index 1, because arr[0] by itself is "sorted"
        for(int i = 1; i< n; i++){
            int key = arr[i];   // elememt to be inserted in the sorted part
            int j = i - 1;    // index to scan the sorted part (left side)

            while(j>=0 && arr[j] > key){
                // shift the element to the right
                arr[j + 1] = arr[j];
                // move left
                j--;
            }
            // Place key at its correct position
            arr[j + 1] = key;

        }
    }
    public static void printArray(int[] arr){
        for(int num : arr){
            System.out.print(num + " ");
        }
        System.out.println();
    }

    // Main method to test insertion sort
    public static void main(String[] args){
        int[] arr = {5, 2, 5, 6, 2, 6, 4};
        System.out.println("Before sorting: ");
        printArray(arr);

        insertionSort(arr);

        System.out.println("After sorting: ");
        printArray(arr);
    }

}
