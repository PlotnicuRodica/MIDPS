//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *start;
        TButton *stop;
        TButton *reset;
        TButton *exit;
        TEdit *timeBox;
        TEdit *cronBox;
        TLabel *Label1;
        TLabel *Label2;
        TTimer *Timer1;
        TTimer *Timer2;
        void __fastcall exitClick(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall startClick(TObject *Sender);
        void __fastcall stopClick(TObject *Sender);
        void __fastcall resetClick(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
