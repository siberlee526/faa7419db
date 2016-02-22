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
        }
    }
}
