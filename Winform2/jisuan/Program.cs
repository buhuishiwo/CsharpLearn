using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            double[] num = new double[3];
            int i,j;
            double t,sum;
            for(i=0;i<3;i++)
            {
                num[i]=Convert.ToDouble(Console.ReadLine());
            }
            for(i=0;i<3;i++)
            {
                for(j=0;j<3-i-1;j++)
                {
                    if (num[j] > num[j+1]) {
                        t = num[j];
                        num[j] = num[j + 1];
                        num[j + 1] = t;
                    }
                }
            }
            sum = num[1] + num[2];
            Console.WriteLine(sum);
            Console.ReadLine();
        }
    }
}
