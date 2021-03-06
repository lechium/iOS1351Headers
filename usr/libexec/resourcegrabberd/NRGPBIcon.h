//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface NRGPBIcon : PBCodable <NSCopying>
{
    NSString *_bundleID;	// 8 = 0x8
    NSData *_iconData;	// 16 = 0x10
    int _iconVariant;	// 24 = 0x18
    NSString *_version;	// 32 = 0x20
    _Bool _deletable;	// 40 = 0x28
    struct {
        unsigned int deletable:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000010000585c
@property(nonatomic) _Bool deletable; // @synthesize deletable=_deletable;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(nonatomic) int iconVariant; // @synthesize iconVariant=_iconVariant;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000056f8
- (unsigned long long)hash;	// IMP=0x0000000100005640
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000054ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000053d8
- (void)copyTo:(id)arg1;	// IMP=0x000000010000531c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100005258
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100005250
- (id)dictionaryRepresentation;	// IMP=0x0000000100004d90
- (id)description;	// IMP=0x0000000100004cdc
@property(nonatomic) _Bool hasDeletable;
@property(readonly, nonatomic) _Bool hasVersion;

@end

