//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SPProtoCacheAsset : PBCodable <NSCopying>
{
    double _accessDate;	// 8 = 0x8
    unsigned long long _size;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    unsigned int _state;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100002480
@property(nonatomic) double accessDate; // @synthesize accessDate=_accessDate;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100002380
- (unsigned long long)hash;	// IMP=0x00000001000022c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000021e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100002138
- (void)copyTo:(id)arg1;	// IMP=0x00000001000020b4
- (void)writeTo:(id)arg1;	// IMP=0x0000000100002020
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100002018
- (id)dictionaryRepresentation;	// IMP=0x0000000100001b7c
- (id)description;	// IMP=0x0000000100001ac8

@end

