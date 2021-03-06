//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#include <iostream>
#include <sstream>
#pragma hdrstop

#include "Unit1.h"
#include "Dos.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

using namespace std;

TForm1 *Form1;

struct date d;
struct time t;

void PrintTime();

int seconds;
int minutes;
int zecimals;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        seconds = 0;
        minutes = 0;
        zecimals = 0;
        PrintTime();
        Timer2->Enabled = false;
        stop->Enabled = false;
}
//---------------------------------------------------------------------------


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
void PrintTime()
{
        stringstream timeFormat;
        timeFormat << ((minutes < 10) ? "0" : "") << minutes << " min  ";
        timeFormat << ((seconds < 10) ? "0" : "") << seconds << " sec  ";
        timeFormat << zecimals << " zec";
        string temp = timeFormat.str();
        Form1->cronBox->Text = (AnsiString)temp.c_str();
}
void __fastcall TForm1::startClick(TObject *Sender)
{
        Timer2->Enabled = true;
        start->Enabled = false;
        reset->Enabled = false;
        stop->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::stopClick(TObject *Sender)
{
        Timer2->Enabled = false;
        start->Enabled = true;
        reset->Enabled = true;
        stop->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::resetClick(TObject *Sender)
{
        seconds = 0;
        minutes = 0;
        zecimals = 0;
        PrintTime();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
        if(zecimals == 9)
        {
                zecimals = 0;
                if(seconds == 59)
                {
                        seconds = 0;
                        minutes++;
                }
                else seconds++;
        }
        else zecimals++;
        PrintTime();
}
//---------------------------------------------------------------------------

