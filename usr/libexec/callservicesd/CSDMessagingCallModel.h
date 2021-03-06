//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface CSDMessagingCallModel : PBCodable <NSCopying>
{
    _Bool _supportsAddCall;	// 8 = 0x8
    _Bool _supportsDTMF;	// 9 = 0x9
    _Bool _supportsGrouping;	// 10 = 0xa
    _Bool _supportsHolding;	// 11 = 0xb
    _Bool _supportsSendingToVoicemail;	// 12 = 0xc
    _Bool _supportsUnambiguousMultiPartyState;	// 13 = 0xd
    _Bool _supportsUngrouping;	// 14 = 0xe
    struct {
        unsigned int supportsAddCall:1;
        unsigned int supportsDTMF:1;
        unsigned int supportsGrouping:1;
        unsigned int supportsHolding:1;
        unsigned int supportsSendingToVoicemail:1;
        unsigned int supportsUnambiguousMultiPartyState:1;
        unsigned int supportsUngrouping:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool supportsSendingToVoicemail; // @synthesize supportsSendingToVoicemail=_supportsSendingToVoicemail;
@property(nonatomic) _Bool supportsAddCall; // @synthesize supportsAddCall=_supportsAddCall;
@property(nonatomic) _Bool supportsUnambiguousMultiPartyState; // @synthesize supportsUnambiguousMultiPartyState=_supportsUnambiguousMultiPartyState;
@property(nonatomic) _Bool supportsDTMF; // @synthesize supportsDTMF=_supportsDTMF;
@property(nonatomic) _Bool supportsUngrouping; // @synthesize supportsUngrouping=_supportsUngrouping;
@property(nonatomic) _Bool supportsGrouping; // @synthesize supportsGrouping=_supportsGrouping;
@property(nonatomic) _Bool supportsHolding; // @synthesize supportsHolding=_supportsHolding;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100026c94
- (unsigned long long)hash;	// IMP=0x0000000100026ba0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000269cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002686c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100026728
- (void)writeTo:(id)arg1;	// IMP=0x00000001000265f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000265e8
- (id)dictionaryRepresentation;	// IMP=0x0000000100025cb8
- (id)description;	// IMP=0x0000000100025c04
@property(nonatomic) _Bool hasSupportsSendingToVoicemail;
@property(nonatomic) _Bool hasSupportsAddCall;
@property(nonatomic) _Bool hasSupportsUnambiguousMultiPartyState;
@property(nonatomic) _Bool hasSupportsDTMF;
@property(nonatomic) _Bool hasSupportsUngrouping;
@property(nonatomic) _Bool hasSupportsGrouping;
@property(nonatomic) _Bool hasSupportsHolding;

@end

