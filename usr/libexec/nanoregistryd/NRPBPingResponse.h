//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface NRPBPingResponse : PBCodable <NSCopying>
{
    double _responseDate;	// 8 = 0x8
    NSData *_payload;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010009e7a8
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) double responseDate; // @synthesize responseDate=_responseDate;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010009e734
- (unsigned long long)hash;	// IMP=0x000000010009e6a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010009e5f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010009e564
- (void)copyTo:(id)arg1;	// IMP=0x000000010009e52c
- (void)writeTo:(id)arg1;	// IMP=0x000000010009e4d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010009e4c8
- (id)dictionaryRepresentation;	// IMP=0x000000010009e210
- (id)description;	// IMP=0x000000010009e15c
@property(readonly, nonatomic) _Bool hasPayload;

@end
