//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSKeychainWrapper : NSObject
{
}

+ (long long)idsKeychainWrapperDataProtectionClassFromIMDataProtectionClass:(unsigned int)arg1;	// IMP=0x00000001000954f0
+ (unsigned int)imDataProtectionClassFromDataProtectionClass:(long long)arg1;	// IMP=0x00000001000954d0
+ (id)descriptionForDataProtectionClass:(long long)arg1;	// IMP=0x000000010009542c
+ (id)shortDescriptionForDataProtectionClass:(long long)arg1;	// IMP=0x0000000100095388
+ (_Bool)isInteractionNotAllowedError:(id)arg1;	// IMP=0x0000000100095314
+ (_Bool)isUpgradePendingError:(id)arg1;	// IMP=0x00000001000952a0
+ (_Bool)isItemNotFoundError:(id)arg1;	// IMP=0x000000010009522c
+ (_Bool)_isKeychainError:(id)arg1 withOSStatus:(int)arg2;	// IMP=0x0000000100095020
- (long long)cloudCircleStatusError:(id *)arg1;	// IMP=0x0000000100097458
- (_Bool)isInCloudCircleWithError:(id *)arg1;	// IMP=0x0000000100097084
- (id)_keychainAccountFromBaseIdentifier:(id)arg1;	// IMP=0x0000000100097018
- (_Bool)removeDataForIdentifier:(id)arg1 dataProtectionClass:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000100096e90
- (void)saveData:(id)arg1 forIdentifier:(id)arg2 dataProtectionClass:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100096958
- (_Bool)saveData:(id)arg1 forIdentifier:(id)arg2 allowSync:(_Bool)arg3 allowBackup:(_Bool)arg4 dataProtectionClass:(long long)arg5 error:(id *)arg6;	// IMP=0x0000000100095d30
- (_Bool)saveData:(id)arg1 forIdentifier:(id)arg2 allowSync:(_Bool)arg3 dataProtectionClass:(long long)arg4 error:(id *)arg5;	// IMP=0x0000000100095c4c
- (id)dataForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100095588
- (id)dataForIdentifier:(id)arg1;	// IMP=0x0000000100095510

@end

