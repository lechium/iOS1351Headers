//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class TASKOutput;

@interface TASKNotifyRequest : PBRequest <NSCopying>
{
    unsigned int _counter;	// 8 = 0x8
    TASKOutput *_output;	// 16 = 0x10
    int _taskId;	// 24 = 0x18
    _Bool _isLast;	// 28 = 0x1c
    struct {
        unsigned int counter:1;
        unsigned int isLast:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010005d35c
@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(nonatomic) unsigned int counter; // @synthesize counter=_counter;
@property(retain, nonatomic) TASKOutput *output; // @synthesize output=_output;
@property(nonatomic) int taskId; // @synthesize taskId=_taskId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010005d234
- (unsigned long long)hash;	// IMP=0x000000010005d190
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005d06c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005cf90
- (void)copyTo:(id)arg1;	// IMP=0x000000010005ceec
- (void)writeTo:(id)arg1;	// IMP=0x000000010005ce44
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010005ce3c
- (id)dictionaryRepresentation;	// IMP=0x000000010005c8a4
- (id)description;	// IMP=0x000000010005c7f0
@property(nonatomic) _Bool hasIsLast;
@property(nonatomic) _Bool hasCounter;

@end

