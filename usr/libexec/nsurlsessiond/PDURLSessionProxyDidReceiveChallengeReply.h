//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyCredential, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveChallengeReply : PBCodable <NSCopying>
{
    PDURLSessionProxyCredential *_credential;	// 8 = 0x8
    int _disposition;	// 16 = 0x10
    PDURLSessionProxyTaskMessage *_task;	// 24 = 0x18
    CDStruct_cc6d6311 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100005d1c
@property(retain, nonatomic) PDURLSessionProxyCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100005c08
- (unsigned long long)hash;	// IMP=0x0000000100005b7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100005a70
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100005994
- (void)copyTo:(id)arg1;	// IMP=0x00000001000058fc
- (void)writeTo:(id)arg1;	// IMP=0x0000000100005870
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100005580
- (id)dictionaryRepresentation;	// IMP=0x00000001000053e4
- (id)description;	// IMP=0x0000000100005330
@property(readonly, nonatomic) _Bool hasCredential;
- (int)StringAsDisposition:(id)arg1;	// IMP=0x0000000100005258
- (id)dispositionAsString:(int)arg1;	// IMP=0x00000001000051c8
@property(nonatomic) _Bool hasDisposition;
@property(nonatomic) int disposition; // @synthesize disposition=_disposition;
@property(readonly, nonatomic) _Bool hasTask;

@end

