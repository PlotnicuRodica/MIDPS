//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <stdio.h>

#include "Unit1.h"
#include "Dos.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
struct time t;
struct date d;
int width;
int height;
int x;
int y;


TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        stop->Enabled = false;
        srand(time(NULL));
}
void __fastcall TForm1::exitClick(TObject *Sender)
{
        Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        char buf[20];
        getdate(&d);
        gettime(&t);
        sprintf(buf,"%02d-%02d-%4d %02d:%02d:%02d",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
        timeBox->Text=(AnsiString)buf;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::paintBoxPaint(TObject *Sender)
{
        paintBox->Canvas->Pen->Color = clBlack;
        paintBox->Canvas->Brush->Color = clBlack;
        paintBox->Canvas->Brush->Style = bsCross;
        paintBox->Canvas->Rectangle(0, 0, paintBox->Width, paintBox->Height);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::startClick(TObject *Sender)
{
        paintBox->Repaint();
        paintBox->Canvas->Pen->Color = clRed;
        width = Form1->paintBox->Width;
        height = Form1->paintBox->Height;
        x = 0;
        paintBox->Canvas->MoveTo(0, height / 2.0);
        stop->Enabled = true;
        start->Enabled = false;
        Timer2->Enabled = true;
}
//---------------------------------------------------------------------------

void DrawLine()
{
        y = (height / 2.0) + (rand() % 41 - 20);
        Form1->paintBox->Canvas->LineTo(++x, y);
        Form1->Panel2->Height = y;
}
void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
  if(x == width)
                stopClick(Sender);
        else DrawLine();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::stopClick(TObject *Sender)
{
        Timer2->Enabled = false;
        start->Enabled = true;
        stop->Enabled = false;
}
//---------------------------------------------------------------------------

