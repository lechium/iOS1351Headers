//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CDRecentServiceInfo : NSObject <NSSecureCoding, NSCopying>
{
    struct {
        struct {
            double timestamp;
            unsigned long long amount;
        } urgencies[4];
        unsigned long long non_purgeable_amount;
        unsigned char data[0];
    } recentinfo;	// 8 = 0x8
    NSDictionary *_itemizedNonPurgeable;	// 80 = 0x50
}

+ (id)CDRecentServiceInfo:(id)arg1 atUrgency:(int)arg2 withTimestamp:(double)arg3 nonPurgeableAmount:(id)arg4;	// IMP=0x000000010002c898
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010002c6c8
- (void).cxx_destruct;	// IMP=0x000000010002d238
@property(retain, nonatomic) NSDictionary *itemizedNonPurgeable; // @synthesize itemizedNonPurgeable=_itemizedNonPurgeable;
- (id)description;	// IMP=0x000000010002d0d0
- (void)log;	// IMP=0x000000010002cf98
- (void)invalidate;	// IMP=0x000000010002cf78
- (_Bool)isEmpty;	// IMP=0x000000010002cf44
- (_Bool)updateAmount:(id)arg1 atUrgency:(int)arg2 withTimestamp:(double)arg3 nonPurgeableAmount:(id)arg4;	// IMP=0x000000010002cde4
- (id)nonPurgeableAmount;	// IMP=0x000000010002cdc8
- (id)amountAtUrgency:(int)arg1;	// IMP=0x000000010002cd64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002cd14
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002cc9c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002caf8
- (id)serialize;	// IMP=0x000000010002c9a0
- (_Bool)validate:(double)arg1 atUrgency:(int)arg2;	// IMP=0x000000010002c928
- (id)initWithAmount:(id)arg1 atUrgency:(int)arg2 withTimestamp:(double)arg3 nonPurgeableAmount:(id)arg4;	// IMP=0x000000010002c6d0

@end

