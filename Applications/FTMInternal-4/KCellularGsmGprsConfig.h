//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface KCellularGsmGprsConfig : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _accThr;	// 16 = 0x10
    unsigned int _cellBarAccess2;	// 20 = 0x14
    unsigned int _crHyst;	// 24 = 0x18
    unsigned int _nco;	// 28 = 0x1c
    unsigned int _nom;	// 32 = 0x20
    unsigned int _priorityClass;	// 36 = 0x24
    unsigned int _rac;	// 40 = 0x28
    _Bool _extUplTbfSupported;	// 44 = 0x2c
    _Bool _gprsSup;	// 45 = 0x2d
    _Bool _spPgCy;	// 46 = 0x2e
    struct {
        unsigned int timestamp:1;
        unsigned int accThr:1;
        unsigned int cellBarAccess2:1;
        unsigned int crHyst:1;
        unsigned int nco:1;
        unsigned int nom:1;
        unsigned int priorityClass:1;
        unsigned int rac:1;
        unsigned int extUplTbfSupported:1;
        unsigned int gprsSup:1;
        unsigned int spPgCy:1;
    } _has;	// 48 = 0x30
}

@property(nonatomic) unsigned int cellBarAccess2; // @synthesize cellBarAccess2=_cellBarAccess2;
@property(nonatomic) unsigned int priorityClass; // @synthesize priorityClass=_priorityClass;
@property(nonatomic) _Bool extUplTbfSupported; // @synthesize extUplTbfSupported=_extUplTbfSupported;
@property(nonatomic) unsigned int accThr; // @synthesize accThr=_accThr;
@property(nonatomic) unsigned int crHyst; // @synthesize crHyst=_crHyst;
@property(nonatomic) unsigned int nom; // @synthesize nom=_nom;
@property(nonatomic) unsigned int nco; // @synthesize nco=_nco;
@property(nonatomic) _Bool spPgCy; // @synthesize spPgCy=_spPgCy;
@property(nonatomic) unsigned int rac; // @synthesize rac=_rac;
@property(nonatomic) _Bool gprsSup; // @synthesize gprsSup=_gprsSup;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100008840
- (unsigned long long)hash;	// IMP=0x00000001000086cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100008490
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100008290
- (void)copyTo:(id)arg1;	// IMP=0x00000001000080ac
- (void)writeTo:(id)arg1;	// IMP=0x0000000100007ee4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100007edc
- (id)dictionaryRepresentation;	// IMP=0x0000000100007018
- (id)description;	// IMP=0x0000000100006f64
@property(nonatomic) _Bool hasCellBarAccess2;
@property(nonatomic) _Bool hasPriorityClass;
@property(nonatomic) _Bool hasExtUplTbfSupported;
@property(nonatomic) _Bool hasAccThr;
@property(nonatomic) _Bool hasCrHyst;
@property(nonatomic) _Bool hasNom;
@property(nonatomic) _Bool hasNco;
@property(nonatomic) _Bool hasSpPgCy;
@property(nonatomic) _Bool hasRac;
@property(nonatomic) _Bool hasGprsSup;
@property(nonatomic) _Bool hasTimestamp;

@end
