//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::startBtnClick(TObject *Sender)
{
        WinExec("ApplicationSpervisor.exe" , SW_HIDE);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::stopBtnClick(TObject *Sender)
{
        WinExec("taskkill /IM ApplicationSpervisor.exe" , SW_HIDE);
}
//---------------------------------------------------------------------------
 