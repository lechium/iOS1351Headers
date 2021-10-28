//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDCSDMomentsReport : PBCodable <NSCopying>
{
    double _meanRequestDuration;	// 8 = 0x8
    double _medianRequestDuration;	// 16 = 0x10
    unsigned long long _timestamp;	// 24 = 0x18
    int _availability;	// 32 = 0x20
    unsigned int _photoRequestFailureCount;	// 36 = 0x24
    unsigned int _photoRequestSuccessCount;	// 40 = 0x28
    struct {
        unsigned int meanRequestDuration:1;
        unsigned int medianRequestDuration:1;
        unsigned int timestamp:1;
        unsigned int availability:1;
        unsigned int photoRequestFailureCount:1;
        unsigned int photoRequestSuccessCount:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) double meanRequestDuration; // @synthesize meanRequestDuration=_meanRequestDuration;
@property(nonatomic) double medianRequestDuration; // @synthesize medianRequestDuration=_medianRequestDuration;
@property(nonatomic) unsigned int photoRequestFailureCount; // @synthesize photoRequestFailureCount=_photoRequestFailureCount;
@property(nonatomic) unsigned int photoRequestSuccessCount; // @synthesize photoRequestSuccessCount=_photoRequestSuccessCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010006571c
- (unsigned long long)hash;	// IMP=0x00000001000655b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100065440
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100065308
- (void)copyTo:(id)arg1;	// IMP=0x00000001000651ec
- (void)writeTo:(id)arg1;	// IMP=0x00000001000650d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000650d0
- (id)dictionaryRepresentation;	// IMP=0x000000010006492c
- (id)description;	// IMP=0x0000000100064878
@property(nonatomic) _Bool hasMeanRequestDuration;
@property(nonatomic) _Bool hasMedianRequestDuration;
@property(nonatomic) _Bool hasPhotoRequestFailureCount;
@property(nonatomic) _Bool hasPhotoRequestSuccessCount;
- (int)StringAsAvailability:(id)arg1;	// IMP=0x0000000100064668
- (id)availabilityAsString:(int)arg1;	// IMP=0x00000001000645d8
@property(nonatomic) _Bool hasAvailability;
@property(nonatomic) int availability; // @synthesize availability=_availability;
@property(nonatomic) _Bool hasTimestamp;

@end
