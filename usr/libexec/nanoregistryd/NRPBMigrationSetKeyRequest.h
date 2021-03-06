//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface NRPBMigrationSetKeyRequest : PBRequest <NSCopying>
{
    NSData *_key;	// 8 = 0x8
    int _revision;	// 16 = 0x10
    struct {
        unsigned int revision:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000001000d3d8c
@property(nonatomic) int revision; // @synthesize revision=_revision;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000d3ce0
- (unsigned long long)hash;	// IMP=0x00000001000d3c78
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000d3b9c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000d3af4
- (void)copyTo:(id)arg1;	// IMP=0x00000001000d3a7c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000d3a0c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000d3a04
- (id)dictionaryRepresentation;	// IMP=0x00000001000d36e4
- (id)description;	// IMP=0x00000001000d3630
@property(nonatomic) _Bool hasRevision;
@property(readonly, nonatomic) _Bool hasKey;

@end

