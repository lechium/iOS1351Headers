//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface AWDCSDOtherFailureReport : PBCodable <NSCopying>
{
    unsigned long long _actionType;	// 8 = 0x8
    unsigned long long _failureReason;	// 16 = 0x10
    unsigned long long _timestamp;	// 24 = 0x18
    NSString *_bundleId;	// 32 = 0x20
    NSString *_callUuid;	// 40 = 0x28
    _Bool _providerWasReset;	// 48 = 0x30
    struct {
        unsigned int actionType:1;
        unsigned int failureReason:1;
        unsigned int timestamp:1;
        unsigned int providerWasReset:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000100039048
@property(nonatomic) _Bool providerWasReset; // @synthesize providerWasReset=_providerWasReset;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *callUuid; // @synthesize callUuid=_callUuid;
@property(nonatomic) unsigned long long failureReason; // @synthesize failureReason=_failureReason;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100038eb4
- (unsigned long long)hash;	// IMP=0x0000000100038db8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100038c20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100038ad8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000389cc
- (void)writeTo:(id)arg1;	// IMP=0x00000001000388d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000388d0
- (id)dictionaryRepresentation;	// IMP=0x0000000100038258
- (id)description;	// IMP=0x00000001000381a4
@property(nonatomic) _Bool hasProviderWasReset;
@property(nonatomic) _Bool hasActionType;
@property(readonly, nonatomic) _Bool hasCallUuid;
@property(nonatomic) _Bool hasFailureReason;
@property(readonly, nonatomic) _Bool hasBundleId;
@property(nonatomic) _Bool hasTimestamp;

@end

