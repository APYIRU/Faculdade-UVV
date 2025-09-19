using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Viniciusas.model;

namespace Viniciusas.BD
{
    internal class BD
    {
        public static List<inova> mybd = new();

        public static void SalvarBD(inova i) => mybd.Add(i);

        public static List<inova> RetornarBD() => mybd;
    }
}
