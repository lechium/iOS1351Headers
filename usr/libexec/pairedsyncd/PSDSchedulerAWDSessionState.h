//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary;

@interface PSDSchedulerAWDSessionState : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_stateDictionary;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000bba4
- (void).cxx_destruct;	// IMP=0x000000010000ce14
- (void)enumerateActivityNamesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000ccf0
- (id)stateDictionaryForActivity:(id)arg1;	// IMP=0x000000010000cc64
- (double)durationForActivity:(id)arg1;	// IMP=0x000000010000cb38
- (id)retryCountForActivity:(id)arg1;	// IMP=0x000000010000cadc
- (id)syncTypeForActivity:(id)arg1;	// IMP=0x000000010000ca80
- (id)errorCodeForActivity:(id)arg1;	// IMP=0x000000010000ca24
- (_Bool)hasErrorCodeForActivity:(id)arg1;	// IMP=0x000000010000c9c0
- (_Bool)wasDropoutForActivity:(id)arg1;	// IMP=0x000000010000c944
- (_Bool)hasDurationForActivity:(id)arg1;	// IMP=0x000000010000c8e0
- (void)noteActivityDropout:(id)arg1;	// IMP=0x000000010000c7fc
- (void)noteActivityInterrupted:(id)arg1;	// IMP=0x000000010000c610
- (void)noteActivityFinished:(id)arg1;	// IMP=0x000000010000c424
- (void)_computeDurationForStateDictionary:(id)arg1 activity:(id)arg2;	// IMP=0x000000010000c204
- (void)noteActivityStarted:(id)arg1 syncSession:(id)arg2;	// IMP=0x000000010000be34
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000be14
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000bc10
- (id)init;	// IMP=0x000000010000bbac

@end
