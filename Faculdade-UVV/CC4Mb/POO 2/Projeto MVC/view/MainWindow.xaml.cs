using System.Diagnostics.Eventing.Reader;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using Viniciusas.control;

namespace Viniciusas
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private inovacontrole objIIcontrole = new();
        public MainWindow()
        {
            InitializeComponent();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            //Console.WriteLine("not chamar BD direto");

            if (!string.IsNullOrEmpty(area.Text) && !string.IsNullOrEmpty(ideia.Text))
            {
                if (objIIcontrole.ControleCadastrarII(area.Text, ideia.Text, float.Parse(preco.Text)))
                {
                    MessageBox.Show("Cadastro Realizado com Sucesso");
                }
            }
            else
            {
                MessageBox.Show("Deu ruim muito loko");
            }


        } 
        
    }
}