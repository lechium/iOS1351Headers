//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface FMDNanoSupportProtoNeedSignatureV3 : PBCodable <NSCopying>
{
    NSString *_activationLockRequestUUIDString;	// 8 = 0x8
    NSData *_requestJsonData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100008f00
@property(retain, nonatomic) NSString *activationLockRequestUUIDString; // @synthesize activationLockRequestUUIDString=_activationLockRequestUUIDString;
@property(retain, nonatomic) NSData *requestJsonData; // @synthesize requestJsonData=_requestJsonData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100008e4c
- (unsigned long long)hash;	// IMP=0x0000000100008df0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100008d1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100008c6c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100008c08
- (void)writeTo:(id)arg1;	// IMP=0x0000000100008ba4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100008b9c
- (id)dictionaryRepresentation;	// IMP=0x0000000100008940
- (id)description;	// IMP=0x000000010000888c
@property(readonly, nonatomic) _Bool hasActivationLockRequestUUIDString;

@end
