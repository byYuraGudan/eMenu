object FEditDiscount: TFEditDiscount
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = #1056#1077#1076#1072#1075#1091#1074#1072#1085#1085#1103' '#1110#1085#1092#1086#1088#1084#1072#1094#1110#1111' '#1087#1088#1086' '#1079#1085#1080#1078#1082#1091
  ClientHeight = 162
  ClientWidth = 380
  Color = clBtnFace
  Constraints.MaxHeight = 200
  Constraints.MaxWidth = 396
  Constraints.MinHeight = 200
  Constraints.MinWidth = 396
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Courier New'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 16
  object edit_id: TLabeledEdit
    Left = 25
    Top = 30
    Width = 231
    Height = 24
    EditLabel.Width = 96
    EditLabel.Height = 16
    EditLabel.Caption = #1053#1086#1084#1077#1088' '#1082#1072#1088#1090#1082#1080
    TabOrder = 0
  end
  object edit_pib_client: TLabeledEdit
    Left = 25
    Top = 78
    Width = 330
    Height = 24
    EditLabel.Width = 200
    EditLabel.Height = 16
    EditLabel.Caption = #1055#1088#1110#1079#1074#1080#1097#1077' '#1110#1085#1110#1094#1110#1072#1083#1080' '#1082#1083#1110#1108#1085#1090#1072
    TabOrder = 1
  end
  object edit_discount: TLabeledEdit
    Left = 279
    Top = 30
    Width = 76
    Height = 24
    EditLabel.Width = 48
    EditLabel.Height = 16
    EditLabel.Caption = #1047#1085#1080#1078#1082#1072
    TabOrder = 2
  end
  object ButtonAccept: TButton
    Left = 120
    Top = 117
    Width = 100
    Height = 30
    Caption = #1055#1110#1076#1090#1074#1077#1088#1076#1080#1090#1080
    TabOrder = 3
  end
  object ButtonCancel: TButton
    Left = 255
    Top = 118
    Width = 100
    Height = 30
    Caption = #1042#1110#1076#1084#1110#1085#1080#1090#1080
    TabOrder = 4
  end
end
