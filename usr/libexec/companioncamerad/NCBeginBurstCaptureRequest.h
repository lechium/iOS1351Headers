//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@interface NCBeginBurstCaptureRequest : PBRequest <NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100015134
- (unsigned long long)hash;	// IMP=0x000000010001512c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000150d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000150a0
- (void)copyTo:(id)arg1;	// IMP=0x000000010001509c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100015098
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100015090
- (id)dictionaryRepresentation;	// IMP=0x0000000100014f38
- (id)description;	// IMP=0x0000000100014e84

@end
