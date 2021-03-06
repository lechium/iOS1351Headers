//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface UtraFreqInfo : PBCodable <NSCopying>
{
    unsigned int _prio;	// 8 = 0x8
    unsigned int _uarfcn;	// 12 = 0xc
    struct {
        unsigned int prio:1;
        unsigned int uarfcn:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int prio; // @synthesize prio=_prio;
@property(nonatomic) unsigned int uarfcn; // @synthesize uarfcn=_uarfcn;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100021cec
- (unsigned long long)hash;	// IMP=0x0000000100021c98
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100021bc4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100021b34
- (void)copyTo:(id)arg1;	// IMP=0x0000000100021ac0
- (void)writeTo:(id)arg1;	// IMP=0x0000000100021a44
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100021a3c
- (id)dictionaryRepresentation;	// IMP=0x0000000100021514
- (id)description;	// IMP=0x0000000100021460
@property(nonatomic) _Bool hasPrio;
@property(nonatomic) _Bool hasUarfcn;

@end

