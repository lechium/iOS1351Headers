//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface NSSAccountsInfoRespMsgAccountInfo : PBCodable <NSCopying>
{
    NSString *_altDSID;	// 8 = 0x8
    NSString *_dSID;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    NSString *_username;	// 40 = 0x28
    _Bool _aaIsManaged;	// 48 = 0x30
    _Bool _aaPrimaryAccount;	// 49 = 0x31
    _Bool _authenticated;	// 50 = 0x32
    struct {
        unsigned int aaIsManaged:1;
        unsigned int aaPrimaryAccount:1;
        unsigned int authenticated:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000010000b50c
@property(nonatomic) _Bool aaIsManaged; // @synthesize aaIsManaged=_aaIsManaged;
@property(nonatomic) _Bool aaPrimaryAccount; // @synthesize aaPrimaryAccount=_aaPrimaryAccount;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(retain, nonatomic) NSString *dSID; // @synthesize dSID=_dSID;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000b2e0
- (unsigned long long)hash;	// IMP=0x000000010000b1bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000afc0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000ae24
- (void)copyTo:(id)arg1;	// IMP=0x000000010000acdc
- (void)writeTo:(id)arg1;	// IMP=0x000000010000abb4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000abac
- (id)dictionaryRepresentation;	// IMP=0x000000010000a558
- (id)description;	// IMP=0x000000010000a4a4
@property(nonatomic) _Bool hasAaIsManaged;
@property(nonatomic) _Bool hasAaPrimaryAccount;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasAltDSID;
@property(nonatomic) _Bool hasAuthenticated;
@property(readonly, nonatomic) _Bool hasDSID;
@property(readonly, nonatomic) _Bool hasUsername;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

