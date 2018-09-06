import java.util.Scanner;

class Qsort
{
    int partition(int arr[], int low, int high)
    {
        int pivot = arr[high];
        int i = (low-1);    //the smaller partition is till low -1
        for (int j=low; j<high; j++)
        {
            //check for the pibot position relative to smaller element
            if (arr[j] <= pivot)
            {
                i++;    // increment index of smaller element
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        //swap the elements
        int temp = arr[i+1];
        arr[i+1] = arr[high];
        arr[high] = temp;

        return i+1;
    }

    //sort function
    void sort(int arr[], int low, int high)
    {
        if (low < high)
        {
            //similar to the c++ function, pi is the partition index
            int pi = partition(arr, low, high);

            sort(arr, low, pi-1);   //sort 1st half
            sort(arr, pi+1, high);  //sort the other half
        }
    }

    // The main execution function
    public static void main(String args[])
    {
        Scanner reader = new Scanner(System.in);
        int noOfElements = 0;
        System.out.print("Java Quicksort");
        System.out.print("\n");
        System.out.print("Enter Size of Array:");
        System.out.print("\n");
        noOfElements = reader.nextInt();

        int[] arr = new int[noOfElements];

        for (int i = 0; i < noOfElements; i++)
        {
            System.out.print("Enter Value for A[");
            System.out.print(i);
            System.out.print("]");
            System.out.print("\n");
            int inputFromUser = 0;
            inputFromUser = reader.nextInt();   //add user input integer to the array
            arr[i] = inputFromUser;
        }

        //print out the user input array
        System.out.print("Input: [");
        for (int x = 0; x < noOfElements; x++)
        {
            System.out.print(arr[x]);
            if(x!=noOfElements-1) {
                System.out.print(", ");
            }
        }
        System.out.print("]");
        System.out.print("\n");

        //create an object of the class
        Qsort obj = new Qsort();
        obj.sort(arr, 0, ((arr.length)-1));     //use the sort function on the array

        //print out the actual array
        System.out.print("Output: [");
        for (int x = 0; x < noOfElements; x++)
        {
            System.out.print(arr[x]);
            if(x!=noOfElements-1) {
                System.out.print(", ");
            }
        }
        System.out.print("]");
        System.out.print("\n");
    }
} 
