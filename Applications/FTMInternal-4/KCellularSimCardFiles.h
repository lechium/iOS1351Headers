//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface KCellularSimCardFiles : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSMutableArray *_efLists;	// 16 = 0x10
    CDStruct_b5306035 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100028a98
@property(retain, nonatomic) NSMutableArray *efLists; // @synthesize efLists=_efLists;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000288fc
- (unsigned long long)hash;	// IMP=0x0000000100028898
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000287c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002861c
- (void)copyTo:(id)arg1;	// IMP=0x000000010002851c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000283c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000283c0
- (id)dictionaryRepresentation;	// IMP=0x0000000100027d8c
- (id)description;	// IMP=0x0000000100027cd8
- (id)efListAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100027cc0
- (unsigned long long)efListsCount;	// IMP=0x0000000100027ca8
- (void)addEfList:(id)arg1;	// IMP=0x0000000100027c34
- (void)clearEfLists;	// IMP=0x0000000100027c1c
@property(nonatomic) _Bool hasTimestamp;

@end

