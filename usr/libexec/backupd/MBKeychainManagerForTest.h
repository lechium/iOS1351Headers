//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKeychainManagerInterface-Protocol.h"

@class NSString;

@interface MBKeychainManagerForTest : NSObject <MBKeychainManagerInterface>
{
}

+ (_Bool)removeKeybagSecretsWithError:(id *)arg1;	// IMP=0x0000000100192ec8
+ (_Bool)updateKeybagSecret:(id)arg1 forUUID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100192e28
+ (_Bool)addKeybagSecret:(id)arg1 forUUID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100192d88
+ (id)fetchKeybagSecretForUUID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100192d74
+ (_Bool)removeLocalBackupPassword:(id *)arg1;	// IMP=0x0000000100192d50
+ (_Bool)updateLocalBackupPassword:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100192d2c
+ (_Bool)addLocalBackupPassword:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100192d08
+ (id)fetchLocalBackupPassword:(id *)arg1;	// IMP=0x0000000100192cfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

