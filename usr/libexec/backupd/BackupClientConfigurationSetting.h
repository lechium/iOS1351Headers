//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface BackupClientConfigurationSetting : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000ea11c
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000ea068
- (unsigned long long)hash;	// IMP=0x00000001000ea00c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000e9f38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000e9e88
- (void)copyTo:(id)arg1;	// IMP=0x00000001000e9e18
- (void)writeTo:(id)arg1;	// IMP=0x00000001000e9db0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000e9da8
- (id)dictionaryRepresentation;	// IMP=0x00000001000e9b50
- (id)description;	// IMP=0x00000001000e9a9c

@end

