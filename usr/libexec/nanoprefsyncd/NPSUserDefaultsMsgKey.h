//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface NPSUserDefaultsMsgKey : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSData *_value;	// 24 = 0x18
    _Bool _twoWaySync;	// 32 = 0x20
    struct {
        unsigned int timestamp:1;
        unsigned int twoWaySync:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000010000349c
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool twoWaySync; // @synthesize twoWaySync=_twoWaySync;
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100003378
- (unsigned long long)hash;	// IMP=0x000000010000328c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100003154
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100003054
- (void)copyTo:(id)arg1;	// IMP=0x0000000100002fa0
- (void)writeTo:(id)arg1;	// IMP=0x0000000100002eec
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100002ee4
- (id)dictionaryRepresentation;	// IMP=0x0000000100002aa4
- (id)description;	// IMP=0x00000001000029f0
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasTwoWaySync;
@property(readonly, nonatomic) _Bool hasValue;

@end
