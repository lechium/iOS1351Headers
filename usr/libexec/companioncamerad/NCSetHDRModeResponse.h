//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface NCSetHDRModeResponse : PBCodable <NSCopying>
{
    int _hdrMode;	// 8 = 0x8
    CDStruct_274c969d _has;	// 12 = 0xc
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000010001a6b0
- (unsigned long long)hash;	// IMP=0x000000010001a67c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001a5d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001a564
- (void)copyTo:(id)arg1;	// IMP=0x000000010001a534
- (void)writeTo:(id)arg1;	// IMP=0x000000010001a508
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010001a500
- (id)dictionaryRepresentation;	// IMP=0x000000010001a1f0
- (id)description;	// IMP=0x000000010001a13c
- (int)StringAsHdrMode:(id)arg1;	// IMP=0x000000010001a09c
- (id)hdrModeAsString:(int)arg1;	// IMP=0x000000010001a024
@property(nonatomic) _Bool hasHdrMode;
@property(nonatomic) int hdrMode; // @synthesize hdrMode=_hdrMode;

@end

