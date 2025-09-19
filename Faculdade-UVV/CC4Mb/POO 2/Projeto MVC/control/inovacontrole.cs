using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Viniciusas.model;

namespace Viniciusas.control
{
   
    internal class inovacontrole
    {
        private inova ModeloPersistencia = new();
        public Boolean ControleCadastrarII(string area, string ideia,float custo)
        {
            ideia = ideia + "!!!!!!";

            inova ii = new()
            {
                Area = area,
                Ideia = ideia,
                Custo = custo
            };

            if (ModeloPersistencia.CadastrarII(ii))
            {
                return true;
            }

            return false;
        }
    }
}
