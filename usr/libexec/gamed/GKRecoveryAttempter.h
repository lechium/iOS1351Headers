//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKRecoveryAttempter : NSObject
{
    CDUnknownBlockType _attemptRecovery;	// 8 = 0x8
}

+ (id)recoveryAttempterUsingHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100092c7c
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;	// IMP=0x0000000100092d58
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;	// IMP=0x0000000100092d08
- (void)dealloc;	// IMP=0x0000000100092cc0

@end

