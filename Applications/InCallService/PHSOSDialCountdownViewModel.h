//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PHCountdownViewModel-Protocol.h"
#import "PHSlidingViewModel-Protocol.h"

@class NSString;

@interface PHSOSDialCountdownViewModel : NSObject <PHCountdownViewModel, PHSlidingViewModel>
{
}

@property(readonly) _Bool playsSound;
@property(readonly) double countdownTickDuration;
- (id)countdownString:(unsigned long long)arg1;	// IMP=0x000000010004035c
@property(readonly) unsigned long long countdown;
@property(readonly) NSString *titleString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

