using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace karatsuba
{
    public static class BigMath
    {
        public static string Add(string x, string y)
        {
            int diff = x.Length - y.Length;

            if (diff < 0)
            {
                for (int i = 0; i < Math.Abs(diff); i++)
                {
                    x = "0" + x;
                }
            }
            else
            {
                for (int i = 0; i < Math.Abs(diff); i++)
                {
                    y = "0" + y;
                }
            }

            StringBuilder result = new StringBuilder();

            int _x;
            int _y;
            int iSum;
            int carr = 0;

            for (int i = x.Length - 1; i >= 0; i--)
            {
                _x = (int)Char.GetNumericValue(x[i]);
                _y = (int)Char.GetNumericValue(y[i]);

                iSum = _x + _y + carr;

                if (iSum.ToString().Length > 1)
                {
                    carr = (int)Char.GetNumericValue(iSum.ToString()[0]);
                    result.Insert(0, (int)Char.GetNumericValue(iSum.ToString()[1]));
                }
                else
                {
                    carr = 0;
                    result.Insert(0, (int)Char.GetNumericValue(iSum.ToString()[0]));
                }
            }

            if (carr != 0)
            {
                result.Insert(0, (int)Char.GetNumericValue(carr.ToString()[0]));
            }

            return result.ToString();
        }
    }
}
