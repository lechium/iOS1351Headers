//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface RMDeclarationUniqueIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_managementSourceIdentifier;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_serverToken;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000261f0
- (void).cxx_destruct;	// IMP=0x00000001000264d0
@property(readonly, copy, nonatomic) NSString *serverToken; // @synthesize serverToken=_serverToken;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *managementSourceIdentifier; // @synthesize managementSourceIdentifier=_managementSourceIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002649c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002636c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000261f8
- (unsigned long long)hash;	// IMP=0x00000001000260fc
- (_Bool)isEqualToDeclarationIdentifier:(id)arg1;	// IMP=0x0000000100025ed4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100025e54
- (id)description;	// IMP=0x0000000100025d30
- (id)initWithManagementSourceIdentifier:(id)arg1 type:(id)arg2 identifier:(id)arg3 serverToken:(id)arg4;	// IMP=0x0000000100025c00
- (id)initWithDeclarationPayload:(id)arg1;	// IMP=0x0000000100025b08

@end

