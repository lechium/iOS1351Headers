//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKeyBag, MBService, MBServiceCache, MBServiceSettingsContext, NSData;

@interface MBServiceEncryptionManager : NSObject
{
    MBServiceSettingsContext *_settingsContext;	// 8 = 0x8
    MBService *_service;	// 16 = 0x10
    MBServiceCache *_cache;	// 24 = 0x18
    _Bool _suppressAuthorization;	// 32 = 0x20
    NSData *_keybagUUID;	// 40 = 0x28
}

@property(nonatomic) _Bool suppressAuthorization; // @synthesize suppressAuthorization=_suppressAuthorization;
- (void)keybagIsUnlocked;	// IMP=0x00000001001ad0bc
- (void)_exportKeychain;	// IMP=0x00000001001acfa4
- (void)_findMissingEncryptionKeys;	// IMP=0x00000001001aca58
- (void)keybagIsLocking;	// IMP=0x00000001001aca24
- (_Bool)removeRestoreKeyBagsWithError:(id *)arg1;	// IMP=0x00000001001ac920
- (_Bool)saveRestoreKeyBagDatasByID:(id)arg1 secret:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001ac5cc
- (id)loadRestoreKeyBagsByIDWithError:(id *)arg1;	// IMP=0x00000001001ac1fc
- (_Bool)rollKeyBagWithKeyBagID:(unsigned int *)arg1 forEngine:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001ab578
- (_Bool)tearDownBackupWithError:(id *)arg1;	// IMP=0x00000001001ab304
- (_Bool)setupBackupWithPasscode:(id)arg1 userInitiated:(_Bool)arg2 keybagID:(unsigned int *)arg3 error:(id *)arg4;	// IMP=0x00000001001a9ff4
- (_Bool)_registerKeyBag:(id)arg1 withID:(unsigned int)arg2 passcode:(id)arg3 error:(id *)arg4;	// IMP=0x00000001001a9a1c
- (id)keysetForBackupUDID:(id)arg1 lastModified:(long long *)arg2 userInitiated:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000001001a9a08
- (id)keysetForBackupUDID:(id)arg1 lastModified:(long long *)arg2 userInitiated:(_Bool)arg3 willVerifyCredentialsCallback:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x00000001001a9530
@property(readonly, nonatomic) NSData *keybagUUID;
@property(readonly, nonatomic) MBKeyBag *keybag;
- (id)keybagPath;	// IMP=0x00000001001a942c
- (void)dealloc;	// IMP=0x00000001001a93cc
- (id)initWithEngine:(id)arg1;	// IMP=0x00000001001a9338
- (id)initWithSettingsContext:(id)arg1;	// IMP=0x00000001001a9228

@end

