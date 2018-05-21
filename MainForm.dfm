object FMainForm: TFMainForm
  Left = 0
  Top = 0
  Caption = 'eMenu'
  ClientHeight = 600
  ClientWidth = 800
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Courier New'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 15
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 225
    Height = 600
    Align = alLeft
    Alignment = taLeftJustify
    BevelOuter = bvNone
    Caption = 'Panel1'
    TabOrder = 0
    object DBCtrlGrid1: TDBCtrlGrid
      Left = 0
      Top = 0
      Width = 225
      Height = 600
      Align = alClient
      DataSource = DM.MDSShowCategory
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Courier New'
      Font.Style = []
      PanelBorder = gbNone
      PanelHeight = 40
      PanelWidth = 208
      ParentFont = False
      TabOrder = 0
      RowCount = 15
      object DBText1: TDBText
        AlignWithMargins = True
        Left = 3
        Top = 3
        Width = 171
        Height = 34
        Align = alClient
        Color = clBtnFace
        DataField = 'name_category'
        DataSource = DM.MDSShowCategory
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Courier New'
        Font.Style = []
        ParentColor = False
        ParentFont = False
        WordWrap = True
        ExplicitHeight = 35
      end
      object DBText3: TDBText
        AlignWithMargins = True
        Left = 180
        Top = 10
        Width = 25
        Height = 20
        Margins.Top = 10
        Margins.Bottom = 10
        Align = alRight
        Alignment = taCenter
        BiDiMode = bdLeftToRight
        DataField = 'CountRecord'
        DataSource = DM.MDSShowCategory
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Courier New'
        Font.Style = [fsBold]
        ParentBiDiMode = False
        ParentFont = False
        WordWrap = True
        ExplicitTop = 2
      end
    end
  end
  object Panel2: TPanel
    Left = 225
    Top = 0
    Width = 575
    Height = 600
    Align = alClient
    Caption = 'Panel2'
    TabOrder = 1
    object DBCGShowFood: TDBCtrlGrid
      Left = 1
      Top = 25
      Width = 573
      Height = 574
      Align = alClient
      ColCount = 4
      DataSource = DM.MDSShowFood
      PanelBorder = gbNone
      PanelHeight = 191
      PanelWidth = 139
      TabOrder = 0
      TabStop = False
      object PanelElementShowFood: TPanel
        AlignWithMargins = True
        Left = 3
        Top = 3
        Width = 133
        Height = 185
        Align = alClient
        BevelOuter = bvNone
        TabOrder = 0
        object DBText2: TDBText
          AlignWithMargins = True
          Left = 3
          Top = 167
          Width = 127
          Height = 15
          Align = alBottom
          Alignment = taRightJustify
          DataField = 'price_food'
          DataSource = DM.MDSShowFood
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          ExplicitTop = 175
          ExplicitWidth = 172
        end
        object DBText4: TDBText
          AlignWithMargins = True
          Left = 3
          Top = 128
          Width = 127
          Height = 33
          Align = alBottom
          DataField = 'name_food'
          DataSource = DM.MDSShowFood
          WordWrap = True
          ExplicitLeft = 4
          ExplicitTop = 136
          ExplicitWidth = 172
        end
        object DBImage1: TDBImage
          AlignWithMargins = True
          Left = 3
          Top = 3
          Width = 127
          Height = 119
          Align = alClient
          DataField = 'picture'
          DataSource = DM.MDSShowFood
          Stretch = True
          TabOrder = 0
        end
      end
    end
    object EditMainSearchFood: TEdit
      Left = 1
      Top = 1
      Width = 573
      Height = 24
      Align = alTop
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Courier New'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      TextHint = #1055#1086#1096#1091#1082' '#1089#1090#1088#1072#1074#1080' '#1072#1073#1086' '#1085#1072#1087#1086#1102
      OnChange = EditMainSearchFoodChange
    end
  end
end
