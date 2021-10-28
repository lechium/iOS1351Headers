//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NFHostCardEmulationManager : NSObject
{
    NSMutableArray *_sessions;	// 8 = 0x8
    NSMutableArray *_apduLog;	// 16 = 0x10
    _Bool _cancelOutstandingActivity;	// 24 = 0x18
    _Bool _activityInProgress;	// 25 = 0x19
}

- (void)runHostCardEmulation:(id)arg1 paymentEnabled:(_Bool)arg2;	// IMP=0x000000010006d6d0
- (void)handleHostCardReaderDetected:(id)arg1 paymentEnabled:(_Bool)arg2;	// IMP=0x000000010006d478
- (void)clearAPDULog;	// IMP=0x000000010006d468
- (id)getAPDULog;	// IMP=0x000000010006d358
- (unsigned long long)count;	// IMP=0x000000010006d300
- (void)removeApplet:(id)arg1;	// IMP=0x000000010006d244
- (_Bool)containsApplet:(id)arg1;	// IMP=0x000000010006d1e4
- (void)addApplet:(id)arg1;	// IMP=0x000000010006d160
- (void)_logApdu:(id)arg1 direction:(id)arg2;	// IMP=0x000000010006d054
- (void)cancelOutstandingActivity;	// IMP=0x000000010006ce7c
- (_Bool)activityInProgress;	// IMP=0x000000010006ce74
- (void)dealloc;	// IMP=0x000000010006ce24
- (id)init;	// IMP=0x000000010006cdc0

@end
