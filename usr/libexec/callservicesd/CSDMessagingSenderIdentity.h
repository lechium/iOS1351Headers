//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class CSDMessagingHandle, NSString, NSUUID, TUSenderIdentity;

@interface CSDMessagingSenderIdentity : PBCodable <NSCopying>
{
    NSString *_accountUUIDString;	// 8 = 0x8
    CSDMessagingHandle *_handle;	// 16 = 0x10
    NSString *_localizedName;	// 24 = 0x18
    NSString *_localizedShortName;	// 32 = 0x20
    NSString *_protoUUID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010010f0bc
@property(retain, nonatomic) NSString *accountUUIDString; // @synthesize accountUUIDString=_accountUUIDString;
@property(retain, nonatomic) NSString *localizedShortName; // @synthesize localizedShortName=_localizedShortName;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) CSDMessagingHandle *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) NSString *protoUUID; // @synthesize protoUUID=_protoUUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010010ef24
- (unsigned long long)hash;	// IMP=0x000000010010ee80
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010010ed28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010010ec00
- (void)copyTo:(id)arg1;	// IMP=0x000000010010eb34
- (void)writeTo:(id)arg1;	// IMP=0x000000010010ea7c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010010ea74
- (id)dictionaryRepresentation;	// IMP=0x000000010010e6d4
- (id)description;	// IMP=0x000000010010e620
@property(readonly, nonatomic) _Bool hasAccountUUIDString;
@property(readonly, nonatomic) _Bool hasLocalizedShortName;
@property(readonly, nonatomic) _Bool hasLocalizedName;
@property(readonly, nonatomic) _Bool hasHandle;
@property(readonly, nonatomic) _Bool hasProtoUUID;
@property(readonly, nonatomic) TUSenderIdentity *tuSenderIdentity;
@property(retain, nonatomic) NSUUID *accountUUID;
@property(retain, nonatomic) NSUUID *UUID;
- (id)initWithTUSenderIdentity:(id)arg1;	// IMP=0x000000010010e0b4

@end

