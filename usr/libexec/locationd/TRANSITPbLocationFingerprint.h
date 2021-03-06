//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface TRANSITPbLocationFingerprint : PBCodable <NSCopying>
{
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _macs;	// 8 = 0x8
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _modes;	// 32 = 0x20
    double _latitude;	// 56 = 0x38
    unsigned long long _locationId;	// 64 = 0x40
    double _longitude;	// 72 = 0x48
    struct {
        unsigned int latitude:1;
        unsigned int locationId:1;
        unsigned int longitude:1;
    } _has;	// 80 = 0x50
}

@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned long long locationId; // @synthesize locationId=_locationId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010058afc8
- (unsigned long long)hash;	// IMP=0x000000010058ae98
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010058ad9c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010058acac
- (void)copyTo:(id)arg1;	// IMP=0x000000010058ab08
- (void)writeTo:(id)arg1;	// IMP=0x000000010058a9f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010058a9ec
- (id)dictionaryRepresentation;	// IMP=0x000000010058a30c
- (id)description;	// IMP=0x000000010058a28c
- (void)setModes:(double *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010058a274
- (double)modesAtIndex:(unsigned long long)arg1;	// IMP=0x000000010058a1cc
- (void)addModes:(double)arg1;	// IMP=0x000000010058a1bc
- (void)clearModes;	// IMP=0x000000010058a1ac
@property(readonly, nonatomic) double *modes;
@property(readonly, nonatomic) unsigned long long modesCount;
- (void)setMacs:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010058a170
- (unsigned long long)macsAtIndex:(unsigned long long)arg1;	// IMP=0x000000010058a0c8
- (void)addMacs:(unsigned long long)arg1;	// IMP=0x000000010058a0b4
- (void)clearMacs;	// IMP=0x000000010058a0a4
@property(readonly, nonatomic) unsigned long long *macs;
@property(readonly, nonatomic) unsigned long long macsCount;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) _Bool hasLatitude;
@property(nonatomic) _Bool hasLocationId;
- (void)dealloc;	// IMP=0x0000000100589f24

@end

