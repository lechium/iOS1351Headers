//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@interface SDUnlockStateRequest : PBRequest <NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100102044
- (unsigned long long)hash;	// IMP=0x0000000100102010
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100101f64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100101ef8
- (void)copyTo:(id)arg1;	// IMP=0x0000000100101ec8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100101e9c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100101e94
- (id)dictionaryRepresentation;	// IMP=0x0000000100101bcc
- (id)description;	// IMP=0x0000000100101b18
@property(nonatomic) _Bool hasVersion;

@end

