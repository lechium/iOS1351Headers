//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface KeychainUtil : NSObject
{
}

+ (void)restoreKeychainUI;	// IMP=0x00000001000228d0
+ (void)hideKeychainUI;	// IMP=0x00000001000228cc
+ (void)removeKeychainItemForService:(id)arg1 withUsername:(id)arg2;	// IMP=0x0000000100022744
+ (void)setKeychainItemForService:(id)arg1 withUsername:(id)arg2 value:(id)arg3 accessibility:(long long)arg4;	// IMP=0x00000001000221b4
+ (int)keychainItemForService:(id)arg1 withUsername:(id)arg2 returningItem:(id *)arg3;	// IMP=0x0000000100021cd8
+ (void)migrateLegacyKeychainItems;	// IMP=0x0000000100021cd4

@end

