//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

@interface IDSProtoKeyTransparencyTrustedDevice : PBCodable <NSCopying>
{
    NSData *_pushToken;	// 8 = 0x8
    NSMutableArray *_trustedServices;	// 16 = 0x10
}

+ (Class)trustedServicesType;	// IMP=0x00000001001a1338
- (void).cxx_destruct;	// IMP=0x00000001001a2978
@property(retain, nonatomic) NSMutableArray *trustedServices; // @synthesize trustedServices=_trustedServices;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001a2650
- (unsigned long long)hash;	// IMP=0x00000001001a25c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001a23f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001a2138
- (void)copyTo:(id)arg1;	// IMP=0x00000001001a1fc4
- (void)writeTo:(id)arg1;	// IMP=0x00000001001a1d98
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001a1d34
- (id)dictionaryRepresentation;	// IMP=0x00000001001a143c
- (id)description;	// IMP=0x00000001001a136c
- (id)trustedServicesAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001a12e4
- (unsigned long long)trustedServicesCount;	// IMP=0x00000001001a1298
- (void)addTrustedServices:(id)arg1;	// IMP=0x00000001001a11c4
- (void)clearTrustedServices;	// IMP=0x00000001001a1178
@property(readonly, nonatomic) _Bool hasPushToken;

@end

