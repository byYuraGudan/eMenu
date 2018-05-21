object FEditCategory: TFEditCategory
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = #1056#1077#1076#1072#1075#1091#1074#1072#1085#1085#1103' '#1110#1085#1092#1086#1088#1084#1072#1094#1110#1111' '#1087#1088#1086' '#1082#1072#1090#1077#1075#1086#1088#1110#1102
  ClientHeight = 106
  ClientWidth = 380
  Color = clBtnFace
  Constraints.MaxHeight = 144
  Constraints.MaxWidth = 396
  Constraints.MinHeight = 144
  Constraints.MinWidth = 396
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Courier New'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 16
  object ButtonAcccept: TButton
    Left = 120
    Top = 68
    Width = 100
    Height = 30
    Caption = #1055#1110#1076#1090#1074#1077#1088#1076#1080#1090#1080
    TabOrder = 0
  end
  object ButtonCancel: TButton
    Left = 255
    Top = 68
    Width = 100
    Height = 30
    Caption = #1042#1110#1076#1084#1110#1085#1080#1090#1080
    TabOrder = 1
  end
  object edit_name_category: TLabeledEdit
    Left = 72
    Top = 32
    Width = 283
    Height = 24
    EditLabel.Width = 120
    EditLabel.Height = 16
    EditLabel.Caption = #1053#1072#1079#1074#1072' '#1082#1072#1090#1077#1075#1086#1088#1110#1111
    TabOrder = 2
  end
  object EditID: TLabeledEdit
    Left = 24
    Top = 32
    Width = 33
    Height = 24
    EditLabel.Width = 8
    EditLabel.Height = 16
    EditLabel.Caption = #8470
    Enabled = False
    TabOrder = 3
  end
end
