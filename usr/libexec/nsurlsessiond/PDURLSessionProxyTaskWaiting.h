//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyTaskWaiting : PBCodable <NSCopying>
{
    unsigned int _reason;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    struct {
        unsigned int reason:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000405fc
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100040538
- (unsigned long long)hash;	// IMP=0x00000001000404d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000403f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010004034c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000402d4
- (void)writeTo:(id)arg1;	// IMP=0x0000000100040264
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003ffc4
- (id)dictionaryRepresentation;	// IMP=0x000000010003fed4
- (id)description;	// IMP=0x000000010003fe20
@property(nonatomic) _Bool hasReason;
@property(readonly, nonatomic) _Bool hasTask;

@end

