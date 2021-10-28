//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@interface NCSetFocusPointRequest : PBRequest <NSCopying>
{
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _points;	// 8 = 0x8
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000010001cddc
- (unsigned long long)hash;	// IMP=0x000000010001cdcc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001cd58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001ccfc
- (void)copyTo:(id)arg1;	// IMP=0x000000010001cc48
- (void)writeTo:(id)arg1;	// IMP=0x000000010001cba8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010001cba0
- (id)dictionaryRepresentation;	// IMP=0x000000010001c8c8
- (id)description;	// IMP=0x000000010001c814
- (void)setPoints:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010001c7fc
- (float)pointAtIndex:(unsigned long long)arg1;	// IMP=0x000000010001c724
- (void)addPoint:(float)arg1;	// IMP=0x000000010001c714
- (void)clearPoints;	// IMP=0x000000010001c704
@property(readonly, nonatomic) float *points;
@property(readonly, nonatomic) unsigned long long pointsCount;
- (void)dealloc;	// IMP=0x000000010001c690

@end
