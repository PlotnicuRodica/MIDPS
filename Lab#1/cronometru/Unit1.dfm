object Form1: TForm1
  Left = 264
  Top = 141
  Width = 429
  Height = 289
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 48
    Top = 24
    Width = 339
    Height = 20
    Hint = 'Tema programului'
    Caption = 'Realizarea unui cronometru in C++ Builder'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object Label2: TLabel
    Left = 160
    Top = 112
    Width = 80
    Height = 16
    Caption = 'Cronometru'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object start: TButton
    Left = 56
    Top = 96
    Width = 75
    Height = 25
    Hint = 'Inceputul cronometrajului'
    Caption = 'Start'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    OnClick = startClick
  end
  object stop: TButton
    Left = 56
    Top = 144
    Width = 75
    Height = 25
    Hint = 'Sfirsitul cronometrajului'
    Caption = 'Stop'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    OnClick = stopClick
  end
  object reset: TButton
    Left = 56
    Top = 192
    Width = 75
    Height = 25
    Hint = 'Resetarea cronometrului'
    Caption = 'Reset'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    OnClick = resetClick
  end
  object exit: TButton
    Left = 312
    Top = 192
    Width = 75
    Height = 25
    Hint = 'Iesire din program'
    Caption = 'Exit'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    OnClick = exitClick
  end
  object timeBox: TEdit
    Left = 272
    Top = 56
    Width = 121
    Height = 21
    TabOrder = 4
  end
  object cronBox: TEdit
    Left = 160
    Top = 144
    Width = 137
    Height = 21
    TabOrder = 5
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 288
    Top = 96
  end
  object Timer2: TTimer
    Enabled = False
    Interval = 100
    OnTimer = Timer2Timer
    Left = 336
    Top = 96
  end
end
