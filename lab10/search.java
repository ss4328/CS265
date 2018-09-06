public class Search
{
    public static int bMain(int argc, String[] args)
    {
        if (argc != 2)
        {
            System.out.print("Usage: bsearch array_size");
            System.out.print("\n");
            return 1;
        }
        int size = Integer.parseInt(args[1]);
        System.out.print("Testing binary_search with Array of size ");
        System.out.print(size);
        System.out.print("\n");
        test_search(size, binary_search);
    }

    public static int lMain(int argc, String[] args)
    {
        if (argc != 2)
        {
            System.out.print("Usage: lsearch array_size");
            System.out.print("\n");
            return 1;
        }
        int size = Integer.parseInt(args[1]);
        System.out.print("Testing linear_search with Array of size ");
        System.out.print(size);
        System.out.print("\n");
        test_search(size, linear_search);
    }
    //Implementation of search.h

    //value types??

    public static int[] make_array(int size)
    {
        int[] A = new int[size];
        for (int i = 0; i < size; i++)
        {
            A[i] = i;
        }
        return A;
    }
    //Search Array using Binary Search
    public static boolean binary_search(int target, int[] A, int start, int stop)
    {
        if (start > stop)
        {
            return false;
        }
        int middle = start + (stop - start) / 2;
        if (A[middle] == target)
        {
            return true;
        }
        if (A[middle] > target)
        {
            return binary_search(target, A, start, middle-1);
        }
        return binary_search(target, A, middle+1, stop);
    }
    //Search Array using Linear Search
    public static boolean linear_search(int target, int[] A, int start, int stop)
    {
        for (int i = start; i <= stop; i++)
        {
            if (A[i] == target)
            {
                return true;
            }
            if (target < A[i])
            {
                return false;
            }
        }
        return false;
    }

    //Test Function, tests a search function
    public static void test_search(int size, bool p)
    {
        //Generate Array
        int[] array = make_array(size);
        //Search for every number in Array
        //It should fail 20 times and succeed rest
        int found = 0;
        int failed = 0;
        //Planned failures
        int planned = size / 10;
        for (int i = -1 * planned; i < planned + size; i++)
        {
            if (search(i,array,0,size-1))
            {
                found++;
            }
            else
            {
                failed++;
            }
        }
        int tests = found + failed;
        System.out.print("Ran ");
        System.out.print(tests);
        System.out.print(" tests.");
        System.out.print("\n");
        System.out.print("Found ");
        System.out.print(found);
        System.out.print(" out of ");
        System.out.print(size);
        System.out.print(" targets.");
        System.out.print("\n");
        System.out.print("Missing ");
        System.out.print(failed);
        System.out.print(" out of ");
        System.out.print(2 * planned);
        System.out.print(" targets.");
        System.out.print("\n");
        System.out.print("Found Success Rate: ");
        System.out.print(((double)found / (double)size) * 100);
        System.out.print("%");
        System.out.print("\n");
        System.out.print("Missing Success Rate: ");
        System.out.print(((double)failed / (double)(2 * planned)) * 100);
        System.out.print("%");
        System.out.print("\n");
    }
}

