public class SelectionSort {
    public static void selectionSort(int[] arr){
        int n = arr.length;

        for(int i = 0; i < n - 1; i++){
            int minIndex = i;
            // Find the smallest element from i to end
            for(int j = i + 1; j < n; j++){
                if(arr[j] < arr[minIndex]){
                    minIndex = j;
                }
            }

            // Swap the found minimum element with arr[i]
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
    public static void main(String[] args){
        int[] arr = {5, 2, 9, 1, 5, 6};
        selectionSort(arr);

        System.out.println("Sorted array:");
        for(int num : arr){
            System.out.println(num + " ");
        }
    }
}
