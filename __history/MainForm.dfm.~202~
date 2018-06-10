object FMainForm: TFMainForm
  Left = 0
  Top = 0
  Caption = 'eMenu'
  ClientHeight = 660
  ClientWidth = 1024
  Color = clGradientInactiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Courier New'
  Font.Style = []
  Menu = DM.MMain
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 15
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 300
    Height = 660
    Align = alLeft
    Alignment = taLeftJustify
    BevelOuter = bvNone
    TabOrder = 0
    object PanelCategory: TPanel
      Left = 0
      Top = 0
      Width = 300
      Height = 356
      Align = alClient
      TabOrder = 0
      object DBGridCategory: TDBCtrlGrid
        Left = 1
        Top = 35
        Width = 298
        Height = 320
        Align = alClient
        AllowDelete = False
        AllowInsert = False
        Color = clBtnFace
        DataSource = DM.MDSShowCategory
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Courier New'
        Font.Style = []
        PanelBorder = gbNone
        PanelHeight = 45
        PanelWidth = 281
        ParentColor = False
        ParentFont = False
        TabOrder = 0
        RowCount = 7
        ExplicitLeft = 0
        ExplicitTop = 97
        object DBCategory: TDBText
          AlignWithMargins = True
          Left = 3
          Top = 3
          Width = 234
          Height = 39
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
          ExplicitWidth = 171
          ExplicitHeight = 35
        end
        object DBText3: TDBText
          AlignWithMargins = True
          Left = 243
          Top = 10
          Width = 35
          Height = 28
          Margins.Top = 10
          Margins.Bottom = 7
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
          ExplicitLeft = 240
          ExplicitHeight = 26
        end
      end
      object EditMainSearchFood: TEdit
        AlignWithMargins = True
        Left = 6
        Top = 6
        Width = 288
        Height = 24
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Align = alTop
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Courier New'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
        TextHint = #1055#1086#1096#1091#1082' '#1087#1086' '#1084#1077#1085#1102
        OnChange = EditMainSearchFoodChange
      end
    end
    object PanelOrderMenu: TPanel
      Left = 0
      Top = 356
      Width = 300
      Height = 304
      Align = alBottom
      TabOrder = 1
      object Label1: TLabel
        AlignWithMargins = True
        Left = 6
        Top = 6
        Width = 288
        Height = 195
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 2
        Align = alTop
        Caption = 
          #1047#1072#1084#1086#1074#1083#1077#1085#1085#1103' '#8470': ------------------------------------------ '#1057#1090#1110#1083' '#8470':' +
          ' ----------------------------------------- '#1044#1072#1090#1072'/'#1095#1072#1089':  ----------' +
          '-------------------------------- '#1054#1092#1110#1094#1110#1072#1085#1090':  --------------------' +
          '----------------------- '#1050#1083#1110#1108#1085#1090': --------------------------------' +
          '----------- '#1041#1077#1079' '#1079#1085#1080#1078#1082#1080':                                   '#1047#1085#1080#1078#1082#1072 +
          ':'
        Color = clBtnFace
        ParentColor = False
        WordWrap = True
      end
      object Label2: TLabel
        AlignWithMargins = True
        Left = 6
        Top = 203
        Width = 288
        Height = 22
        Margins.Left = 5
        Margins.Top = 0
        Margins.Right = 5
        Align = alTop
        Caption = #1054#1087#1083#1072#1090#1072':'
        Color = clAqua
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clRed
        Font.Height = -20
        Font.Name = 'Courier New'
        Font.Style = []
        ParentColor = False
        ParentFont = False
        ExplicitTop = 218
        ExplicitWidth = 84
      end
      object DBOrderid: TDBText
        Left = 99
        Top = 6
        Width = 200
        Height = 20
        DataField = 'id_order'
        DataSource = DM.ODSOpenOrder
        StyleElements = [seClient, seBorder]
        WordWrap = True
      end
      object DBidtable: TDBText
        Left = 56
        Top = 37
        Width = 239
        Height = 20
        DataField = 'name_table'
        DataSource = DM.ODSOpenOrder
        StyleElements = [seClient, seBorder]
        WordWrap = True
      end
      object DBdateopen: TDBText
        Left = 71
        Top = 67
        Width = 229
        Height = 20
        DataField = 'date_open_order'
        DataSource = DM.ODSOpenOrder
        StyleElements = [seClient, seBorder]
        WordWrap = True
      end
      object DBoficiant: TDBText
        Left = 71
        Top = 97
        Width = 229
        Height = 20
        DataField = 'pib_personal'
        DataSource = DM.ODSOpenOrder
        StyleElements = [seClient, seBorder]
        WordWrap = True
      end
      object DBClient: TDBText
        Left = 55
        Top = 126
        Width = 243
        Height = 20
        DataField = 'pib_client'
        DataSource = DM.ODSOpenOrder
        StyleElements = [seClient, seBorder]
        WordWrap = True
      end
      object DBpayment: TDBText
        Left = 84
        Top = 158
        Width = 214
        Height = 15
        DataField = 'payment'
        DataSource = DM.ODSOpenOrder
        StyleElements = [seClient, seBorder]
        WordWrap = True
      end
      object DBdiscount: TDBText
        Left = 84
        Top = 171
        Width = 214
        Height = 15
        DataField = 'discount'
        DataSource = DM.ODSOpenOrder
        StyleElements = [seClient, seBorder]
        WordWrap = True
      end
      object DBrealpayment: TDBText
        Left = 93
        Top = 208
        Width = 202
        Height = 14
        DataField = 'RealPayment'
        DataSource = DM.ODSOpenOrder
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Courier New'
        Font.Style = [fsBold]
        ParentFont = False
        StyleElements = [seClient, seBorder]
        WordWrap = True
      end
      object Panel3: TPanel
        Left = 1
        Top = 240
        Width = 298
        Height = 63
        Align = alBottom
        TabOrder = 0
        object ButtonViewOrder: TButton
          AlignWithMargins = True
          Left = 4
          Top = 4
          Width = 290
          Height = 55
          Align = alClient
          Caption = #1047#1072#1084#1086#1074#1083#1077#1085#1085#1103
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -20
          Font.Name = 'Courier New'
          Font.Style = []
          ImageIndex = 7
          Images = DM.ImageBtn
          ParentFont = False
          TabOrder = 0
          OnClick = ButtonViewOrderClick
        end
      end
    end
  end
  object Panel2: TPanel
    Left = 300
    Top = 0
    Width = 724
    Height = 660
    Align = alClient
    Caption = 'Panel2'
    TabOrder = 1
    object DBCGShowFood: TDBCtrlGrid
      Left = 1
      Top = 1
      Width = 722
      Height = 658
      Align = alClient
      AllowDelete = False
      AllowInsert = False
      ColCount = 3
      Color = clBtnFace
      DataSource = DM.MDSShowFood
      PanelBorder = gbNone
      PanelHeight = 219
      PanelWidth = 235
      ParentColor = False
      TabOrder = 0
      TabStop = False
      object PanelElementShowFood: TPanel
        AlignWithMargins = True
        Left = 3
        Top = 3
        Width = 229
        Height = 213
        Align = alClient
        BevelOuter = bvNone
        TabOrder = 0
        object DBInformation: TDBText
          AlignWithMargins = True
          Left = 3
          Top = 138
          Width = 223
          Height = 45
          Margins.Top = 0
          Margins.Bottom = 0
          Align = alBottom
          Anchors = [akTop]
          DataField = 'name_food'
          DataSource = DM.MDSShowFood
          WordWrap = True
          ExplicitLeft = 1
          ExplicitTop = 151
        end
        object DBImageFood: TDBImage
          AlignWithMargins = True
          Left = 3
          Top = 3
          Width = 223
          Height = 132
          Align = alClient
          DataField = 'picture'
          DataSource = DM.MDSShowFood
          Stretch = True
          TabOrder = 0
        end
        object Panel4: TPanel
          Left = 0
          Top = 183
          Width = 229
          Height = 30
          Margins.Top = 0
          Margins.Bottom = 0
          Align = alBottom
          Anchors = [akTop]
          BevelOuter = bvNone
          TabOrder = 1
          object DBPrice: TDBText
            AlignWithMargins = True
            Left = 65
            Top = 0
            Width = 127
            Height = 30
            Margins.Left = 0
            Margins.Top = 0
            Margins.Bottom = 0
            Align = alClient
            Alignment = taRightJustify
            DataField = 'price_food'
            DataSource = DM.MDSShowFood
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -12
            Font.Name = 'Tahoma'
            Font.Style = [fsBold]
            ParentFont = False
            WordWrap = True
            ExplicitLeft = 80
            ExplicitWidth = 72
          end
          object DBWeight: TDBText
            Left = 0
            Top = 0
            Width = 65
            Height = 30
            Margins.Top = 0
            Margins.Right = 0
            Margins.Bottom = 0
            Align = alLeft
            BiDiMode = bdLeftToRight
            DataField = 'weight_unit'
            DataSource = DM.MDSShowFood
            ParentBiDiMode = False
            WordWrap = True
          end
          object AddToOrder: TPanel
            Left = 195
            Top = 0
            Width = 34
            Height = 30
            Margins.Top = 1
            Margins.Bottom = 0
            ParentCustomHint = False
            Align = alRight
            BiDiMode = bdLeftToRight
            Ctl3D = False
            DoubleBuffered = False
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -12
            Font.Name = 'Courier New'
            Font.Style = []
            ParentBiDiMode = False
            ParentBackground = False
            ParentCtl3D = False
            ParentDoubleBuffered = False
            ParentFont = False
            ParentShowHint = False
            ShowHint = False
            TabOrder = 0
            TabStop = True
            Touch.InteractiveGestures = []
            Touch.InteractiveGestureOptions = []
            Touch.ParentTabletOptions = False
            Touch.TabletOptions = [toPressAndHold]
            OnMouseDown = AddToOrderMouseDown
            OnMouseUp = AddToOrderMouseUp
            object Image1: TImage
              Left = 1
              Top = 1
              Width = 32
              Height = 28
              Align = alClient
              Picture.Data = {
                0954506E67496D61676589504E470D0A1A0A0000000D49484452000000400000
                00400806000000AA6971DE0000000473424954080808087C0864880000000970
                48597300000B1300000B1301009A9C18000007FC4944415478DAED9B0D4C5457
                1680CFBDEF071C1850A858A8B1DA286281690A625BD7AE54BB9BACFD8B3FC8FE
                55149BDA662BE076DB6DBA89605C37EB361B41F7A7B669C1129B2A8AD6A6BB31
                6D21ADDBA515589501619454ED060A45856140E6E7BD7BF7DE61DD2D752CEF31
                6FDE00ED4908CC7D6FCE3BF7BBE79E73EEBD0F04DF7241E13620DCF21D80701B
                106EF90E80590FCAA82F4A5401D229C07C8A6036A2600584A2FD17291D606D2E
                4AD10566924306D2FCAFACD22F2634809C8339C2B939B72D2708ADA4409661C0
                C93A553808A135CCC0EA948B1DB5556BABD4090120ADAE600616850242E97A8C
                5192113A09251D18A1728CD5DDA733F6F48C4B00299FFE225E42D25684E99300
                38D24823FF0782C0358C612F9523B6DB6DBFEF1D1F0028205B7DE106C0F80FEC
                537C283A1E00440F46F0ABA685BB2A590F68D800DCF9CF2D71A24CCB999A47CD
                E8F8D78552A8C622D978E6EEB23ED301A43516D8B02ABC03186685A3F3D78500
                BD2062E1E1D3197F3C6B1A80F486A2FB29D07758648F0D67E7FF4F81F612813E
                D49C5956177200B6865F2E0150DF0B55A01B330316201186E5F685BB3E091900
                EEF640D147E366E46FC4705545B0A425B3ACD57000FE8027C2A970CF790DF299
                047246E3C29D4EE300F054D75874D4A8685F726B2E7C3F7AC188B6DA8116D8DE
                556510035AD594599AAB25456A02603B5998CFF2FC6B06596702007F8AFC993D
                6BD79B4103E0159E2CC80E30B0C8294EC881A531A923DA6A9C76F86DCF61C300
                30E9665361FE6853615400E9278BCA104605465AB6356E3564C7A58F68FBE0CA
                19D8D17BC4C8C7703778A929ABF4F93103B09D7E360114E592D129CF2C008490
                41852AB7B7DDF3E72B630350BF6507BBE34543AD3211C0B0D092A685A5DB7403
                E0EBF9B6D933FFCD8A8BC4090D80C0E74D593173006D23BA00DC555FF4438AD0
                71E32D32DB03FC556276F3A25D1FEA0290DEB0E5AFECE2539301002574B77D51
                69A13E00F585E711C2732705004ACFDAB34A53035D0B08E0EEC6E79254AA7484
                C49A3000E082B19210683B2D208050CEFF7001B8591C080880A5BF0276A56C52
                0140E4A9E6CCB2BD9A00A4D53D538125294F8B625ED7EB950572124C9747AEA8
                7BBC4E68F576EAD655D27540D37DD4A7EEB5DFB7FB86A01E10406ADDE6F70449
                7C508BE29AB925BA8D365296B56B7B3EF5AAEFDA17EF7E581380F47F3C730645
                4AB6C9054069B02FDE93A50940EAC79B1D4284A8E92467A200201E5F4BF3F7FE
                94A60DC089A71DC294C8C90560900158AA15402D0360D506E045EB63BA8DB64D
                BD0312224606C16E772FD89D1775EBFA9DEB6D4DF7A903432D2DD92F6B039052
                F3F4A7724CE4222D8A3D9FEB3FA1DA919E0FD9D3EF1AD1F67EF729286EA9D0AD
                2B62D6344DF7F9FA863E6E7DF0E5259A002CF8FBA663D274CB23930980B767E0
                50DB8F5ECDD10420E5D8C6523929A67074B56C6E5DF3E936BAE4B61F4376FCD7
                0AA1CBA7617BA7FE3D416C9134DDE7EBECDBD9FA68F90BDA0054AFCF9392622B
                9088751BA4454C5F0CF95470773A7F727EF5BEB7B401389C77AF101F55274447
                4C0A00AACB039ECBAE8CF69CCA539A00641E7BD2E2C28A33F2D658713200F07C
                D9EF75772BB19736EC736B02C025E5D0BA13D2CC694B42310DCC04401502DE8E
                AB1F385657062CED6F0A20B93A6FAB34D5B24D8831FE0CD44C00AA7388A540F7
                0BE75657ECD40560C1A1F5F3A884CEC949530D7F93C8C47301F07438F99ED81C
                C7CA7D177501E0925CBDBE4E9A66B957B01A1B0CCD02A0F6BB41E91BFAC8B1AA
                62E9CDEE1905C0869F238C2AE5C4184082716E600600AA1296FBFB815035F7DC
                AA370E8E09C0D2DA62B1ABF78243889A7287186F995000942B83A00E7ADB1CCA
                601A7CC33B86A31F8EB2A288025448B7446BAEBAC20D800C7AC1C700104A0316
                3FBA004071319E67BB70421084C552A2954D052168037D3DCCB821EF8836214A
                06313E2A68DD5451C1FB858B77BEF6FCCA8AE5A3BD23A069622757ADB351011A
                4489C98C68BEC73C2E015042C1D7E5E210DC04D48CF3AB2A477D554673649B7F
                38AF00102A431122C809D6A052238FCEBC3E1F61882C80600DA2E66029CFD73D
                00C4AB3033E9A6B695FB5ED1F235EDDDA080E61DC93B8801ADF14398CE3D617C
                BC6DCF475EF992B9BD570502B09FB9FEE35ADF20D5D5839907D64C89122DC701
                E1FB912480C420846AC5A8B9F33E96EE7A06FC739F85BF1A35327645FB8A3D1E
                ADDFD73D84B71FC99B2AABE87D160632598D00629C856507392C9DE77B113CDA
                73F767437F52B5F87ED0BE627FBF1E1D63F2E1F947F3ADA09223ECDBCBF967CC
                0218AB184D9B12BCC851FB86789E1F0601F4B8A444AD39BBF62F037A758DD9E2
                B97FDB1C81AFB94A111E3E42E7DEC0174EFEB2198508041B69BEB6579D6E7EE2
                3BDC04B0C7DA233FDBB8E915FD5B53C100B82EC9D5EBD632252CE2FEF7ED513E
                2D1804218A8130283EF0252D19F480E2F2FA4F39B9B05FBD028627DA56555407
                A3DB90A14A7B7BE30C9FAABEC4FE7CFCAB9A912C82C0AA471C290392F4C1E069
                92B8157FBD403C0A7C35A653A0E5C4877FDD9E5B1EF47F8F18EAABF38E6EB807
                A9EA6F10C237EC28FB1753A2003C7B60EE197C9A5C67C20795B9346123EDAF0F
                D80F4F6D375281A340F00E47CEEB0D46D91C92C99A72383F8D22359F75E2A708
                E319C1E8626CBA9891FB059594B7E6BCD162B4AD210DDB7C35D9D977E93E4461
                192BCE1F600F4B6531E2966FEE31BD4C106A66D55C2D73919AC469B33EF9F081
                6D4AA86C34BD94BBF3C0C63822AAB329A631ECF1D6E156EA4204F56345B87836
                F7B5AB66DA333E6AD930CAB71EC07F00B35B856EDB58BDB60000000049454E44
                AE426082}
              Stretch = True
              OnClick = Image1Click
              OnMouseDown = Image1MouseDown
              OnMouseUp = Image1MouseUp
              ExplicitLeft = 3
              ExplicitTop = 3
            end
          end
        end
      end
    end
  end
end
