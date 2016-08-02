using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;
using Autodesk.AutoCAD.Runtime;
using Autodesk.AutoCAD.Interop;
using Autodesk.AutoCAD.Interop.Common;

namespace CodeTool
{
    static class Program
    {
        [STAThread]
        static void Main()
        {
            Autodesk.AutoCAD.Interop.AcadApplication AcadApp = new Autodesk.AutoCAD.Interop.AcadApplication();
            AcadApp.Application.WindowState = Autodesk.AutoCAD.Interop.Common.AcWindowState.acMax;
            AcadApp.Application.Visible = true;
            int menu_count = AcadApp.Application.MenuBar.Count;
            for (int i = 0; i < menu_count; ++i)
            {
                MessageBox.Show(AcadApp.Application.MenuBar.Item(i).Name);
            }
            int group_count = AcadApp.Application.MenuGroups.Count;
            for (int i = 0; i < group_count; ++i)
            {
                MessageBox.Show(AcadApp.Application.MenuGroups.Item(i).Name);
            }
        }
    }
}
