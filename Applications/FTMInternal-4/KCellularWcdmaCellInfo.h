//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface KCellularWcdmaCellInfo : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _cellId;	// 16 = 0x10
    unsigned int _dlUarfcn;	// 20 = 0x14
    int _hspa;	// 24 = 0x18
    unsigned int _lac;	// 28 = 0x1c
    unsigned int _mcc;	// 32 = 0x20
    unsigned int _mnc;	// 36 = 0x24
    unsigned int _numMncDigits;	// 40 = 0x28
    unsigned int _psc;	// 44 = 0x2c
    int _wcdmaBand;	// 48 = 0x30
    struct {
        unsigned int timestamp:1;
        unsigned int cellId:1;
        unsigned int dlUarfcn:1;
        unsigned int hspa:1;
        unsigned int lac:1;
        unsigned int mcc:1;
        unsigned int mnc:1;
        unsigned int numMncDigits:1;
        unsigned int psc:1;
        unsigned int wcdmaBand:1;
    } _has;	// 52 = 0x34
}

@property(nonatomic) unsigned int numMncDigits; // @synthesize numMncDigits=_numMncDigits;
@property(nonatomic) unsigned int psc; // @synthesize psc=_psc;
@property(nonatomic) unsigned int dlUarfcn; // @synthesize dlUarfcn=_dlUarfcn;
@property(nonatomic) unsigned int cellId; // @synthesize cellId=_cellId;
@property(nonatomic) unsigned int lac; // @synthesize lac=_lac;
@property(nonatomic) unsigned int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) unsigned int mcc; // @synthesize mcc=_mcc;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010001f430
- (unsigned long long)hash;	// IMP=0x000000010001f2dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001f0c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001eef0
- (void)copyTo:(id)arg1;	// IMP=0x000000010001ed34
- (void)writeTo:(id)arg1;	// IMP=0x000000010001eb90
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010001eb88
- (id)dictionaryRepresentation;	// IMP=0x000000010001d9bc
- (id)description;	// IMP=0x000000010001d908
@property(nonatomic) _Bool hasNumMncDigits;
@property(nonatomic) _Bool hasPsc;
@property(nonatomic) _Bool hasDlUarfcn;
@property(nonatomic) _Bool hasHspa;
@property(nonatomic) int hspa; // @synthesize hspa=_hspa;
@property(nonatomic) _Bool hasWcdmaBand;
@property(nonatomic) int wcdmaBand; // @synthesize wcdmaBand=_wcdmaBand;
@property(nonatomic) _Bool hasCellId;
@property(nonatomic) _Bool hasLac;
@property(nonatomic) _Bool hasMnc;
@property(nonatomic) _Bool hasMcc;
@property(nonatomic) _Bool hasTimestamp;

@end

