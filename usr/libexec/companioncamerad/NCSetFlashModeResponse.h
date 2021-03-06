//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface NCSetFlashModeResponse : PBCodable <NSCopying>
{
    int _flashMode;	// 8 = 0x8
    CDStruct_b12b55e8 _has;	// 12 = 0xc
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000fc3c
- (unsigned long long)hash;	// IMP=0x000000010000fc08
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000fb5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000faf0
- (void)copyTo:(id)arg1;	// IMP=0x000000010000fac0
- (void)writeTo:(id)arg1;	// IMP=0x000000010000fa94
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000fa8c
- (id)dictionaryRepresentation;	// IMP=0x000000010000f77c
- (id)description;	// IMP=0x000000010000f6c8
- (int)StringAsFlashMode:(id)arg1;	// IMP=0x000000010000f628
- (id)flashModeAsString:(int)arg1;	// IMP=0x000000010000f5b0
@property(nonatomic) _Bool hasFlashMode;
@property(nonatomic) int flashMode; // @synthesize flashMode=_flashMode;

@end

