using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Contin
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int i = 0,s = 0;
            for(i=0;i<4;i++)
            {
                s++;
                if (s == 2) continue; //当s=2时，跳过这次循环，继续下一次循环
                Console.WriteLine(s);
            }
            
        }
    }
}
