//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, PDURLSessionProxyTaskMessage, __NSCFURLSessionTaskInfo;

@interface PDURLSessionProxyDataTaskWithRequestReply : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
    NSData *_taskInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000d9e8
@property(retain, nonatomic) NSData *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000d91c
- (unsigned long long)hash;	// IMP=0x000000010000d8c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000d7ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000d73c
- (void)copyTo:(id)arg1;	// IMP=0x000000010000d6d0
- (void)writeTo:(id)arg1;	// IMP=0x000000010000d66c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000d458
- (id)dictionaryRepresentation;	// IMP=0x000000010000d3a0
- (id)description;	// IMP=0x000000010000d2ec
@property(readonly, nonatomic) _Bool hasTaskInfo;
@property(readonly, nonatomic) _Bool hasTask;
@property(retain, setter=_setActualTaskInfo:) __NSCFURLSessionTaskInfo *_actualTaskInfo;

@end
