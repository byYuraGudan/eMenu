//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("MainForm.cpp", FMainForm);
USEFORM("Admin.cpp", FAdmin);
USEFORM("DataModule.cpp", DM); /* TDataModule: File Type */
USEFORM("DataModuleMainForm.cpp", DMMain); /* TDataModule: File Type */
USEFORM("Authorization.cpp", FAuth);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Amethyst Kamri");
		Application->CreateForm(__classid(TFMainForm), &FMainForm);
		Application->CreateForm(__classid(TFAdmin), &FAdmin);
		Application->CreateForm(__classid(TDM), &DM);
		Application->CreateForm(__classid(TDMMain), &DMMain);
		Application->CreateForm(__classid(TFAuth), &FAuth);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
