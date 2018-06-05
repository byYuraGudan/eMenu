//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("EditIngredient.cpp", FEditIngredient);
USEFORM("EditPersonal.cpp", FEditPersonal);
USEFORM("MainForm.cpp", FMainForm);
USEFORM("EditFood.cpp", FEditFood);
USEFORM("Admin.cpp", FAdmin);
USEFORM("Authorization.cpp", FAuth);
USEFORM("DataModule.cpp", DM); /* TDataModule: File Type */
USEFORM("EditCategory.cpp", FEditCategory);
USEFORM("EditDiscount.cpp", FEditDiscount);
USEFORM("EditTabel.cpp", FEditTable);
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
