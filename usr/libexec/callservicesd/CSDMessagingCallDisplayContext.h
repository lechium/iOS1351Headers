//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class CSDMessagingPersonNameComponents, NSString, TUCallDisplayContext;

@interface CSDMessagingCallDisplayContext : PBCodable <NSCopying>
{
    NSString *_callDirectoryExtensionIdentifier;	// 8 = 0x8
    NSString *_callDirectoryLabel;	// 16 = 0x10
    NSString *_callDirectoryLocalizedExtensionContainingAppName;	// 24 = 0x18
    NSString *_companyName;	// 32 = 0x20
    NSString *_contactIdentifier;	// 40 = 0x28
    NSString *_contactLabel;	// 48 = 0x30
    NSString *_contactName;	// 56 = 0x38
    NSString *_label;	// 64 = 0x40
    NSString *_location;	// 72 = 0x48
    NSString *_mapName;	// 80 = 0x50
    NSString *_name;	// 88 = 0x58
    CSDMessagingPersonNameComponents *_protoPersonNameComponents;	// 96 = 0x60
    NSString *_suggestedName;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000001000c50b4
@property(retain, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) NSString *callDirectoryExtensionIdentifier; // @synthesize callDirectoryExtensionIdentifier=_callDirectoryExtensionIdentifier;
@property(retain, nonatomic) NSString *callDirectoryLocalizedExtensionContainingAppName; // @synthesize callDirectoryLocalizedExtensionContainingAppName=_callDirectoryLocalizedExtensionContainingAppName;
@property(retain, nonatomic) NSString *callDirectoryLabel; // @synthesize callDirectoryLabel=_callDirectoryLabel;
@property(retain, nonatomic) NSString *contactLabel; // @synthesize contactLabel=_contactLabel;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *mapName; // @synthesize mapName=_mapName;
@property(retain, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *suggestedName; // @synthesize suggestedName=_suggestedName;
@property(retain, nonatomic) CSDMessagingPersonNameComponents *protoPersonNameComponents; // @synthesize protoPersonNameComponents=_protoPersonNameComponents;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000c4cfc
- (unsigned long long)hash;	// IMP=0x00000001000c4b98
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c48e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c4678
- (void)copyTo:(id)arg1;	// IMP=0x00000001000c44ac
- (void)writeTo:(id)arg1;	// IMP=0x00000001000c4314
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000c430c
- (id)dictionaryRepresentation;	// IMP=0x00000001000c3d6c
- (id)description;	// IMP=0x00000001000c3cb8
@property(readonly, nonatomic) _Bool hasContactIdentifier;
@property(readonly, nonatomic) _Bool hasCallDirectoryExtensionIdentifier;
@property(readonly, nonatomic) _Bool hasCallDirectoryLocalizedExtensionContainingAppName;
@property(readonly, nonatomic) _Bool hasCallDirectoryLabel;
@property(readonly, nonatomic) _Bool hasContactLabel;
@property(readonly, nonatomic) _Bool hasContactName;
@property(readonly, nonatomic) _Bool hasLocation;
@property(readonly, nonatomic) _Bool hasMapName;
@property(readonly, nonatomic) _Bool hasCompanyName;
@property(readonly, nonatomic) _Bool hasLabel;
@property(readonly, nonatomic) _Bool hasSuggestedName;
@property(readonly, nonatomic) _Bool hasProtoPersonNameComponents;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) TUCallDisplayContext *displayContext;
- (id)initWithCallDisplayContext:(id)arg1;	// IMP=0x00000001000dcdd8

@end
