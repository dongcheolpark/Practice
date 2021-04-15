using System;
using System.Collections.Generic;
namespace csharp1
{
    class ArmorSuite {
        public virtual void initialize() {
            Console.WriteLine("Armored");
        }
    }

    class IronMan : ArmorSuite {
        public override void initialize()
        {
            base.initialize();
            Console.WriteLine("Repulsor Rays Armed");
        }
    }
    class WarMachine : ArmorSuite {
        public override void initialize()
        {
            base.initialize();
            Console.WriteLine("Double-Barral Cannons Armed");
            Console.WriteLine("Micro-Rocket Launcher Armed");
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
