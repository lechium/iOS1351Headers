//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString, NSTimer;

@interface MSDAggD : NSObject
{
    NSTimer *_dataBackupTimer;	// 8 = 0x8
    NSString *_logBackupFolderPath;	// 16 = 0x10
    NSString *_dictionaryBackupFolderPath;	// 24 = 0x18
    NSString *_backupDataFolderPath;	// 32 = 0x20
    NSFileManager *_fileManager;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000001000158d8
- (void).cxx_destruct;	// IMP=0x0000000100017a70
@property(retain) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain) NSString *backupDataFolderPath; // @synthesize backupDataFolderPath=_backupDataFolderPath;
@property(retain) NSString *dictionaryBackupFolderPath; // @synthesize dictionaryBackupFolderPath=_dictionaryBackupFolderPath;
@property(retain) NSString *logBackupFolderPath; // @synthesize logBackupFolderPath=_logBackupFolderPath;
@property(retain) NSTimer *dataBackupTimer; // @synthesize dataBackupTimer=_dataBackupTimer;
- (id)folderSize:(id)arg1;	// IMP=0x0000000100017618
- (void)backupLogFiles;	// IMP=0x0000000100016fdc
- (void)backupDictionary;	// IMP=0x00000001000169c8
- (void)backupAggDData:(id)arg1;	// IMP=0x000000010001678c
- (void)restoreLogFiles;	// IMP=0x00000001000161e4
- (void)restoreDictionary;	// IMP=0x0000000100015e10
- (void)restoreAggDData;	// IMP=0x0000000100015cd0
- (void)scheduleAggDDataBackupTimer;	// IMP=0x0000000100015ad8
- (id)init;	// IMP=0x0000000100015944

@end

