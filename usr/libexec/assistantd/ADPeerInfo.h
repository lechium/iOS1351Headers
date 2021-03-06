//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface ADPeerInfo : NSObject <NSCopying>
{
    _Bool _deviceOwnedByCurrentUser;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_productType;	// 24 = 0x18
    NSString *_buildVersion;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSString *_idsFirstRoutableDestination;	// 48 = 0x30
    NSArray *_airPlayRouteIdentifiers;	// 56 = 0x38
    NSString *_rapportEffectiveIdentifier;	// 64 = 0x40
    NSString *_mediaSystemIdentifier;	// 72 = 0x48
}

+ (void)updateSharedInfoWithIdentifier:(id)arg1 productType:(id)arg2 buildVersion:(id)arg3;	// IMP=0x000000010005be18
+ (id)locallyPairedPeerInfo;	// IMP=0x000000010005b934
+ (id)_queue;	// IMP=0x000000010005b8c4
- (void).cxx_destruct;	// IMP=0x000000010005c188
@property(copy, nonatomic) NSString *mediaSystemIdentifier; // @synthesize mediaSystemIdentifier=_mediaSystemIdentifier;
@property(copy, nonatomic) NSString *rapportEffectiveIdentifier; // @synthesize rapportEffectiveIdentifier=_rapportEffectiveIdentifier;
@property(copy, nonatomic) NSArray *airPlayRouteIdentifiers; // @synthesize airPlayRouteIdentifiers=_airPlayRouteIdentifiers;
@property(copy, nonatomic) NSString *idsFirstRoutableDestination; // @synthesize idsFirstRoutableDestination=_idsFirstRoutableDestination;
@property(nonatomic, getter=isDeviceOwnedByCurrentUser) _Bool deviceOwnedByCurrentUser; // @synthesize deviceOwnedByCurrentUser=_deviceOwnedByCurrentUser;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005bf60
- (unsigned long long)hash;	// IMP=0x000000010005bf50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005bf4c
- (id)afPeerInfo;	// IMP=0x000000010005bd7c
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;	// IMP=0x000000010005bc4c
- (id)initWithUniqueIdentifer:(id)arg1;	// IMP=0x000000010005bbd0
- (id)initWithIdentifer:(id)arg1;	// IMP=0x000000010005bbb8
- (id)initWithIdentifer:(id)arg1 productType:(id)arg2 buildVersion:(id)arg3 name:(id)arg4;	// IMP=0x000000010005ba80

@end

