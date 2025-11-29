import java.util.Scanner;
public class SelectionSortFunctions{
  // Function to perform selection sort
  public static void selectionSort(int[] arr){
    int n = arr.length;
    for(int i = 0; i< n -1; i++){
      int minIndex = i;
      // Find minimum element in the unsorted part
      for(int j = i+1; j<n; j++){
        if(arr[j] < arr[minIndex]){
          minIndex = j;
        }
      }
      // Swap arr[i] and arr[minIndex]
      int temp = arr[minIndex];
      arr[minIndex] = arr[i];
      arr[i] = temp;
    }
  }
  // Function to take array input
  public static int[] inputArray(){
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter array size: ");
    int n = sc.nextInt();
    int[] arr = new int[n];
    System.out.println("Enter " + n + " elements:");
    for(int i = 0; i<n; i++){
      arr[i] = sc.nextInt();
    }
    return arr;
  }
  // Function to print array
  public static void printArray(int[] arr){
    for(int num : arr){
      System.out.print(num + " ");
    }
    System.out.println();
  }
  public static void main(String[] args){
    int[] arr = inputArray();

    System.out.print("Original array: ");
    printArray(arr);

    selectionSort(arr);

    System.out.print("Sorted array: ");
    printArray(arr);
  }
}
