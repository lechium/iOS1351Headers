//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface TRANSITPbTransitMac : PBCodable <NSCopying>
{
    unsigned long long _mac;	// 8 = 0x8
    struct {
        unsigned int mac:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long mac; // @synthesize mac=_mac;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001006d735c
- (unsigned long long)hash;	// IMP=0x00000001006d7328
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001006d72a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001006d723c
- (void)copyTo:(id)arg1;	// IMP=0x00000001006d720c
- (void)writeTo:(id)arg1;	// IMP=0x00000001006d71e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001006d71d8
- (id)dictionaryRepresentation;	// IMP=0x00000001006d6f30
- (id)description;	// IMP=0x00000001006d6eb0
@property(nonatomic) _Bool hasMac;

@end

