public class BubbleSort {
    public static void bubbleSort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {   // outer loop runs from first index to the last index
            for (int j = 0; j < arr.length - 1 - i; j++) {   // inner loop runs from first index to last index minus one minus i. 
                if (arr[j] > arr[j + 1]) {   // if the element at the index are not in proper order, 
                    int temp = arr[j];       // the elements get swapped into their positions
                    arr[j] = arr[j + 1];     
                    arr[j + 1] = temp;
                }
            }
        }
    }
}
// for example the array is (2, 4, 1, 3, 7, 3, 8, 2, 5)
// then the outer loop will start from the first element that is 2 
// and the inner index will be also at f
