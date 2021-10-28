//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface PDDPPublishClassResponse : PBCodable <NSCopying>
{
    NSMutableArray *_payloads;	// 8 = 0x8
}

+ (Class)payloadType;	// IMP=0x000000010013fb08
- (void).cxx_destruct;	// IMP=0x000000010014051c
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001403d0
- (unsigned long long)hash;	// IMP=0x00000001001403b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100140318
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001401a0
- (void)copyTo:(id)arg1;	// IMP=0x00000001001400cc
- (void)writeTo:(id)arg1;	// IMP=0x000000010013ffa0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010013fdb4
- (id)dictionaryRepresentation;	// IMP=0x000000010013fbc8
- (id)description;	// IMP=0x000000010013fb14
- (id)payloadAtIndex:(unsigned long long)arg1;	// IMP=0x000000010013faf0
- (unsigned long long)payloadsCount;	// IMP=0x000000010013fad8
- (void)addPayload:(id)arg1;	// IMP=0x000000010013fa64
- (void)clearPayloads;	// IMP=0x000000010013fa4c

@end
