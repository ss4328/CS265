public class zeta
{
    public static void main(String[] args)
    {
        //System.out.println("Your first argument is: "+args[0]);
        //System.out.print("hello");
        findZetaSum(Integer.parseInt(args[0]), Integer.parseInt(args[1]));
    }

    public static void findZetaSum(int x, int n)
    {
        double answer = 0;
        for (int i = 1; i <= n; i++)
        {
            double frac = 1 / ((double)i);
            double addition = Math.pow(frac, x);
            answer = answer + addition;
        }
        System.out.print("Z(");
        System.out.print(x);
        System.out.print(") =");
        System.out.print(answer);
        System.out.print(" when approximated at n= ");
        System.out.print(n);
        System.out.print("\n");
    }
}
