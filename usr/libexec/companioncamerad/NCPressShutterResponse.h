//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface NCPressShutterResponse : PBCodable <NSCopying>
{
    _Bool _success;	// 8 = 0x8
    CDStruct_f2ecb737 _has;	// 12 = 0xc
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100002d60
- (unsigned long long)hash;	// IMP=0x0000000100002d2c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100002c78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100002c0c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100002bdc
- (void)writeTo:(id)arg1;	// IMP=0x0000000100002bb0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100002ba8
- (id)dictionaryRepresentation;	// IMP=0x00000001000028d8
- (id)description;	// IMP=0x0000000100002824
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool success; // @synthesize success=_success;

@end

