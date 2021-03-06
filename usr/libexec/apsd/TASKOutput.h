//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class TASKEdgeDnsOutput;

@interface TASKOutput : PBCodable <NSCopying>
{
    TASKEdgeDnsOutput *_edgeDNS;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000690a4
@property(retain, nonatomic) TASKEdgeDnsOutput *edgeDNS; // @synthesize edgeDNS=_edgeDNS;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010006901c
- (unsigned long long)hash;	// IMP=0x0000000100069004
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100068f64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100068ee8
- (void)copyTo:(id)arg1;	// IMP=0x0000000100068ec0
- (void)writeTo:(id)arg1;	// IMP=0x0000000100068ea0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100068e98
- (id)dictionaryRepresentation;	// IMP=0x0000000100068c24
- (id)description;	// IMP=0x0000000100068b70
@property(readonly, nonatomic) _Bool hasEdgeDNS;

@end

