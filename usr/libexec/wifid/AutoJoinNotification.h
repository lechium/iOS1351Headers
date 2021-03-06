//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface AutoJoinNotification : PBCodable <NSCopying>
{
    NSData *_notification;	// 8 = 0x8
}

@property(retain, nonatomic) NSData *notification; // @synthesize notification=_notification;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000062f4
- (unsigned long long)hash;	// IMP=0x00000001000062dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100006268
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000061f0
- (void)copyTo:(id)arg1;	// IMP=0x00000001000061c8
- (void)writeTo:(id)arg1;	// IMP=0x00000001000061a8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000061a0
- (id)dictionaryRepresentation;	// IMP=0x0000000100005fa0
- (id)description;	// IMP=0x0000000100005f20
@property(readonly, nonatomic) _Bool hasNotification;
- (void)dealloc;	// IMP=0x0000000100005eb8

@end

