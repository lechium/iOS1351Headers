//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface SDAutoUnlockProxyTrigger : PBCodable <NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000ad1b0
- (unsigned long long)hash;	// IMP=0x00000001000ad17c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000ad0d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000ad064
- (void)copyTo:(id)arg1;	// IMP=0x00000001000ad034
- (void)writeTo:(id)arg1;	// IMP=0x00000001000ad008
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000ad000
- (id)dictionaryRepresentation;	// IMP=0x00000001000acd3c
- (id)description;	// IMP=0x00000001000acc88
@property(nonatomic) _Bool hasVersion;

@end
