//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MBSettingsContext.h"

#import "NSCopying-Protocol.h"

@class MBDrive, MBDriveEncryptionManager, MBKeyBag, MBManager, NSMutableDictionary, NSSet, NSString;

@interface MBDriveSettingsContext : MBSettingsContext <NSCopying>
{
    double _protocolVersion;	// 8 = 0x8
    NSString *_targetDeviceClass;	// 16 = 0x10
    NSString *_sourceIdentifier;	// 24 = 0x18
    NSString *_targetIdentifier;	// 32 = 0x20
    NSSet *_applicationIDs;	// 40 = 0x28
    NSMutableDictionary *_options;	// 48 = 0x30
    MBDrive *_drive;	// 56 = 0x38
    MBDriveEncryptionManager *_encryptionManager;	// 64 = 0x40
    NSString *_deviceCacheDir;	// 72 = 0x48
    NSString *_deviceTemporaryDir;	// 80 = 0x50
    _Bool _isDeviceTransfer;	// 88 = 0x58
    MBKeyBag *_keybag;	// 96 = 0x60
    MBManager *_manager;	// 104 = 0x68
}

+ (id)defaultSettingsContext;	// IMP=0x000000010003d27c
@property(nonatomic) _Bool isDeviceTransfer; // @synthesize isDeviceTransfer=_isDeviceTransfer;
@property(retain, nonatomic) MBManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) MBKeyBag *keybag; // @synthesize keybag=_keybag;
@property(retain, nonatomic) NSString *deviceCacheDir; // @synthesize deviceCacheDir=_deviceCacheDir;
@property(retain, nonatomic) MBDriveEncryptionManager *encryptionManager; // @synthesize encryptionManager=_encryptionManager;
@property(retain, nonatomic) MBDrive *drive; // @synthesize drive=_drive;
@property(retain, nonatomic) NSMutableDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSSet *applicationIDs; // @synthesize applicationIDs=_applicationIDs;
@property(retain, nonatomic) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(retain, nonatomic) NSString *targetDeviceClass; // @synthesize targetDeviceClass=_targetDeviceClass;
@property(nonatomic) double protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (void)log;	// IMP=0x000000010003d9ac
- (void)updatePassword:(id)arg1;	// IMP=0x000000010003d974
- (_Bool)shouldRestoreAppWithID:(id)arg1;	// IMP=0x000000010003d950
@property(readonly, nonatomic) NSString *driveSnapshotManifestDatabasePath;
@property(readonly, nonatomic) NSString *driveSnapshotDatabaseIndexPath;
@property(readonly, nonatomic) NSString *driveSnapshotDatabasePath;
@property(readonly, nonatomic) NSString *driveSnapshotPropertiesPath;
@property(readonly, nonatomic) NSString *driveSnapshotDir;
@property(readonly, nonatomic) NSString *driveBackupInfoPath;
@property(readonly, nonatomic) NSString *driveBackupManifestDatabasePath;
@property(readonly, nonatomic) NSString *driveBackupDatabaseIndexPath;
@property(readonly, nonatomic) NSString *driveBackupDatabasePath;
@property(readonly, nonatomic) NSString *driveBackupPropertiesPath;
@property(readonly, nonatomic) NSString *driveBackupStatusPath;
@property(readonly, nonatomic) NSString *driveBackupDir;
@property(readonly, nonatomic) NSString *password;
@property(readonly, nonatomic) _Bool shouldRemoveItemsNotRestored;
- (_Bool)shouldRestoreSystemFiles;	// IMP=0x000000010003d698
@property(readonly, nonatomic) _Bool shouldCopyBackup;
@property(readonly, nonatomic) _Bool shouldNotifySpringBoard;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003d494
- (void)dealloc;	// IMP=0x000000010003d3b4
- (id)init;	// IMP=0x000000010003d298

@end

