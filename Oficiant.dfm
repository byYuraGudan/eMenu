object FOficiant: TFOficiant
  Left = 0
  Top = 0
  Caption = 'FOficiant'
  ClientHeight = 500
  ClientWidth = 800
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object PanelOrderMenu: TPanel
    Left = 0
    Top = 0
    Width = 800
    Height = 65
    Align = alTop
    TabOrder = 0
    object Label1: TLabel
      Left = 335
      Top = 4
      Width = 76
      Height = 13
      Caption = #1047#1072#1084#1086#1074#1083#1077#1085#1085#1103' '#8470
    end
    object ComboBox1: TComboBox
      Left = 301
      Top = 23
      Width = 145
      Height = 21
      TabOrder = 0
      Text = 'ComboBox1'
    end
    object AddOrderMenu: TButton
      Left = 16
      Top = 19
      Width = 120
      Height = 30
      Caption = #1042#1110#1076#1082#1088#1080#1090#1080' '#1079#1072#1084#1086#1074#1083#1077#1085#1085#1103
      TabOrder = 1
    end
    object Button1: TButton
      Left = 152
      Top = 19
      Width = 129
      Height = 30
      Caption = #1054#1092#1086#1088#1084#1080#1090#1080' '#1079#1072#1084#1086#1074#1083#1077#1085#1085#1103
      TabOrder = 2
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 440
    Width = 800
    Height = 60
    Align = alBottom
    Caption = 'Panel1'
    TabOrder = 1
    ExplicitLeft = -8
    object Button2: TButton
      Left = 160
      Top = 16
      Width = 121
      Height = 25
      Caption = #1044#1088#1091#1082' '#1088#1072#1093#1091#1085#1082#1091
      TabOrder = 0
    end
  end
end
