object FEditFood: TFEditFood
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = #1056#1077#1076#1072#1075#1091#1074#1072#1085#1085#1103' '#1110#1085#1092#1086#1088#1084#1072#1094#1110#1111' '#1087#1088#1086' '#1077#1083#1077#1084#1077#1085#1090' '#1084#1077#1085#1102
  ClientHeight = 424
  ClientWidth = 551
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Courier New'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 16
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 551
    Height = 424
    ActivePage = TabIngredient
    Align = alClient
    TabOrder = 0
    object TabFood: TTabSheet
      Caption = #1054#1089#1085#1086#1074#1085#1072' '#1110#1085#1092#1086#1088#1084#1072#1094#1110#1103
      object Label1: TLabel
        Left = 264
        Top = 14
        Width = 80
        Height = 16
        Caption = #1050#1072#1090#1077#1075#1086#1088#1110#1103'*'
      end
      object Edit_name_food: TLabeledEdit
        Left = 200
        Top = 90
        Width = 330
        Height = 24
        EditLabel.Width = 88
        EditLabel.Height = 16
        EditLabel.Caption = #1053#1072#1079#1074#1072' '#1084#1077#1085#1102'*'
        TabOrder = 0
      end
      object comboboxname_category: TComboBox
        Left = 264
        Top = 33
        Width = 266
        Height = 24
        TabOrder = 1
      end
      object CB_id_category: TComboBox
        Left = 486
        Top = 3
        Width = 44
        Height = 24
        TabOrder = 2
      end
      object EditImage: TButton
        Left = 17
        Top = 173
        Width = 140
        Height = 30
        Caption = #1047#1084#1110#1085#1080#1090#1080' '#1079#1086#1073#1088#1072#1078#1077#1085#1085#1103
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Courier New'
        Font.Style = []
        ParentFont = False
        TabOrder = 3
      end
      object PanelImage: TPanel
        Left = 3
        Top = 3
        Width = 164
        Height = 164
        Caption = 'PanelImage'
        TabOrder = 4
        object Image1: TImage
          AlignWithMargins = True
          Left = 4
          Top = 4
          Width = 156
          Height = 156
          Align = alClient
          ExplicitLeft = 0
          ExplicitTop = -16
          ExplicitWidth = 164
          ExplicitHeight = 164
        end
      end
      object EditID: TLabeledEdit
        Left = 200
        Top = 32
        Width = 35
        Height = 24
        EditLabel.Width = 8
        EditLabel.Height = 16
        EditLabel.Caption = #8470
        Enabled = False
        TabOrder = 5
      end
      object ButtonAccept: TButton
        Left = 280
        Top = 336
        Width = 100
        Height = 30
        Caption = #1055#1110#1076#1090#1074#1077#1088#1076#1080#1090#1080
        TabOrder = 6
      end
      object ButtonCancel: TButton
        Left = 420
        Top = 336
        Width = 100
        Height = 30
        Caption = #1042#1110#1076#1084#1110#1085#1080#1090#1080
        TabOrder = 7
      end
      object GroupBox2: TGroupBox
        Left = 200
        Top = 143
        Width = 330
        Height = 138
        Caption = #1042#1072#1088#1090#1110#1089#1090#1100' '#1084#1077#1085#1102
        TabOrder = 8
        object Edit_cost_price: TLabeledEdit
          Left = 18
          Top = 44
          Width = 140
          Height = 24
          EditLabel.Width = 144
          EditLabel.Height = 16
          EditLabel.Caption = #1057#1086#1073#1110#1074#1072#1088#1090#1110#1089#1090#1100', '#1075#1088#1085'*'
          TabOrder = 0
        end
        object Edit_mark_up: TLabeledEdit
          Left = 177
          Top = 44
          Width = 140
          Height = 24
          EditLabel.Width = 96
          EditLabel.Height = 16
          EditLabel.Caption = #1053#1072#1094#1110#1085#1082#1072'(%)* '
          TabOrder = 1
        end
        object Edit_price: TLabeledEdit
          Left = 106
          Top = 97
          Width = 121
          Height = 24
          EditLabel.Width = 72
          EditLabel.Height = 16
          EditLabel.Caption = #1062#1110#1085#1072', '#1075#1088#1085
          TabOrder = 2
        end
      end
    end
    object TabIngredient: TTabSheet
      Caption = #1044#1086#1076#1072#1090#1082#1086#1074#1072' '#1110#1085#1092#1086#1088#1084#1072#1094#1110#1103
      ImageIndex = 1
      object GroupBox1: TGroupBox
        AlignWithMargins = True
        Left = 3
        Top = 58
        Width = 537
        Height = 332
        Align = alClient
        Caption = #1057#1082#1083#1072#1076'('#1110#1085#1075#1088#1077#1076#1110#1108#1085#1090#1080')'
        TabOrder = 0
        object ToolBar1: TToolBar
          AlignWithMargins = True
          Left = 5
          Top = 21
          Width = 527
          Height = 22
          ButtonWidth = 125
          Caption = 'ToolBar1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'Courier New'
          Font.Style = []
          Images = DM.ImageListButton
          List = True
          ParentFont = False
          ShowCaptions = True
          TabOrder = 0
          object ToolAdd: TToolButton
            AlignWithMargins = True
            Left = 0
            Top = 0
            Caption = #1044#1086#1076#1072#1090#1080' '#1090#1086#1074#1072#1088
            ImageIndex = 0
          end
          object ToolDelete: TToolButton
            AlignWithMargins = True
            Left = 125
            Top = 0
            Caption = #1042#1080#1076#1072#1083#1080#1090#1080' '#1090#1086#1074#1072#1088
            ImageIndex = 1
          end
        end
        object DBGrid1: TDBGrid
          AlignWithMargins = True
          Left = 5
          Top = 49
          Width = 527
          Height = 278
          Align = alClient
          TabOrder = 1
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -13
          TitleFont.Name = 'Courier New'
          TitleFont.Style = []
        end
      end
      object PanelFood: TPanel
        AlignWithMargins = True
        Left = 3
        Top = 3
        Width = 537
        Height = 49
        Align = alTop
        BevelOuter = bvNone
        TabOrder = 1
        object Edit_weight: TLabeledEdit
          Left = 16
          Top = 19
          Width = 121
          Height = 24
          EditLabel.Width = 64
          EditLabel.Height = 16
          EditLabel.Caption = #1042#1072#1075#1072', '#1075#1088
          TabOrder = 0
        end
        object ButtonCalculation: TButton
          Left = 172
          Top = 16
          Width = 100
          Height = 30
          Caption = #1055#1110#1076#1088#1072#1093#1091#1074#1072#1090#1080
          TabOrder = 1
        end
      end
    end
  end
end
