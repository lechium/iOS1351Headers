//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface PDDPDate : PBCodable <NSCopying>
{
    double _time;	// 8 = 0x8
    struct {
        unsigned int time:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) double time; // @synthesize time=_time;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000b7078
- (unsigned long long)hash;	// IMP=0x00000001000b6ffc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b6f50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b6ee4
- (void)copyTo:(id)arg1;	// IMP=0x00000001000b6eb4
- (void)writeTo:(id)arg1;	// IMP=0x00000001000b6e88
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000b6e80
- (id)dictionaryRepresentation;	// IMP=0x00000001000b6c04
- (id)description;	// IMP=0x00000001000b6b50
@property(nonatomic) _Bool hasTime;

@end

