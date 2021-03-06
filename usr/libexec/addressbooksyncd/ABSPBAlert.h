//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface ABSPBAlert : PBCodable <NSCopying>
{
    NSString *_sound;	// 8 = 0x8
    NSString *_vibration;	// 16 = 0x10
    _Bool _ignoreMute;	// 24 = 0x18
    struct {
        unsigned int ignoreMute:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000010000def0
@property(nonatomic) _Bool ignoreMute; // @synthesize ignoreMute=_ignoreMute;
@property(retain, nonatomic) NSString *vibration; // @synthesize vibration=_vibration;
@property(retain, nonatomic) NSString *sound; // @synthesize sound=_sound;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000de00
- (unsigned long long)hash;	// IMP=0x000000010000dd70
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000dc60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000db84
- (void)copyTo:(id)arg1;	// IMP=0x000000010000daec
- (void)writeTo:(id)arg1;	// IMP=0x000000010000da60
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000da58
- (id)dictionaryRepresentation;	// IMP=0x000000010000d6e8
- (id)description;	// IMP=0x000000010000d634
@property(nonatomic) _Bool hasIgnoreMute;
@property(readonly, nonatomic) _Bool hasVibration;
@property(readonly, nonatomic) _Bool hasSound;

@end

