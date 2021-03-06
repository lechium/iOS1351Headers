//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface SYDStoreID : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100017c48
- (void).cxx_destruct;	// IMP=0x0000000100017da0
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100017d0c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100017c50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100017bb8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100017aa8
- (unsigned long long)hash;	// IMP=0x0000000100017a3c
- (id)description;	// IMP=0x0000000100017988
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2;	// IMP=0x0000000100017828

@end

