//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDAutoUnlockAuthPromptResponse : PBCodable <NSCopying>
{
    unsigned int _errorCode;	// 8 = 0x8
    NSData *_keyData;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    _Bool _needsImageData;	// 28 = 0x1c
    struct {
        unsigned int errorCode:1;
        unsigned int version:1;
        unsigned int needsImageData:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010005633c
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool needsImageData; // @synthesize needsImageData=_needsImageData;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100056220
- (unsigned long long)hash;	// IMP=0x000000010005616c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100056030
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100055f38
- (void)copyTo:(id)arg1;	// IMP=0x0000000100055e70
- (void)writeTo:(id)arg1;	// IMP=0x0000000100055db8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100055db0
- (id)dictionaryRepresentation;	// IMP=0x000000010005586c
- (id)description;	// IMP=0x00000001000557b8
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasNeedsImageData;
@property(readonly, nonatomic) _Bool hasKeyData;
@property(nonatomic) _Bool hasVersion;

@end

