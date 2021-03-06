//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class AFVoiceInfo, NSString;

@interface _ADPBDeviceOutputVoiceInfo : PBCodable <NSCopying>
{
    int _gender;	// 8 = 0x8
    NSString *_languageCode;	// 16 = 0x10
    struct {
        unsigned int gender:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001ff9b0
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001ff914
- (unsigned long long)hash;	// IMP=0x00000001001ff8ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001ff7d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001ff728
- (void)copyTo:(id)arg1;	// IMP=0x00000001001ff6b0
- (void)writeTo:(id)arg1;	// IMP=0x00000001001ff640
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001ff638
- (id)dictionaryRepresentation;	// IMP=0x00000001001ff2cc
- (id)description;	// IMP=0x00000001001ff218
- (int)StringAsGender:(id)arg1;	// IMP=0x00000001001ff178
- (id)genderAsString:(int)arg1;	// IMP=0x00000001001ff100
@property(nonatomic) _Bool hasGender;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(retain, nonatomic, setter=_ad_setVoiceInfo:) AFVoiceInfo *_ad_voiceInfo;

@end

