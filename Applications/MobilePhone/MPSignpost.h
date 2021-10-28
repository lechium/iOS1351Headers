//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPSignpost : NSObject
{
    _Bool _signpostIntervalDidBegin;	// 8 = 0x8
    double _keypadToContactsSwitchStartTime;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010007348c
+ (id)keypadToContactsSwitchLog;	// IMP=0x0000000100073418
@property(nonatomic) double keypadToContactsSwitchStartTime; // @synthesize keypadToContactsSwitchStartTime=_keypadToContactsSwitchStartTime;
@property(nonatomic) _Bool signpostIntervalDidBegin; // @synthesize signpostIntervalDidBegin=_signpostIntervalDidBegin;
- (void)reportKeytabToContactsTransistionEvent:(double)arg1;	// IMP=0x000000010007381c
- (void)contactsTabViewAppeared;	// IMP=0x00000001000736c0
- (void)keypadTabSwitchStarted;	// IMP=0x0000000100073564
- (id)init;	// IMP=0x0000000100073528

@end
