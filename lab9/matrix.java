import java.util.Scanner;

public class matrix {
    public static void main(String[] args){
        System.out.print("Welcome to Matrix Multiply:");
        System.out.print("\n");
        System.out.print("Enter the size of the Matrix: ");
        System.out.print("\n");

        Scanner scanner = new Scanner( System.in );

        int size = 0;
        size = scanner.nextInt();

        int row = size;
        int col = size;

        int[][] A = new int[row][];
        int[][] B = new int[row][];
        int[][] C = new int[row][];

        for (int i = 0; i < row; i++)
        {
            A[i] = new int[size];
            B[i] = new int[size];
            C[i] = new int[size];
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                A[i][j] = 0;
                System.out.print("Enter value for Position ");
                System.out.print("A[");
                System.out.print(i);
                System.out.print("]");
                System.out.print("[");
                System.out.print(j);
                System.out.print("]");
                System.out.print("\n");
                A[i][j] = scanner.nextInt();
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                B[i][j] = 0;
                C[i][j] = 0;
                System.out.print("Enter value for Position ");
                System.out.print("B[");
                System.out.print(i);
                System.out.print("]");
                System.out.print("[");
                System.out.print(j);
                System.out.print("]");
                System.out.print("\n");
                B[i][j] = scanner.nextInt();;
            }
        }


        for (int row1 = 0; row1 < size; row1++)
        {
            for (int j = 0; j < col; j++)
            {
                for (int row2 = 0; row2 < col; row2++)
                {

                    System.out.print("the values being multiplied are: ");
                    System.out.print(A[row1][row2]);
                    System.out.print(" and ");
                    System.out.print(B[row2][j]);
                    System.out.print("\n");
                    C[row1][j] += (A[row1][row2] * B[row2][j]);
                    /*cout << " C[" << row1<< "][" << j << "] is: " << C[row1][j] << endl;*/
                }
            }
        }

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                System.out.print("Here, ");
                System.out.print("\n");
                System.out.print(" Ans[");
                System.out.print(i);
                System.out.print("][");
                System.out.print(j);
                System.out.print("] is: ");
                System.out.print(C[i][j]);
                System.out.print("\n");
            }
        }

        for (int i = 0; i < row; i++)
        {
            A[i] = null;
            B[i] = null;
            C[i] = null;
        }
    }
}
