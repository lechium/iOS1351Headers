//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SDUnlockLongTermKeyRequest : PBRequest <NSCopying>
{
    NSData *_longTermKey;	// 8 = 0x8
    NSString *_requestID;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000001000661cc
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000660dc
- (unsigned long long)hash;	// IMP=0x0000000100066050
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100065f44
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100065e68
- (void)copyTo:(id)arg1;	// IMP=0x0000000100065dd0
- (void)writeTo:(id)arg1;	// IMP=0x0000000100065d44
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100065d3c
- (id)dictionaryRepresentation;	// IMP=0x00000001000659cc
- (id)description;	// IMP=0x0000000100065918
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(readonly, nonatomic) _Bool hasRequestID;
@property(nonatomic) _Bool hasVersion;

@end

