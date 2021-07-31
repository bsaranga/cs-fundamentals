using System;
using System.Text;

namespace karatsuba
{
    class Program
    {
        static void Main(string[] args)
        {
            string inputA = "3141592653589793238462643383279502884197169399375105820974944592";
            string inputB = "2718281828459045235360287471352662497757247093699959574966967627";
            string result = Karatsuba(inputA, inputB);
            Console.WriteLine(result);
        }

        static string Karatsuba(string x, string y)
        {
            string a;
            string b;
            string c;
            string d;

            if (x.Length == 1 && y.Length == 1)
            {
                int _x = int.Parse(x);
                int _y = int.Parse(y);
                return (_x * _y).ToString();
            }
            else
            {
                a = x.Substring(0, x.Length/2);
                b = x.Substring(x.Length / 2);
                c = y.Substring(0, y.Length / 2);
                d = y.Substring(y.Length / 2);
            }

            return BigMath.Add(BigMath.Add(PadZeros(Karatsuba(a, c), x.Length), PadZeros(BigMath.Add(Karatsuba(a,d), Karatsuba(b,c)), x.Length/2)), Karatsuba(b, d));
        }
        static void BigMathAddTest(int iterations)
        {
            int iter = iterations;
            int passCount = 0;
            int failCount = 0;
            Random rand = new Random();

            for (int i = 0; i < iter; i++)
            {
                Int64 a = rand.Next();
                Int64 b = rand.Next();
                Int64 sum = a + b;
                string cSum = BigMath.Add(a.ToString(), b.ToString());

                if (sum.ToString() == cSum)
                {
                    passCount++;
                }
                else
                {
                    failCount++;
                }
            }

            Console.WriteLine($"Passed: {passCount}, Failed: {failCount}");
        }
        static string PadZeros(string input, int num)
        {
            for (int i = 0; i < num; i++)
            {
                input += "0";
            }

            return input;
        }
    }
}
