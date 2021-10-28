//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKKSRateLimiter : NSObject <NSSecureCoding>
{
    NSDictionary *_config;	// 8 = 0x8
    NSMutableDictionary *_buckets;	// 16 = 0x10
    NSDate *_overloadUntil;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100031bb0
- (void).cxx_destruct;	// IMP=0x0000000100031aa0
@property(retain) NSDate *overloadUntil; // @synthesize overloadUntil=_overloadUntil;
@property(retain) NSMutableDictionary *buckets; // @synthesize buckets=_buckets;
@property(retain) NSDictionary *config; // @synthesize config=_config;
- (id)topOffendingAccessGroups:(unsigned long long)arg1;	// IMP=0x0000000100031794
- (id)diagnostics;	// IMP=0x000000010003147c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100031404
- (void)trim:(id)arg1;	// IMP=0x00000001000310b8
- (void)reset;	// IMP=0x0000000100031060
- (unsigned long long)stateSize;	// IMP=0x0000000100031014
- (int)judge:(id)arg1 at:(id)arg2 limitTime:(id *)arg3;	// IMP=0x0000000100030a70
- (id)consumeTokenFromBucket:(id)arg1 type:(int)arg2 at:(id)arg3;	// IMP=0x0000000100030868
- (int)capacity:(int)arg1;	// IMP=0x0000000100030784
- (int)rate:(int)arg1;	// IMP=0x00000001000306a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100030478
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002ff9c
- (id)init;	// IMP=0x000000010002ff8c

@end
