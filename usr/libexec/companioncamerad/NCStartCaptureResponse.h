//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface NCStartCaptureResponse : PBCodable <NSCopying>
{
    _Bool _success;	// 8 = 0x8
    CDStruct_f2ecb737 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100003320
- (unsigned long long)hash;	// IMP=0x00000001000032ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100003238
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000031cc
- (void)copyTo:(id)arg1;	// IMP=0x000000010000319c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100003170
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100003168
- (id)dictionaryRepresentation;	// IMP=0x0000000100002e98
- (id)description;	// IMP=0x0000000100002de4
@property(nonatomic) _Bool hasSuccess;

@end
