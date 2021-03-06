//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface AMPMusicArtistContent : PBCodable <NSCopying>
{
    long long _adamId;	// 8 = 0x8
    NSMutableArray *_catalogContents;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    struct {
        unsigned int adamId:1;
    } _has;	// 32 = 0x20
}

+ (Class)catalogContentType;	// IMP=0x0000000100078054
- (void).cxx_destruct;	// IMP=0x0000000100078e34
@property(retain, nonatomic) NSMutableArray *catalogContents; // @synthesize catalogContents=_catalogContents;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long adamId; // @synthesize adamId=_adamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100078c54
- (unsigned long long)hash;	// IMP=0x0000000100078bc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100078abc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000788f0
- (void)copyTo:(id)arg1;	// IMP=0x00000001000787d0
- (void)writeTo:(id)arg1;	// IMP=0x0000000100078660
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100078658
- (id)dictionaryRepresentation;	// IMP=0x0000000100078114
- (id)description;	// IMP=0x0000000100078060
- (id)catalogContentAtIndex:(unsigned long long)arg1;	// IMP=0x000000010007803c
- (unsigned long long)catalogContentsCount;	// IMP=0x0000000100078024
- (void)addCatalogContent:(id)arg1;	// IMP=0x0000000100077fb0
- (void)clearCatalogContents;	// IMP=0x0000000100077f98
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasAdamId;

@end

