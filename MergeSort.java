public class MergeSort {

    // Main function that sorts the array
    public static void mergeSort(int[] arr, int left, int right) {
        if (left < right) {

            // 1. Find middle
            int mid = (left + right) / 2;

            // 2. Sort left half
            mergeSort(arr, left, mid);

            // 3. Sort right half
            mergeSort(arr, mid + 1, right);

            // 4. Merge sorted halves
            merge(arr, left, mid, right);
        }
    }

    // Function to merge two sorted halves
    public static void merge(int[] arr, int left, int mid, int right) {

        // Sizes of the two subarrays
        int n1 = mid - left + 1;
        int n2 = right - mid;

        // Temporary arrays
        int[] L = new int[n1];
        int[] R = new int[n2];

        // Copy data into left part
        for (int i = 0; i < n1; i++)
            L[i] = arr[left + i];

        // Copy data into right part
        for (int i = 0; i < n2; i++)
            R[i] = arr[mid + 1 + i];

        // Merge temp arrays back into original
        int i = 0, j = 0;
        int k = left;

        // Compare and merge
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        // Copy remaining elements of left array
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }

        // Copy remaining elements of right array
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    // Driver code
    public static void main(String[] args) {
        int[] arr = { 38, 27, 43, 3, 9, 82, 10 };

        mergeSort(arr, 0, arr.length - 1);

        System.out.print("Sorted: ");
        for (int num : arr)
            System.out.print(num + " ");
    }
}
