//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDICSSOSBiometricLockout : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    struct {
        unsigned int timestamp:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000ec3fc
- (unsigned long long)hash;	// IMP=0x00000001000ec3c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000ec31c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000ec2b0
- (void)copyTo:(id)arg1;	// IMP=0x00000001000ec280
- (void)writeTo:(id)arg1;	// IMP=0x00000001000ec254
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000ec24c
- (id)dictionaryRepresentation;	// IMP=0x00000001000ebf88
- (id)description;	// IMP=0x00000001000ebed4
@property(nonatomic) _Bool hasTimestamp;

@end

