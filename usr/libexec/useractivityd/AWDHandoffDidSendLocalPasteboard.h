//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDHandoffDidSendLocalPasteboard : PBCodable <NSCopying>
{
    unsigned long long _clientWriteSize;	// 8 = 0x8
    unsigned long long _clientWriteSpeed;	// 16 = 0x10
    unsigned long long _clientWriteTime;	// 24 = 0x18
    long long _errorCode;	// 32 = 0x20
    unsigned long long _streamDataSize;	// 40 = 0x28
    unsigned long long _streamDataXferSpeed;	// 48 = 0x30
    unsigned long long _streamDataXferTime;	// 56 = 0x38
    unsigned long long _streamOpenDelay;	// 64 = 0x40
    unsigned long long _timestamp;	// 72 = 0x48
    unsigned long long _totalTime;	// 80 = 0x50
    _Bool _usedStreams;	// 88 = 0x58
    struct {
        unsigned int clientWriteSize:1;
        unsigned int clientWriteSpeed:1;
        unsigned int clientWriteTime:1;
        unsigned int errorCode:1;
        unsigned int streamDataSize:1;
        unsigned int streamDataXferSpeed:1;
        unsigned int streamDataXferTime:1;
        unsigned int streamOpenDelay:1;
        unsigned int timestamp:1;
        unsigned int totalTime:1;
        unsigned int usedStreams:1;
    } _has;	// 92 = 0x5c
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) unsigned long long streamDataXferSpeed; // @synthesize streamDataXferSpeed=_streamDataXferSpeed;
@property(nonatomic) unsigned long long streamDataXferTime; // @synthesize streamDataXferTime=_streamDataXferTime;
@property(nonatomic) unsigned long long streamDataSize; // @synthesize streamDataSize=_streamDataSize;
@property(nonatomic) unsigned long long streamOpenDelay; // @synthesize streamOpenDelay=_streamOpenDelay;
@property(nonatomic) _Bool usedStreams; // @synthesize usedStreams=_usedStreams;
@property(nonatomic) unsigned long long clientWriteSpeed; // @synthesize clientWriteSpeed=_clientWriteSpeed;
@property(nonatomic) unsigned long long clientWriteTime; // @synthesize clientWriteTime=_clientWriteTime;
@property(nonatomic) unsigned long long clientWriteSize; // @synthesize clientWriteSize=_clientWriteSize;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100005840
- (unsigned long long)hash;	// IMP=0x00000001000056cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100005488
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100005288
- (void)copyTo:(id)arg1;	// IMP=0x00000001000050a4
- (void)writeTo:(id)arg1;	// IMP=0x0000000100004edc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100004ed4
- (id)dictionaryRepresentation;	// IMP=0x00000001000041c4
- (id)description;	// IMP=0x0000000100004110
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasTotalTime;
@property(nonatomic) _Bool hasStreamDataXferSpeed;
@property(nonatomic) _Bool hasStreamDataXferTime;
@property(nonatomic) _Bool hasStreamDataSize;
@property(nonatomic) _Bool hasStreamOpenDelay;
@property(nonatomic) _Bool hasUsedStreams;
@property(nonatomic) _Bool hasClientWriteSpeed;
@property(nonatomic) _Bool hasClientWriteTime;
@property(nonatomic) _Bool hasClientWriteSize;
@property(nonatomic) _Bool hasTimestamp;

@end

