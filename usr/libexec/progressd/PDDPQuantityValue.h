//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface PDDPQuantityValue : PBCodable <NSCopying>
{
    double _value;	// 8 = 0x8
    struct {
        unsigned int value:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) double value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000b4598
- (unsigned long long)hash;	// IMP=0x00000001000b451c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b4470
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b4404
- (void)copyTo:(id)arg1;	// IMP=0x00000001000b43d4
- (void)writeTo:(id)arg1;	// IMP=0x00000001000b43a8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000b43a0
- (id)dictionaryRepresentation;	// IMP=0x00000001000b4124
- (id)description;	// IMP=0x00000001000b4070
@property(nonatomic) _Bool hasValue;

@end

