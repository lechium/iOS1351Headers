//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyOpenBodyStream : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100045914
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010004588c
- (unsigned long long)hash;	// IMP=0x0000000100045874
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000457d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100045758
- (void)copyTo:(id)arg1;	// IMP=0x0000000100045730
- (void)writeTo:(id)arg1;	// IMP=0x0000000100045710
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100045528
- (id)dictionaryRepresentation;	// IMP=0x000000010004549c
- (id)description;	// IMP=0x00000001000453e8
@property(readonly, nonatomic) _Bool hasTask;

@end

