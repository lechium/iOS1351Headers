//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary;

@interface PSDSchedulerAggdSessionState : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_stateDictionary;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000135ec
- (void).cxx_destruct;	// IMP=0x0000000100013d3c
- (id)_keyForMilestone:(unsigned long long)arg1;	// IMP=0x0000000100013d18
- (id)stateDictionaryForActivity:(id)arg1;	// IMP=0x0000000100013c8c
- (double)durationForActivity:(id)arg1 milestone:(unsigned long long)arg2;	// IMP=0x0000000100013b90
- (_Bool)hasDurationForActivity:(id)arg1 milestone:(unsigned long long)arg2;	// IMP=0x0000000100013abc
- (void)noteActivityFinished:(id)arg1;	// IMP=0x00000001000139ec
- (void)noteActivityCompletedSending:(id)arg1;	// IMP=0x000000010001391c
- (void)noteActivityStarted:(id)arg1;	// IMP=0x000000010001387c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010001385c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100013658
- (id)init;	// IMP=0x00000001000135f4

@end
