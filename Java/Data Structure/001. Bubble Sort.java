import java.util.*;
public class BubbleSort{
    static int i, j, n, temp;
    static void PrintArray(int Arr[], int size){
        for(i=0; i<size; i++){
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Size of Array:");
        n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter "+n+" Number:");
        for(i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        System.out.println("Before Bubble Sort: ");
        PrintArray(arr, n);
        //Applying Bubble Sort
        for(i=0 ;i<n; i++){
            for(j=0; j<n-i-1; j++){
                if(arr[j]>arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        System.out.println("After Bubble Sort: ");
        PrintArray(arr, n);
    }
}
