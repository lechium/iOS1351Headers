//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDICSSOSOperationDuration : PBCodable <NSCopying>
{
    unsigned long long _operationDurationMs;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    unsigned int _operationType;	// 24 = 0x18
    struct {
        unsigned int operationDurationMs:1;
        unsigned int timestamp:1;
        unsigned int operationType:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) unsigned int operationType; // @synthesize operationType=_operationType;
@property(nonatomic) unsigned long long operationDurationMs; // @synthesize operationDurationMs=_operationDurationMs;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100053ea4
- (unsigned long long)hash;	// IMP=0x0000000100053e30
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100053d34
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100053c74
- (void)copyTo:(id)arg1;	// IMP=0x0000000100053bd0
- (void)writeTo:(id)arg1;	// IMP=0x0000000100053b28
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100053b20
- (id)dictionaryRepresentation;	// IMP=0x0000000100053638
- (id)description;	// IMP=0x0000000100053584
@property(nonatomic) _Bool hasOperationType;
@property(nonatomic) _Bool hasOperationDurationMs;
@property(nonatomic) _Bool hasTimestamp;

@end

