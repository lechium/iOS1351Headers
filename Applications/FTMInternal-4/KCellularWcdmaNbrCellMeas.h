//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface KCellularWcdmaNbrCellMeas : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSMutableArray *_measGsmResults;	// 16 = 0x10
    NSMutableArray *_measLteResults;	// 24 = 0x18
    NSMutableArray *_measUtraResults;	// 32 = 0x20
    CDStruct_b5306035 _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100025680
@property(retain, nonatomic) NSMutableArray *measLteResults; // @synthesize measLteResults=_measLteResults;
@property(retain, nonatomic) NSMutableArray *measGsmResults; // @synthesize measGsmResults=_measGsmResults;
@property(retain, nonatomic) NSMutableArray *measUtraResults; // @synthesize measUtraResults=_measUtraResults;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010002533c
- (unsigned long long)hash;	// IMP=0x0000000100025298
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100025160
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100024e08
- (void)copyTo:(id)arg1;	// IMP=0x0000000100024be8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100024944
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010002493c
- (id)dictionaryRepresentation;	// IMP=0x0000000100023fa8
- (id)description;	// IMP=0x0000000100023ef4
- (id)measLteResultAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100023edc
- (unsigned long long)measLteResultsCount;	// IMP=0x0000000100023ec4
- (void)addMeasLteResult:(id)arg1;	// IMP=0x0000000100023e50
- (void)clearMeasLteResults;	// IMP=0x0000000100023e38
- (id)measGsmResultAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100023e20
- (unsigned long long)measGsmResultsCount;	// IMP=0x0000000100023e08
- (void)addMeasGsmResult:(id)arg1;	// IMP=0x0000000100023d94
- (void)clearMeasGsmResults;	// IMP=0x0000000100023d7c
- (id)measUtraResultAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100023d64
- (unsigned long long)measUtraResultsCount;	// IMP=0x0000000100023d4c
- (void)addMeasUtraResult:(id)arg1;	// IMP=0x0000000100023cd8
- (void)clearMeasUtraResults;	// IMP=0x0000000100023cc0
@property(nonatomic) _Bool hasTimestamp;

@end
