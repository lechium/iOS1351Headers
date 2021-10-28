//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDCSDRelayDeviceRoute : PBCodable <NSCopying>
{
    int _type;	// 8 = 0x8
    _Bool _failed;	// 12 = 0xc
    struct {
        unsigned int type:1;
        unsigned int failed:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool failed; // @synthesize failed=_failed;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000b8a98
- (unsigned long long)hash;	// IMP=0x00000001000b8a44
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b8968
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b88d8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000b8864
- (void)writeTo:(id)arg1;	// IMP=0x00000001000b87e8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000b87e0
- (id)dictionaryRepresentation;	// IMP=0x00000001000b837c
- (id)description;	// IMP=0x00000001000b82c8
@property(nonatomic) _Bool hasFailed;
- (int)StringAsType:(id)arg1;	// IMP=0x00000001000b8174
- (id)typeAsString:(int)arg1;	// IMP=0x00000001000b80cc
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end
