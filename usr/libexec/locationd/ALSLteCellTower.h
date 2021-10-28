//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation;

@interface ALSLteCellTower : PBCodable
{
    int _cellID;	// 8 = 0x8
    ALSLocation *_location;	// 16 = 0x10
    int _mcc;	// 24 = 0x18
    int _mnc;	// 28 = 0x1c
    int _pid;	// 32 = 0x20
    int _tacID;	// 36 = 0x24
    int _uarfcn;	// 40 = 0x28
    struct {
        unsigned int cellID:1;
        unsigned int mcc:1;
        unsigned int mnc:1;
        unsigned int pid:1;
        unsigned int tacID:1;
        unsigned int uarfcn:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) int uarfcn; // @synthesize uarfcn=_uarfcn;
@property(retain, nonatomic) ALSLocation *location; // @synthesize location=_location;
@property(nonatomic) int tacID; // @synthesize tacID=_tacID;
@property(nonatomic) int cellID; // @synthesize cellID=_cellID;
@property(nonatomic) int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
- (unsigned long long)hash;	// IMP=0x0000000100780424
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010078029c
- (void)copyTo:(id)arg1;	// IMP=0x00000001007800f0
- (void)writeTo:(id)arg1;	// IMP=0x000000010077ff58
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010077ff50
- (id)dictionaryRepresentation;	// IMP=0x000000010077f768
- (id)description;	// IMP=0x000000010077f6e8
@property(nonatomic) _Bool hasPid;
@property(nonatomic) _Bool hasUarfcn;
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasTacID;
@property(nonatomic) _Bool hasCellID;
@property(nonatomic) _Bool hasMnc;
@property(nonatomic) _Bool hasMcc;
- (void)dealloc;	// IMP=0x000000010077f488

@end
