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

void __fastcall TForm1::exitClick(TObject *Sender)
{
        Close();
}

void __fastcall TForm1::upClick(TObject *Sender)
{
        textBox->Text = textBox->Text.ToInt() + 1;
        status->Caption = "Incrementare i";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::downClick(TObject *Sender)
{
        textBox->Text = textBox->Text.ToInt() - 1;
        status->Caption = "Decrementare i";
}
//---------------------------------------------------------------------------
