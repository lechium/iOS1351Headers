//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UWLOptOutEvent : PBCodable <NSCopying>
{
    NSString *_brandId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000070d0
@property(retain, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000708c
- (unsigned long long)hash;	// IMP=0x0000000100007074
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100006fd4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100006f58
- (void)copyTo:(id)arg1;	// IMP=0x0000000100006f30
- (void)writeTo:(id)arg1;	// IMP=0x0000000100006f10
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100006f08
- (id)dictionaryRepresentation;	// IMP=0x0000000100006d0c
- (id)description;	// IMP=0x0000000100006c58
@property(readonly, nonatomic) _Bool hasBrandId;

@end
