//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCMFitnessTracking : PBCodable <NSCopying>
{
    int _powerSource;	// 8 = 0x8
    _Bool _fitnessTrackingEnabled;	// 12 = 0xc
    struct {
        unsigned int powerSource:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool fitnessTrackingEnabled; // @synthesize fitnessTrackingEnabled=_fitnessTrackingEnabled;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100ab3c6c
- (unsigned long long)hash;	// IMP=0x0000000100ab3c24
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100ab3b84
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100ab3b08
- (void)copyTo:(id)arg1;	// IMP=0x0000000100ab3ac8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100ab3a60
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100ab3a58
- (id)dictionaryRepresentation;	// IMP=0x0000000100ab365c
- (id)description;	// IMP=0x0000000100ab35dc
- (int)StringAsPowerSource:(id)arg1;	// IMP=0x0000000100ab3538
- (id)powerSourceAsString:(int)arg1;	// IMP=0x0000000100ab34b0
@property(nonatomic) _Bool hasPowerSource;
@property(nonatomic) int powerSource; // @synthesize powerSource=_powerSource;

@end

