//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface TRANSITPbRegionPreloadTile : PBCodable <NSCopying>
{
    unsigned long long _secKey;	// 8 = 0x8
    unsigned int _tileType;	// 16 = 0x10
    unsigned int _tileX;	// 20 = 0x14
    unsigned int _tileY;	// 24 = 0x18
    _Bool _isAllowOverCellular;	// 28 = 0x1c
    struct {
        unsigned int secKey:1;
        unsigned int tileType:1;
        unsigned int tileX:1;
        unsigned int tileY:1;
        unsigned int isAllowOverCellular:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) _Bool isAllowOverCellular; // @synthesize isAllowOverCellular=_isAllowOverCellular;
@property(nonatomic) unsigned int tileY; // @synthesize tileY=_tileY;
@property(nonatomic) unsigned int tileX; // @synthesize tileX=_tileX;
@property(nonatomic) unsigned int tileType; // @synthesize tileType=_tileType;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010011d1cc
- (unsigned long long)hash;	// IMP=0x000000010011d118
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010011cff8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010011cee8
- (void)copyTo:(id)arg1;	// IMP=0x000000010011ce14
- (void)writeTo:(id)arg1;	// IMP=0x000000010011cd28
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010011cd20
- (id)dictionaryRepresentation;	// IMP=0x000000010011c698
- (id)description;	// IMP=0x000000010011c618
@property(nonatomic) _Bool hasSecKey;
@property(nonatomic) unsigned long long secKey; // @synthesize secKey=_secKey;
@property(nonatomic) _Bool hasIsAllowOverCellular;
@property(nonatomic) _Bool hasTileY;
@property(nonatomic) _Bool hasTileX;
@property(nonatomic) _Bool hasTileType;

@end

