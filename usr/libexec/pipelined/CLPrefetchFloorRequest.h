//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface CLPrefetchFloorRequest : NSObject <NSSecureCoding>
{
    _Bool _hasCompleteFloor;	// 8 = 0x8
    _Bool _allowCellularDownload;	// 9 = 0x9
    NSString *_floorUuid;	// 16 = 0x10
    NSString *_venueUuid;	// 24 = 0x18
    NSDate *_relevancy;	// 32 = 0x20
    long long _locationContext;	// 40 = 0x28
    long long _priority;	// 48 = 0x30
}

+ (id)prefetchRequestForFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 locationContext:(long long)arg4;	// IMP=0x0000000100139c40
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100139c38
- (void).cxx_destruct;	// IMP=0x000000010013a7b0
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long locationContext; // @synthesize locationContext=_locationContext;
@property(nonatomic) _Bool allowCellularDownload; // @synthesize allowCellularDownload=_allowCellularDownload;
@property(nonatomic) _Bool hasCompleteFloor; // @synthesize hasCompleteFloor=_hasCompleteFloor;
@property(retain, nonatomic) NSDate *relevancy; // @synthesize relevancy=_relevancy;
@property(retain, nonatomic) NSString *venueUuid; // @synthesize venueUuid=_venueUuid;
@property(retain, nonatomic) NSString *floorUuid; // @synthesize floorUuid=_floorUuid;
- (void)setFloorUid:(id)arg1;	// IMP=0x000000010013a728
- (id)floorUid;	// IMP=0x000000010013a720
- (id)description;	// IMP=0x000000010013a718
- (unsigned long long)hash;	// IMP=0x000000010013a708
- (_Bool)isEqualToRequest:(id)arg1;	// IMP=0x000000010013a684
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010013a5ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010013a4bc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010013a280
- (id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 hasCompleteFloor:(_Bool)arg4 allowCellularDownload:(_Bool)arg5 locationContext:(long long)arg6 ranking:(long long)arg7;	// IMP=0x000000010013a14c
- (id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 hasCompleteFloor:(_Bool)arg4 allowCellularDownload:(_Bool)arg5 locationContext:(long long)arg6;	// IMP=0x000000010013a03c
- (id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 hasCompleteFloor:(_Bool)arg4 allowCellularDownload:(_Bool)arg5 locationContext:(long long)arg6 priority:(long long)arg7;	// IMP=0x0000000100139f70
- (id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 locationContext:(long long)arg4 ranking:(long long)arg5;	// IMP=0x0000000100139eb0
- (id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 locationContext:(long long)arg4 priority:(long long)arg5;	// IMP=0x0000000100139df0
- (id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 locationContext:(long long)arg4;	// IMP=0x0000000100139d40
- (id)init;	// IMP=0x0000000100139d00

@end

