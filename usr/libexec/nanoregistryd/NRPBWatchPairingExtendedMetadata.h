//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface NRPBWatchPairingExtendedMetadata : PBCodable <NSCopying>
{
    long long _pairingVersion;	// 8 = 0x8
    int _chipID;	// 16 = 0x10
    NSString *_productType;	// 24 = 0x18
    _Bool _isCellularEnabled;	// 32 = 0x20
    _Bool _postFailsafeObliteration;	// 33 = 0x21
    _Bool _supportsTokyoBayAquaLine;	// 34 = 0x22
    struct {
        unsigned int pairingVersion:1;
        unsigned int chipID:1;
        unsigned int isCellularEnabled:1;
        unsigned int postFailsafeObliteration:1;
        unsigned int supportsTokyoBayAquaLine:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000010007c964
@property(nonatomic) _Bool isCellularEnabled; // @synthesize isCellularEnabled=_isCellularEnabled;
@property(nonatomic) _Bool supportsTokyoBayAquaLine; // @synthesize supportsTokyoBayAquaLine=_supportsTokyoBayAquaLine;
@property(nonatomic) long long pairingVersion; // @synthesize pairingVersion=_pairingVersion;
@property(nonatomic) _Bool postFailsafeObliteration; // @synthesize postFailsafeObliteration=_postFailsafeObliteration;
@property(nonatomic) int chipID; // @synthesize chipID=_chipID;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010007c7d4
- (unsigned long long)hash;	// IMP=0x000000010007c6ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010007c558
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010007c40c
- (void)copyTo:(id)arg1;	// IMP=0x000000010007c2f0
- (void)writeTo:(id)arg1;	// IMP=0x000000010007c1e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010007c1dc
- (id)dictionaryRepresentation;	// IMP=0x000000010007ba80
- (id)description;	// IMP=0x000000010007b9cc
@property(nonatomic) _Bool hasIsCellularEnabled;
@property(nonatomic) _Bool hasSupportsTokyoBayAquaLine;
@property(nonatomic) _Bool hasPairingVersion;
@property(nonatomic) _Bool hasPostFailsafeObliteration;
@property(nonatomic) _Bool hasChipID;
@property(readonly, nonatomic) _Bool hasProductType;

@end
