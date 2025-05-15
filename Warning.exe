using System;
using System.Windows.Forms;

namespace FakeVirusPopup
{
    static class Program
    {
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);

            DialogResult result = MessageBox.Show(
                "!!! WARNING !!!\n\nThis file may contain a virus.\n\nDo you want to continue?",
                "Security Alert",
                MessageBoxButtons.YesNo,
                MessageBoxIcon.Warning
            );

            if (result == DialogResult.Yes)
            {
                MessageBox.Show(
                    "Malware is now running...\n\nJust kidding 😄\nYou're totally safe.",
                    "System Alert",
                    MessageBoxButtons.OK,
                    MessageBoxIcon.Information
                );
            }
            else
            {
                MessageBox.Show(
                    "Exiting safely. No malware was executed.",
                    "Exit",
                    MessageBoxButtons.OK,
                    MessageBoxIcon.Information
                );
            }
        }
    }
}
