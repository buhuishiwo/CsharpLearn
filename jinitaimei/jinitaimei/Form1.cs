using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace jinitaimei
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string text = textBox1.Text;
            if (text == "实在太美")
            {
                int i = 0;
                while(i!=1)
                {
                    MessageBox.Show("鸡你" + textBox1.Text);
                }
            }
            else
            {
                MessageBox.Show("Oh, baby, 实在是太美");
            }
        }
    }
}
