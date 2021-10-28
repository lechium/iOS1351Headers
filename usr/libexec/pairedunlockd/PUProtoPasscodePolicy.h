//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface PUProtoPasscodePolicy : PBCodable <NSCopying>
{
    unsigned int _minimumLength;	// 8 = 0x8
    _Bool _modificationAllowed;	// 12 = 0xc
    struct {
        unsigned int minimumLength:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int minimumLength; // @synthesize minimumLength=_minimumLength;
@property(nonatomic) _Bool modificationAllowed; // @synthesize modificationAllowed=_modificationAllowed;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000ebb0
- (unsigned long long)hash;	// IMP=0x000000010000eb68
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000ea9c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000ea20
- (void)copyTo:(id)arg1;	// IMP=0x000000010000e9e0
- (void)writeTo:(id)arg1;	// IMP=0x000000010000e978
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000e970
- (id)dictionaryRepresentation;	// IMP=0x000000010000e5a0
- (id)description;	// IMP=0x000000010000e4ec
@property(nonatomic) _Bool hasMinimumLength;

@end
