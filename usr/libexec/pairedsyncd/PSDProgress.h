//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface PSDProgress : NSObject <NSSecureCoding, NSCopying>
{
    float _activityProgress;	// 8 = 0x8
    unsigned long long _totalActivityCount;	// 16 = 0x10
    unsigned long long _completedActivityCount;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010001e5e0
@property(nonatomic) unsigned long long completedActivityCount; // @synthesize completedActivityCount=_completedActivityCount;
@property(nonatomic) unsigned long long totalActivityCount; // @synthesize totalActivityCount=_totalActivityCount;
@property(nonatomic) float activityProgress; // @synthesize activityProgress=_activityProgress;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001e738
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010001e6a4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001e5e8

@end

