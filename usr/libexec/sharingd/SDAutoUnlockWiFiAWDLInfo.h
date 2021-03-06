//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDAutoUnlockWiFiAWDLInfo : PBCodable <NSCopying>
{
    unsigned int _channelFlags;	// 8 = 0x8
    unsigned int _discoveryMetric;	// 12 = 0xc
    NSData *_extraInfoData;	// 16 = 0x10
    NSData *_macAddress;	// 24 = 0x18
    unsigned int _masterChannel;	// 32 = 0x20
    unsigned int _preferredChannel;	// 36 = 0x24
    struct {
        unsigned int channelFlags:1;
        unsigned int discoveryMetric:1;
        unsigned int masterChannel:1;
        unsigned int preferredChannel:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010005ec74
@property(retain, nonatomic) NSData *extraInfoData; // @synthesize extraInfoData=_extraInfoData;
@property(nonatomic) unsigned int channelFlags; // @synthesize channelFlags=_channelFlags;
@property(nonatomic) unsigned int preferredChannel; // @synthesize preferredChannel=_preferredChannel;
@property(nonatomic) unsigned int masterChannel; // @synthesize masterChannel=_masterChannel;
@property(nonatomic) unsigned int discoveryMetric; // @synthesize discoveryMetric=_discoveryMetric;
@property(retain, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010005ead8
- (unsigned long long)hash;	// IMP=0x000000010005e9ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005e868
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005e710
- (void)copyTo:(id)arg1;	// IMP=0x000000010005e5fc
- (void)writeTo:(id)arg1;	// IMP=0x000000010005e4f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010005e4f0
- (id)dictionaryRepresentation;	// IMP=0x000000010005de7c
- (id)description;	// IMP=0x000000010005ddc8
@property(readonly, nonatomic) _Bool hasExtraInfoData;
@property(nonatomic) _Bool hasChannelFlags;
@property(nonatomic) _Bool hasPreferredChannel;
@property(nonatomic) _Bool hasMasterChannel;
@property(nonatomic) _Bool hasDiscoveryMetric;
@property(readonly, nonatomic) _Bool hasMacAddress;

@end

