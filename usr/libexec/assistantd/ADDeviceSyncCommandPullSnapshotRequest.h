//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface ADDeviceSyncCommandPullSnapshotRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_dataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010005b478
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000010005b6ec
- (void).cxx_destruct;	// IMP=0x000000010005b540
@property(readonly, copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010005b514
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010005b480
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005b474
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005b3b4
- (unsigned long long)hash;	// IMP=0x000000010005b3a4
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000010005b224
- (id)description;	// IMP=0x000000010005b214
- (id)initWithDataType:(id)arg1;	// IMP=0x000000010005b194
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000010005b76c

@end
