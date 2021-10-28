//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSDate;

@interface ADDeviceSyncSnapshot : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _generation;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000338d4
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000100033dd8
- (void).cxx_destruct;	// IMP=0x0000000100033b38
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100033a54
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000338dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000338d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003378c
- (unsigned long long)hash;	// IMP=0x0000000100033704
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000001000334c8
- (id)description;	// IMP=0x00000001000334b8
- (id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 items:(id)arg3;	// IMP=0x00000001000333f0
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000100033e58

@end
