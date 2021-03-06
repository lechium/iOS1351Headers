//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UWLLiveActivityEventContent : PBCodable <NSCopying>
{
    long long _contentMediaLengthInMilliseconds;	// 8 = 0x8
    NSString *_contentBrandId;	// 16 = 0x10
    NSString *_contentCanonicalId;	// 24 = 0x18
    NSString *_contentExternalPlayableId;	// 32 = 0x20
    NSString *_contentInternalLegId;	// 40 = 0x28
    _Bool _contentIsDone;	// 48 = 0x30
    struct {
        unsigned int contentMediaLengthInMilliseconds:1;
        unsigned int contentIsDone:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000100017a84
@property(retain, nonatomic) NSString *contentInternalLegId; // @synthesize contentInternalLegId=_contentInternalLegId;
@property(nonatomic) _Bool contentIsDone; // @synthesize contentIsDone=_contentIsDone;
@property(nonatomic) long long contentMediaLengthInMilliseconds; // @synthesize contentMediaLengthInMilliseconds=_contentMediaLengthInMilliseconds;
@property(retain, nonatomic) NSString *contentExternalPlayableId; // @synthesize contentExternalPlayableId=_contentExternalPlayableId;
@property(retain, nonatomic) NSString *contentBrandId; // @synthesize contentBrandId=_contentBrandId;
@property(retain, nonatomic) NSString *contentCanonicalId; // @synthesize contentCanonicalId=_contentCanonicalId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000178d8
- (unsigned long long)hash;	// IMP=0x00000001000177f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100017664
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100017514
- (void)copyTo:(id)arg1;	// IMP=0x0000000100017418
- (void)writeTo:(id)arg1;	// IMP=0x000000010001732c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100017324
- (id)dictionaryRepresentation;	// IMP=0x0000000100016e18
- (id)description;	// IMP=0x0000000100016d64
@property(readonly, nonatomic) _Bool hasContentInternalLegId;
@property(nonatomic) _Bool hasContentIsDone;
@property(nonatomic) _Bool hasContentMediaLengthInMilliseconds;
@property(readonly, nonatomic) _Bool hasContentExternalPlayableId;
@property(readonly, nonatomic) _Bool hasContentBrandId;
@property(readonly, nonatomic) _Bool hasContentCanonicalId;

@end

