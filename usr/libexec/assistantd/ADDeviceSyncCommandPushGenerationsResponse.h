//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface ADDeviceSyncCommandPushGenerationsResponse : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100040d8c
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000100040e6c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100040da0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100040d94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100040d88
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100040d54
- (unsigned long long)hash;	// IMP=0x0000000100040d20
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000100040cec
- (id)description;	// IMP=0x0000000100040cdc
- (id)init;	// IMP=0x0000000100040ca8
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000100040eec

@end

