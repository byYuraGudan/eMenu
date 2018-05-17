use eMenu
GO
BACKUP DATABASE eMenu  
TO DISK = 'E:\eMenu\T-SQLQuery\Full_Backup_eMenu.Bak'  
   WITH FORMAT,  
      MEDIANAME = 'SQLServerBackup_eMenu',  
      NAME = 'Full Backup of eMenu';  
GO 
