object FEditOrderMenu: TFEditOrderMenu
  Left = 0
  Top = 0
  Caption = 'FEditOrderMenu'
  ClientHeight = 578
  ClientWidth = 800
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object PanelOrderMenu: TPanel
    Left = 0
    Top = 0
    Width = 800
    Height = 52
    Align = alTop
    TabOrder = 0
    ExplicitLeft = 8
    ExplicitTop = 8
    object Label1: TLabel
      Left = 403
      Top = 6
      Width = 76
      Height = 13
      Caption = #1047#1072#1084#1086#1074#1083#1077#1085#1085#1103' '#8470
    end
    object Label2: TLabel
      Left = 624
      Top = 6
      Width = 37
      Height = 13
      Caption = 'C'#1090#1110#1083' '#8470
    end
    object ComboBox1: TComboBox
      Left = 391
      Top = 25
      Width = 100
      Height = 21
      ItemIndex = 0
      TabOrder = 0
      Text = '6'
      Items.Strings = (
        '6'
        '7'
        '12'
        '14'
        '15'
        '16'
        '17')
    end
    object Button1: TButton
      AlignWithMargins = True
      Left = 142
      Top = 4
      Width = 135
      Height = 44
      Margins.Left = 0
      Align = alLeft
      Caption = #1047#1072#1082#1088#1080#1090#1080' '#1079#1072#1084#1086#1074#1083#1077#1085#1085#1103
      ImageIndex = 1
      Images = DM.ImageBtn
      TabOrder = 1
      WordWrap = True
      OnClick = Button1Click
      ExplicitLeft = 161
      ExplicitTop = 14
    end
    object Button6: TButton
      AlignWithMargins = True
      Left = 4
      Top = 4
      Width = 135
      Height = 44
      Align = alLeft
      Caption = #1054#1092#1086#1088#1084#1080#1090#1080' '#1079#1072#1084#1086#1074#1083#1077#1085#1085#1103
      HotImageIndex = 0
      ImageIndex = 0
      Images = DM.ImageBtn
      TabOrder = 2
      WordWrap = True
      OnClick = Button6Click
      ExplicitLeft = 1
      ExplicitTop = 1
      ExplicitHeight = 50
    end
    object ComboBox2: TComboBox
      Left = 592
      Top = 25
      Width = 100
      Height = 21
      ItemIndex = 0
      TabOrder = 3
      Text = #1094#1077#1085#1090#1088
      Items.Strings = (
        #1094#1077#1085#1090#1088
        #1094#1077#1085#1090#1088
        #1094#1077#1085#1090#1088
        #1094#1077#1085#1090#1088
        #1094#1077#1085#1090#1088
        #1094#1077#1085#1090#1088
        #1094#1077#1085#1090#1088)
    end
  end
  object DBGrid1: TDBGrid
    AlignWithMargins = True
    Left = 280
    Top = 55
    Width = 517
    Height = 520
    Align = alClient
    DataSource = DM.ADSOrderMenu
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Panel1: TPanel
    Left = 0
    Top = 52
    Width = 277
    Height = 526
    Align = alLeft
    TabOrder = 2
    ExplicitTop = 54
    object GridPanel1: TGridPanel
      Left = 1
      Top = 403
      Width = 275
      Height = 122
      Align = alBottom
      ColumnCollection = <
        item
          Value = 50.000000000000000000
        end
        item
          Value = 50.000000000000000000
        end>
      ControlCollection = <
        item
          Column = 0
          Control = Button7
          Row = 0
        end
        item
          Column = 1
          Control = Button8
          Row = 0
        end
        item
          Column = 0
          Control = Button2
          Row = 1
        end
        item
          Column = 1
          Control = btnDiscount
          Row = 1
        end>
      RowCollection = <
        item
          SizeStyle = ssAbsolute
          Value = 60.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 60.000000000000000000
        end>
      TabOrder = 0
      ExplicitTop = 402
      object Button7: TButton
        Left = 1
        Top = 1
        Width = 136
        Height = 60
        Align = alClient
        Caption = #1044#1086#1076#1072#1090#1080' '#1076#1086' '#1079#1072#1084#1086#1074#1083#1077#1085#1085#1103
        ImageIndex = 2
        Images = DM.ImageBtn
        TabOrder = 0
        WordWrap = True
        ExplicitWidth = 130
      end
      object Button8: TButton
        Left = 137
        Top = 1
        Width = 137
        Height = 60
        Align = alClient
        Caption = #1042#1080#1076#1072#1083#1080#1090#1080' '#1079' '#1079#1072#1084#1086#1074#1083#1077#1085#1085#1103
        ImageIndex = 3
        Images = DM.ImageBtn
        TabOrder = 1
        WordWrap = True
        ExplicitLeft = 131
        ExplicitWidth = 130
      end
      object Button2: TButton
        Left = 1
        Top = 61
        Width = 136
        Height = 60
        Align = alClient
        Caption = #1044#1088#1091#1082' '#1088#1072#1093#1091#1085#1082#1091
        ImageIndex = 4
        Images = DM.ImageBtn
        TabOrder = 2
        WordWrap = True
        ExplicitWidth = 130
      end
      object btnDiscount: TButton
        Left = 137
        Top = 61
        Width = 137
        Height = 60
        Align = alClient
        Caption = #1047#1085#1080#1078#1082#1072
        ImageIndex = 5
        Images = DM.ImageBtn
        TabOrder = 3
        WordWrap = True
        ExplicitTop = 55
        ExplicitWidth = 130
      end
    end
  end
  object BindSourceDB1: TBindSourceDB
    DataSet = DM.OTOpenOrder
    ScopeMappings = <>
    Left = 760
    Top = 8
  end
  object BindingsList1: TBindingsList
    Methods = <>
    OutputConverters = <>
    Left = 759
    Top = 8
    object LinkListControlToField1: TLinkListControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'id_order'
      Control = ComboBox1
      FillExpressions = <>
      FillHeaderExpressions = <>
      FillBreakGroups = <>
    end
    object LinkListControlToField2: TLinkListControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'name_table'
      Control = ComboBox2
      FillExpressions = <>
      FillHeaderExpressions = <>
      FillBreakGroups = <>
    end
  end
  object BindSourceDB2: TBindSourceDB
    DataSet = DM.OTNotOcupTable
    ScopeMappings = <>
    Left = 760
    Top = 8
  end
end
