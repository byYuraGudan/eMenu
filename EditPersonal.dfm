object FEditPersonal: TFEditPersonal
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = #1056#1077#1076#1072#1075#1091#1074#1072#1085#1085#1103' '#1110#1085#1092#1086#1088#1084#1072#1094#1110#1111' '#1087#1088#1086' '#1082#1086#1088#1080#1089#1090#1091#1074#1072#1095#1072
  ClientHeight = 190
  ClientWidth = 380
  Color = clBtnFace
  Constraints.MaxHeight = 228
  Constraints.MaxWidth = 396
  Constraints.MinHeight = 228
  Constraints.MinWidth = 396
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Courier New'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 16
  object edit_pib_personal: TLabeledEdit
    Left = 72
    Top = 32
    Width = 282
    Height = 24
    EditLabel.Width = 136
    EditLabel.Height = 16
    EditLabel.Caption = #1055#1088#1110#1079#1074#1080#1097#1077' '#1110#1085#1110#1094#1110#1072#1083#1080
    TabOrder = 0
  end
  object edit_login: TLabeledEdit
    Left = 24
    Top = 80
    Width = 150
    Height = 24
    EditLabel.Width = 40
    EditLabel.Height = 16
    EditLabel.Caption = #1051#1086#1075#1110#1085
    TabOrder = 1
  end
  object PersonalAccess: TCheckBox
    Left = 125
    Top = 110
    Width = 129
    Height = 17
    Caption = #1040#1076#1084#1110#1085#1110#1089#1090#1088#1072#1090#1086#1088
    TabOrder = 2
  end
  object edit_password: TLabeledEdit
    Left = 204
    Top = 80
    Width = 150
    Height = 24
    EditLabel.Width = 48
    EditLabel.Height = 16
    EditLabel.Caption = #1055#1072#1088#1086#1083#1100
    TabOrder = 3
  end
  object ButtonAccept: TButton
    Left = 120
    Top = 144
    Width = 100
    Height = 30
    Caption = #1055#1110#1076#1090#1074#1077#1088#1076#1080#1090#1080
    TabOrder = 4
  end
  object ButtonCancel: TButton
    Left = 255
    Top = 144
    Width = 100
    Height = 30
    Caption = #1042#1110#1076#1084#1110#1085#1080#1090#1080
    TabOrder = 5
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
    TabOrder = 6
  end
end
