//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
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
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        Memo1->Clear();
        Memo1->Font->Size = 18;
}
//-------------------------------------------------------------------------
void __fastcall TForm1::BlocodeNotas1Click(TObject *Sender)
{
        Application->MessageBox(L"Para criar esse bloco de notas foram utilizadas a IDE C++ Builder da Embarcadero e a biblioteca de componentes visuais VCL.", L"Tecnologias usadas", MB_OK);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NormalClick(TObject *Sender)
{
        Form1->StyleName = "Windows";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AmethystKamriClick(TObject *Sender)
{
        Form1->StyleName = "Amethyst Kamri";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AquaLightSlateClick(TObject *Sender)
{
        Form1->StyleName = "Aqua Light Slate";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CyanDuskClick(TObject *Sender)
{
        Form1->StyleName = "Cyan Dusk";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::IcebergClassicoClick(TObject *Sender)
{
        Form1->StyleName = "Iceberg Classico";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OnyxBlueClick(TObject *Sender)
{
        Form1->StyleName = "Onyx Blue";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Abrir1Click(TObject *Sender)
{
    OpenDialog1->Filter = "Arquivos de texto (*.txt)|*.txt|Todos os arquivos (*.*)|*.*";
    OpenDialog1->InitialDir = ExtractFilePath(Application->ExeName);

    if (OpenDialog1->Execute())
    {
        try
        {
            Memo1->Lines->LoadFromFile(OpenDialog1->FileName, TEncoding::UTF8);
            Form1->Caption = "Bloco de Notas - " + ExtractFileName(OpenDialog1->FileName);
            SaveDialog1->FileName = ExtractFileName(OpenDialog1->FileName);
        }
        catch (const Exception &e)
        {
            ShowMessage("Erro ao abrir o arquivo: " + e.Message);
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SalvarClick(TObject *Sender)
{
        if (ExtractFileName(SaveDialog1->FileName) == "")
        {
            SaveDialog1->Filter = "Arquivos de texto (*.txt)|*.txt|Todos os arquivos (*.*)|*.*";
            SaveDialog1->DefaultExt = "txt";

            if (SaveDialog1->Execute())
            {
                try
                {
                    Memo1->Lines->SaveToFile(SaveDialog1->FileName, TEncoding::UTF8);
                    Form1->Caption = "Bloco de Notas - " + ExtractFileName(SaveDialog1->FileName);
                }
                catch (const Exception &e)
                {
                    ShowMessage("Erro ao salvar o arquivo: " + e.Message);
                }
            }
        }
        else
        {
            Memo1->Lines->SaveToFile(SaveDialog1->FileName, TEncoding::UTF8);
        }


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Fechar1Click(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Mudarfonte1Click(TObject *Sender)
{
    if (FontDialog1->Execute())
    {
        Memo1->Font = FontDialog1->Font;
    }
}
//---------------------------------------------------------------------------
