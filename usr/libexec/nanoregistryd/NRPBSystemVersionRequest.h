//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@interface NRPBSystemVersionRequest : PBRequest <NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000d6a40
- (unsigned long long)hash;	// IMP=0x00000001000d6a38
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000d69e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000d69ac
- (void)copyTo:(id)arg1;	// IMP=0x00000001000d69a8
- (void)writeTo:(id)arg1;	// IMP=0x00000001000d69a4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000d699c
- (id)dictionaryRepresentation;	// IMP=0x00000001000d6844
- (id)description;	// IMP=0x00000001000d6790

@end

