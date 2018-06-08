//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("EditTabel.cpp", FEditTable);
USEFORM("EditPersonal.cpp", FEditPersonal);
USEFORM("FEditOrderMenu.cpp", FOficiant);
USEFORM("MainForm.cpp", FMainForm);
USEFORM("EditIngredient.cpp", FEditIngredient);
USEFORM("DataModule.cpp", DM); /* TDataModule: File Type */
USEFORM("Authorization.cpp", FAuth);
USEFORM("Admin.cpp", FAdmin);
USEFORM("EditFood.cpp", FEditFood);
USEFORM("EditDiscount.cpp", FEditDiscount);
USEFORM("EditCategory.cpp", FEditCategory);
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
		Application->CreateForm(__classid(TFAuth), &FAuth);
		Application->CreateForm(__classid(TFEditPersonal), &FEditPersonal);
		Application->CreateForm(__classid(TFEditCategory), &FEditCategory);
		Application->CreateForm(__classid(TFEditDiscount), &FEditDiscount);
		Application->CreateForm(__classid(TFEditFood), &FEditFood);
		Application->CreateForm(__classid(TFEditIngredient), &FEditIngredient);
		Application->CreateForm(__classid(TFEditTable), &FEditTable);
		Application->CreateForm(__classid(TFOficiant), &FOficiant);
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
