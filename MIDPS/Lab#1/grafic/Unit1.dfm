object Form1: TForm1
  Left = 191
  Top = 151
  Width = 423
  Height = 318
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
    Left = 240
    Top = 8
    Width = 93
    Height = 13
    Caption = 'Data si ora curenta:'
  end
  object Label2: TLabel
    Left = 104
    Top = 64
    Width = 282
    Height = 16
    Caption = 'Resurse grafice ale mediului C++ Builder'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object paintBox: TPaintBox
    Left = 152
    Top = 88
    Width = 233
    Height = 161
    OnPaint = paintBoxPaint
  end
  object start: TButton
    Left = 24
    Top = 88
    Width = 75
    Height = 25
    Hint = 'Pornirea graficului'
    Caption = 'Start'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    OnClick = startClick
  end
  object stop: TButton
    Left = 24
    Top = 128
    Width = 75
    Height = 25
    Hint = 'Oprirea graficului'
    Caption = 'Stop'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    OnClick = stopClick
  end
  object exit: TButton
    Left = 24
    Top = 200
    Width = 75
    Height = 25
    Hint = 'Iesire din program'
    Caption = 'Exit'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    OnClick = exitClick
  end
  object timeBox: TEdit
    Left = 232
    Top = 32
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object Panel1: TPanel
    Left = 112
    Top = 88
    Width = 25
    Height = 161
    Hint = 'BarGraph(panel)'
    Color = clGradientActiveCaption
    ParentShowHint = False
    ShowHint = True
    TabOrder = 4
  end
  object Panel2: TPanel
    Left = 112
    Top = 88
    Width = 25
    Height = 81
    Caption = 'Panel2'
    Color = clDefault
    TabOrder = 5
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 96
    Top = 8
  end
  object Timer2: TTimer
    Interval = 100
    OnTimer = Timer2Timer
    Left = 144
    Top = 8
  end
end
