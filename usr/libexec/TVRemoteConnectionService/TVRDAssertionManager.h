//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, SBSWakeToRemoteAlertAssertion;

@interface TVRDAssertionManager : NSObject
{
    SBSWakeToRemoteAlertAssertion *_assertion;	// 8 = 0x8
    NSTimer *_expirationTimer;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010000b6fc
- (void).cxx_destruct;	// IMP=0x000000010000bca0
@property(retain, nonatomic) NSTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(retain, nonatomic) SBSWakeToRemoteAlertAssertion *assertion; // @synthesize assertion=_assertion;
- (void)_invalidateExpirationTimer;	// IMP=0x000000010000bc34
- (void)_createExpirationTimer;	// IMP=0x000000010000ba6c
- (void)releaseLockScreenAssertion;	// IMP=0x000000010000ba28
- (void)acquireLockScreenAssertion;	// IMP=0x000000010000b7c4
- (void)dealloc;	// IMP=0x000000010000b768

@end

