//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface NSSUsageRespMsgAppUsage : PBCodable <NSCopying>
{
    unsigned long long _dynamicSizeInBytes;	// 8 = 0x8
    unsigned long long _sharedSizeInBytes;	// 16 = 0x10
    unsigned long long _staticSizeInBytes;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
    NSString *_bundleVersion;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100022b30
@property(nonatomic) unsigned long long sharedSizeInBytes; // @synthesize sharedSizeInBytes=_sharedSizeInBytes;
@property(nonatomic) unsigned long long dynamicSizeInBytes; // @synthesize dynamicSizeInBytes=_dynamicSizeInBytes;
@property(nonatomic) unsigned long long staticSizeInBytes; // @synthesize staticSizeInBytes=_staticSizeInBytes;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000229a8
- (unsigned long long)hash;	// IMP=0x00000001000228f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000227b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000226a8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000225ec
- (void)writeTo:(id)arg1;	// IMP=0x0000000100022528
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100022520
- (id)dictionaryRepresentation;	// IMP=0x0000000100021fbc
- (id)description;	// IMP=0x0000000100021f08

@end
