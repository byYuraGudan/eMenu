object DataModule1: TDataModule1
  OldCreateOrder = False
  Height = 454
  Width = 730
  object ConnectionToDB: TADOConnection
    ConnectionString = 
      'Provider=SQLOLEDB.1;Password=1;Persist Security Info=True;User I' +
      'D=sa;Initial Catalog=eMenu;Data Source=127.0.0.1'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 32
    Top = 8
  end
  object TPersonal: TADOTable
    Connection = ConnectionToDB
    TableName = 'Personal'
    Left = 112
    Top = 8
  end
  object TCategory: TADOTable
    Connection = ConnectionToDB
    TableName = 'Category'
    Left = 192
    Top = 8
  end
  object TOrderMenu: TADOTable
    Connection = ConnectionToDB
    Left = 264
    Top = 8
  end
  object ADOTable3: TADOTable
    Left = 328
    Top = 8
  end
end
