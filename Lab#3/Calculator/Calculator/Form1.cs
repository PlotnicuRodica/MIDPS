using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Form1 : Form
    {
        static public double x;
        static public double y;
        static public string operation;

        public Form1()
        {
            InitializeComponent();
        }

        private void aboutToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show(" Lab#3 MIDPS - Calculator \n IDE: Microsoft Visual Studio \n Language: C# \n Author: Plotnicu Rodica TI-144", "About", MessageBoxButtons.OK);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
                textBox1.Text = "1";
            else textBox1.AppendText("1");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
                textBox1.Text = "2";
            else textBox1.AppendText("2");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
                textBox1.Text = "3";
            else textBox1.AppendText("3");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
                textBox1.Text = "4";
            else textBox1.AppendText("4");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
                textBox1.Text = "5";
            else textBox1.AppendText("5");
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
                textBox1.Text = "6";
            else textBox1.AppendText("6");
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
                textBox1.Text = "7";
            else textBox1.AppendText("7");
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
                textBox1.Text = "8";
            else textBox1.AppendText("8");
        }

        private void button9_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
                textBox1.Text = "9";
            else textBox1.AppendText("9");
        }

        private void button0_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "0")
                textBox1.AppendText("0");
        }

        private void buttonBack_Click(object sender, EventArgs e)
        {
            string s = textBox1.Text;

            if (s.Length>2)
                    s = s.Substring(0, s.Length - 1);

            else if (s.Length == 2)
            {
                if (s[0] == '-')
                    s = "0";
                else
                    s = s.Substring(0, s.Length - 1);
            }

            else if (s.Length < 2)
                s = "0";
            textBox1.Text = s;
        }

        private void buttonClear_Click(object sender, EventArgs e)
        {
            string s = textBox1.Text;
            if (s != "0")
                s = "0";
            textBox1.Text = s;
        }

        private void buttonDot_Click(object sender, EventArgs e)
        {
            string s = textBox1.Text;
            bool dot = false;

            foreach (char c in s)
                {
                if (c == '.')
                    dot = true;
                }
                if (!dot)
                    textBox1.AppendText("."); 
        }

        private void buttonPlusMinus_Click(object sender, EventArgs e)
        {
            textBox1.Text = (-(Convert.ToDouble(textBox1.Text))).ToString();
        }

        private void buttonPlus_Click(object sender, EventArgs e)
        {
            x = Convert.ToDouble(textBox1.Text);
            textBox1.Text = "0";
            operation = "plus";
        }

        private void buttonMinus_Click(object sender, EventArgs e)
        {
            x = Convert.ToDouble(textBox1.Text);
            textBox1.Text = "0";
            operation = "minus";
        }

        private void buttonMultiply_Click(object sender, EventArgs e)
        {
            x = Convert.ToDouble(textBox1.Text);
            textBox1.Text = "0";
            operation = "multiply";
        }

        private void buttonDivide_Click(object sender, EventArgs e)
        {
            x = Convert.ToDouble(textBox1.Text);
            textBox1.Text = "0";
            operation = "divide";
        }

        private void buttonSqr_Click(object sender, EventArgs e)
        {
            x = Convert.ToDouble(textBox1.Text);
            textBox1.Text = "0";
            operation = "sqr";
        }

        private void buttonSqrt_Click(object sender, EventArgs e)
        {
            x = Convert.ToDouble(textBox1.Text);
            textBox1.Text = (Math.Sqrt(x)).ToString();
            if (textBox1.Text.Length > 13)
                textBox1.Text = textBox1.Text.Substring(0, 13);
            operation = "none";
        }

        private void buttonEqual_Click(object sender, EventArgs e)
        {
            y = Convert.ToDouble(textBox1.Text);

            switch (operation)
            {
                case "plus":
                    {
                        textBox1.Text = (x + y).ToString();
                        break;
                    }

                case "minus":
                    {
                        textBox1.Text = (x - y).ToString();
                        break;
                    }

                case "multiply":
                    {
                        textBox1.Text = (x * y).ToString();
                        break;
                    }

                case "divide":
                    {
                        textBox1.Text = (x / y).ToString();
                        break;
                    }

                case "sqr":
                    {
                        textBox1.Text = Math.Pow(x, y).ToString();
                        break;
                    }

                default:
                    return;
            }

            if (textBox1.Text.Length > 13)
                textBox1.Text.Substring(0, 13);
        }
    }
}
