#include "SlokiFlasherPro.h"
 
using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    SlokiFlasherPro::SlokiFlasherPro form;

    Application::Run(% form);

}