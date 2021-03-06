//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface DRPrecisionMode : NSObject <NSCopying>
{
    long long _direction;	// 8 = 0x8
    long long _orientation;	// 16 = 0x10
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) double yAnchor;
@property(readonly, nonatomic) struct CGPoint touchOffset;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001166c
- (id)description;	// IMP=0x000000010001162c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000115a4

@end

