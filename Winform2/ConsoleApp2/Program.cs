using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int sum = 0, i = 0;
            while (true) //while为死循环
            {
                sum=sum+i;
                i++;
                if (i > 100) break; //跳出循环
            }
            Console.WriteLine(sum);
        }
    }
}
