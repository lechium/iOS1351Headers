//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface CLUsageReportCoordinate : NSObject <NSSecureCoding>
{
    double _latitude;	// 8 = 0x8
    double _longitude;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010069a34c
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010069a3cc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010069a354
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;	// IMP=0x000000010069a2cc

@end

