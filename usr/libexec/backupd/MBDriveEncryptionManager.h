//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MBDriveSettingsContext;

@interface MBDriveEncryptionManager : NSObject
{
    MBDriveSettingsContext *_settingsContext;	// 8 = 0x8
}

+ (id)encryptionManagerWithSettingsContext:(id)arg1;	// IMP=0x00000001000218dc
@property(readonly, nonatomic) MBDriveSettingsContext *settingsContext; // @synthesize settingsContext=_settingsContext;
- (_Bool)setWillEncryptInLockdown:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000100022e4c
- (_Bool)makeLockdownAndKeychainConsistentWithError:(id *)arg1;	// IMP=0x0000000100022d38
- (_Bool)setPasswordInKeychain:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100022c68
- (_Bool)changePasswordFrom:(id)arg1 toPassword:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100021be8
- (_Bool)_changeBackupKeyBagPasswordInProperties:(id)arg1 fromPassword:(id)arg2 toPassword:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000219b4
- (void)dealloc;	// IMP=0x000000010002196c
- (id)initWithSettingsContext:(id)arg1;	// IMP=0x0000000100021914

@end

