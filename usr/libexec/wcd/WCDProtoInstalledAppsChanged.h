//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface WCDProtoInstalledAppsChanged : PBCodable <NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010002aecc
- (unsigned long long)hash;	// IMP=0x000000010002ae98
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002adec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002ad80
- (void)copyTo:(id)arg1;	// IMP=0x000000010002ad50
- (void)writeTo:(id)arg1;	// IMP=0x000000010002ad24
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010002ad1c
- (id)dictionaryRepresentation;	// IMP=0x000000010002aa58
- (id)description;	// IMP=0x000000010002a9a4
@property(nonatomic) _Bool hasVersion;

@end

