using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            timer1.Enabled = true;
            timer1.Interval = 20;
            timer2.Interval = 20;
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            

        }
        
        private void timer1_Tick(object sender, EventArgs e)
        {
            
            Point point = new Point();
            Point po = pictureBox1.Location;
            point.Y = po.Y;
            int X = po.X+2;
            pictureBox1.Location = new Point(X,point.Y);
            if(X==this.Width-140)
            {
                timer1.Enabled = false;
                timer2.Enabled = true;
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            pictureBox1.Load(@"C:\Users\陈伟\Pictures\head2.jpg");
        }

        private void timer2_Tick(object sender, EventArgs e)
        {
            Point point = new Point();
            Point po = pictureBox1.Location;
            point.Y = po.Y;
            int X = po.X - 2;
            pictureBox1.Location = new Point(X, point.Y);
            if (X <0)
            {
                timer2.Enabled = false;
                timer1.Enabled = true;
            }
        }
    }
}
