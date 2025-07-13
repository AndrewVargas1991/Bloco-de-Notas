//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Arquivo1;
	TMenuItem *Abrir1;
	TMenuItem *Salvar;
	TMenuItem *Fechar1;
	TOpenDialog *OpenDialog1;
	TSaveDialog *SaveDialog1;
	TMemo *Memo1;
	TMenuItem *Ferramenta1;
	TMenuItem *Ferramenta2;
	TMenuItem *Sobre1;
	TMenuItem *BlocodeNotas1;
	TMenuItem *Normal;
	TMenuItem *AmethystKamri;
	TMenuItem *AquaLightSlate;
	TMenuItem *CyanDusk;
	TMenuItem *IcebergClassico;
	TMenuItem *OnyxBlue;
	TFontDialog *FontDialog1;
	TMenuItem *Mudarfonte1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall BlocodeNotas1Click(TObject *Sender);
	void __fastcall NormalClick(TObject *Sender);
	void __fastcall AmethystKamriClick(TObject *Sender);
	void __fastcall AquaLightSlateClick(TObject *Sender);
	void __fastcall CyanDuskClick(TObject *Sender);
	void __fastcall IcebergClassicoClick(TObject *Sender);
	void __fastcall OnyxBlueClick(TObject *Sender);
	void __fastcall Abrir1Click(TObject *Sender);
	void __fastcall SalvarClick(TObject *Sender);
	void __fastcall Fechar1Click(TObject *Sender);
	void __fastcall Mudarfonte1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
