//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MBServiceEncryptionManager.h"

@class MBCKManager;

@interface MBCKEncryptionManager : MBServiceEncryptionManager
{
    _Bool _fetchingMissingKeys;	// 48 = 0x30
    MBCKManager *_serviceManager;	// 56 = 0x38
}

+ (void)trackMissingEncryptionKeyForPath:(id)arg1;	// IMP=0x00000001000c97f4
- (void).cxx_destruct;	// IMP=0x00000001000cc0e8
@property(nonatomic) __weak MBCKManager *serviceManager; // @synthesize serviceManager=_serviceManager;
- (_Bool)removeRestoreKeyBagsWithError:(id *)arg1;	// IMP=0x00000001000cbf14
- (id)serializeRestoreKeyBagsForDevice:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000cbd30
- (_Bool)saveRestoreKeyBagDatasByID:(id)arg1 secret:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000cbcdc
- (_Bool)saveRestoreKeyBagsForDevice:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000cb3b4
- (id)loadRestoreKeyBagsByUUIDStringWithError:(id *)arg1;	// IMP=0x00000001000caf0c
- (id)loadRestoreKeyBagsByIDWithError:(id *)arg1;	// IMP=0x00000001000caed8
- (_Bool)rollKeyBagWithKeyBagID:(long long *)arg1 error:(id *)arg2;	// IMP=0x00000001000cae84
- (_Bool)tearDownBackupWithError:(id *)arg1;	// IMP=0x00000001000cac00
- (_Bool)setupBackupWithPasscode:(id)arg1 userInitiated:(_Bool)arg2 keybagID:(unsigned int *)arg3 error:(id *)arg4;	// IMP=0x00000001000cabac
- (id)keysetForBackupUDID:(id)arg1 lastModified:(long long *)arg2 userInitiated:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000001000cab58
- (void)_exportKeychain;	// IMP=0x00000001000ca9ec
- (void)_findMissingEncryptionKeys;	// IMP=0x00000001000c9da0
- (void)keybagIsUnlocked;	// IMP=0x00000001000c9ab4
- (void)keybagIsLocking;	// IMP=0x00000001000c9a80
- (id)initWithEngine:(id)arg1;	// IMP=0x00000001000c9a70
- (id)initWithSettingsContext:(id)arg1;	// IMP=0x00000001000c9a60
- (id)initWithSettingsContext:(id)arg1 serviceManager:(id)arg2;	// IMP=0x00000001000c98dc

@end

