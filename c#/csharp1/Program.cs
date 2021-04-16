using System.Collections.Generic;
using System;
namespace csharp1
{
    interface a {
        String tostring();
    }
    class _int : a {
        public int data { get;set;}
        public _int(int a = 10) {
            data = a;
        }
        String a.tostring() {
            return data.ToString();
        }
    }
    class _float : a {
        public double data {get;set;}
        public _float(double a = 10) {
            data = a;
        }
        String a.tostring() {
            return data.ToString();
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            
            return;
        }
    }

}
