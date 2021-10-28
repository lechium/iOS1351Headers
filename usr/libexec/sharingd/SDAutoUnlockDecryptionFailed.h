//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface SDAutoUnlockDecryptionFailed : PBCodable <NSCopying>
{
    unsigned int _errorCode;	// 8 = 0x8
    unsigned int _version;	// 12 = 0xc
    struct {
        unsigned int errorCode:1;
        unsigned int version:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100065800
- (unsigned long long)hash;	// IMP=0x00000001000657ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000656d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100065648
- (void)copyTo:(id)arg1;	// IMP=0x00000001000655d4
- (void)writeTo:(id)arg1;	// IMP=0x0000000100065558
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100065550
- (id)dictionaryRepresentation;	// IMP=0x0000000100065164
- (id)description;	// IMP=0x00000001000650b0
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasVersion;

@end
