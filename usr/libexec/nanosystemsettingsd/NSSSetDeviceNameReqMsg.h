//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface NSSSetDeviceNameReqMsg : PBCodable <NSCopying>
{
    NSString *_name;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010002cbcc
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010002cb88
- (unsigned long long)hash;	// IMP=0x000000010002cb70
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002cad0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002ca54
- (void)copyTo:(id)arg1;	// IMP=0x000000010002ca34
- (void)writeTo:(id)arg1;	// IMP=0x000000010002ca1c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010002ca14
- (id)dictionaryRepresentation;	// IMP=0x000000010002c818
- (id)description;	// IMP=0x000000010002c764

@end
