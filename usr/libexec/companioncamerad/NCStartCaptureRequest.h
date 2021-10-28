//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@interface NCStartCaptureRequest : PBRequest <NSCopying>
{
    int _captureMode;	// 8 = 0x8
    CDStruct_29a1c328 _has;	// 12 = 0xc
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100006a88
- (unsigned long long)hash;	// IMP=0x0000000100006a54
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000069a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000693c
- (void)copyTo:(id)arg1;	// IMP=0x000000010000690c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000068e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000068d8
- (id)dictionaryRepresentation;	// IMP=0x0000000100006590
- (id)description;	// IMP=0x00000001000064dc
- (int)StringAsCaptureMode:(id)arg1;	// IMP=0x00000001000063bc
- (id)captureModeAsString:(int)arg1;	// IMP=0x0000000100006308
@property(nonatomic) _Bool hasCaptureMode;
@property(nonatomic) int captureMode; // @synthesize captureMode=_captureMode;

@end
