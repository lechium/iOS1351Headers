//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface KCellularGsmScellInfo : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _arfcn;	// 16 = 0x10
    unsigned int _bsic;	// 20 = 0x14
    unsigned int _cellId;	// 24 = 0x18
    int _gsmBand;	// 28 = 0x1c
    unsigned int _lac;	// 32 = 0x20
    unsigned int _mcc;	// 36 = 0x24
    unsigned int _mnc;	// 40 = 0x28
    unsigned int _numMncDigits;	// 44 = 0x2c
    int _state;	// 48 = 0x30
    struct {
        unsigned int timestamp:1;
        unsigned int arfcn:1;
        unsigned int bsic:1;
        unsigned int cellId:1;
        unsigned int gsmBand:1;
        unsigned int lac:1;
        unsigned int mcc:1;
        unsigned int mnc:1;
        unsigned int numMncDigits:1;
        unsigned int state:1;
    } _has;	// 52 = 0x34
}

@property(nonatomic) unsigned int numMncDigits; // @synthesize numMncDigits=_numMncDigits;
@property(nonatomic) unsigned int bsic; // @synthesize bsic=_bsic;
@property(nonatomic) unsigned int arfcn; // @synthesize arfcn=_arfcn;
@property(nonatomic) unsigned int cellId; // @synthesize cellId=_cellId;
@property(nonatomic) unsigned int lac; // @synthesize lac=_lac;
@property(nonatomic) unsigned int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) unsigned int mcc; // @synthesize mcc=_mcc;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000b5e0
- (unsigned long long)hash;	// IMP=0x000000010000b48c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000b278
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000b0a0
- (void)copyTo:(id)arg1;	// IMP=0x000000010000aee4
- (void)writeTo:(id)arg1;	// IMP=0x000000010000ad40
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000ad38
- (id)dictionaryRepresentation;	// IMP=0x0000000100009b90
- (id)description;	// IMP=0x0000000100009adc
@property(nonatomic) _Bool hasNumMncDigits;
@property(nonatomic) _Bool hasState;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) _Bool hasBsic;
@property(nonatomic) _Bool hasArfcn;
@property(nonatomic) _Bool hasGsmBand;
@property(nonatomic) int gsmBand; // @synthesize gsmBand=_gsmBand;
@property(nonatomic) _Bool hasCellId;
@property(nonatomic) _Bool hasLac;
@property(nonatomic) _Bool hasMnc;
@property(nonatomic) _Bool hasMcc;
@property(nonatomic) _Bool hasTimestamp;

@end

