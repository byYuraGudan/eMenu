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
  PixelsPerInch = 96
  TextHeight = 13
  object PanelOrderMenu: TPanel
    Left = 0
    Top = 0
    Width = 800
    Height = 89
    Align = alTop
    TabOrder = 0
    ExplicitTop = -4
    object Label1: TLabel
      Left = 207
      Top = 4
      Width = 76
      Height = 13
      Caption = #1047#1072#1084#1086#1074#1083#1077#1085#1085#1103' '#8470
    end
    object Label2: TLabel
      Left = 385
      Top = 4
      Width = 37
      Height = 13
      Caption = 'C'#1090#1110#1083' '#8470
    end
    object ComboBox1: TComboBox
      Left = 181
      Top = 23
      Width = 145
      Height = 21
      ItemIndex = 0
      TabOrder = 0
      Text = '6'
      Items.Strings = (
        '6'
        '7'
        '12')
    end
    object Button1: TButton
      Left = 22
      Top = 55
      Width = 129
      Height = 30
      Caption = #1047#1072#1082#1088#1080#1090#1080' '#1079#1072#1084#1086#1074#1083#1077#1085#1085#1103
      TabOrder = 1
      OnClick = Button1Click
    end
    object Button6: TButton
      Left = 22
      Top = 18
      Width = 129
      Height = 31
      Caption = 'Button6'
      TabOrder = 2
      OnClick = Button6Click
    end
    object ComboBox2: TComboBox
      Left = 344
      Top = 23
      Width = 145
      Height = 21
      ItemIndex = 0
      TabOrder = 3
      Text = '2'
      Items.Strings = (
        '2'
        '2'
        '2')
    end
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 89
    Width = 536
    Height = 489
    Align = alClient
    DataSource = DM.ODSNotOcupTable
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Panel1: TPanel
    Left = 536
    Top = 89
    Width = 264
    Height = 489
    Align = alRight
    Caption = 'Panel1'
    TabOrder = 2
    ExplicitTop = 71
    ExplicitHeight = 513
    object GridPanel1: TGridPanel
      Left = 1
      Top = 1
      Width = 262
      Height = 487
      Align = alClient
      Caption = 'GridPanel1'
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
          Control = Button3
          Row = 1
        end
        item
          Column = 0
          Control = Button4
          Row = 2
        end
        item
          Column = 1
          Control = Button5
          Row = 2
        end
        item
          Column = 0
          Control = Button9
          Row = 3
        end
        item
          Column = 1
          Control = Button10
          Row = 3
        end>
      RowCollection = <
        item
          SizeStyle = ssAbsolute
          Value = 60.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 60.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 60.000000000000000000
        end
        item
          SizeStyle = ssAbsolute
          Value = 60.000000000000000000
        end
        item
          Value = 100.000000000000000000
        end>
      TabOrder = 0
      ExplicitLeft = 6
      object Button7: TButton
        Left = 1
        Top = 1
        Width = 130
        Height = 60
        Align = alClient
        Caption = 'btnAdd'
        TabOrder = 0
        ExplicitHeight = 30
      end
      object Button8: TButton
        Left = 131
        Top = 1
        Width = 130
        Height = 60
        Align = alClient
        Caption = 'btnRemove'
        TabOrder = 1
        ExplicitLeft = 137
        ExplicitTop = 5
      end
      object Button2: TButton
        Left = 1
        Top = 61
        Width = 130
        Height = 60
        Align = alClient
        Caption = 'btnPrint'
        ImageIndex = 1
        TabOrder = 2
        ExplicitLeft = 81
        ExplicitTop = -19
      end
      object Button3: TButton
        Left = 131
        Top = 61
        Width = 130
        Height = 60
        Align = alClient
        Caption = 'Button3'
        TabOrder = 3
        ExplicitLeft = 137
        ExplicitTop = 55
      end
      object Button4: TButton
        Left = 1
        Top = 121
        Width = 130
        Height = 60
        Align = alClient
        Caption = 'Button4'
        TabOrder = 4
        ExplicitTop = 51
        ExplicitHeight = 30
      end
      object Button5: TButton
        Left = 131
        Top = 121
        Width = 130
        Height = 60
        Align = alClient
        Caption = 'Button5'
        TabOrder = 5
        ExplicitTop = 51
        ExplicitHeight = 30
      end
      object Button9: TButton
        Left = 1
        Top = 181
        Width = 130
        Height = 60
        Align = alClient
        Caption = 'Button9'
        TabOrder = 6
        ExplicitTop = 76
        ExplicitHeight = 30
      end
      object Button10: TButton
        Left = 131
        Top = 181
        Width = 130
        Height = 60
        Align = alClient
        Caption = 'Button10'
        TabOrder = 7
        ExplicitTop = 76
        ExplicitHeight = 30
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
