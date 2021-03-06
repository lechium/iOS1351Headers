//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@interface CPLCKAvailabilityRequest : PBRequest <NSCopying>
{
    int _feature;	// 8 = 0x8
    struct {
        unsigned int feature:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) int feature; // @synthesize feature=_feature;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000b3af0
- (unsigned long long)hash;	// IMP=0x00000001000b3abc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b3a10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b39a4
- (void)copyTo:(id)arg1;	// IMP=0x00000001000b3974
- (void)writeTo:(id)arg1;	// IMP=0x00000001000b3948
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000b3940
- (id)dictionaryRepresentation;	// IMP=0x00000001000b368c
- (id)description;	// IMP=0x00000001000b35d8
- (int)StringAsFeature:(id)arg1;	// IMP=0x00000001000b35d0
- (id)featureAsString:(int)arg1;	// IMP=0x00000001000b35c8
@property(nonatomic) _Bool hasFeature;

@end

