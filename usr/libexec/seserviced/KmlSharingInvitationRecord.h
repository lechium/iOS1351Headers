//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSString, NSUUID;

@interface KmlSharingInvitationRecord : NSObject <NSSecureCoding>
{
    _Bool _dirty;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSString *_ownerIdsIdentifier;	// 24 = 0x18
    NSData *_invitationFromOwner;	// 32 = 0x20
    NSData *_bindingAttestation;	// 40 = 0x28
    NSString *_friendKeyIdentifier;	// 48 = 0x30
    NSString *_invitationIdentifier;	// 56 = 0x38
    long long _friendSideState;	// 64 = 0x40
}

+ (id)decodeWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004e2bc
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010004dc00
- (void).cxx_destruct;	// IMP=0x000000010004e44c
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(nonatomic) long long friendSideState; // @synthesize friendSideState=_friendSideState;
@property(retain, nonatomic) NSString *invitationIdentifier; // @synthesize invitationIdentifier=_invitationIdentifier;
@property(retain, nonatomic) NSString *friendKeyIdentifier; // @synthesize friendKeyIdentifier=_friendKeyIdentifier;
@property(retain, nonatomic) NSData *bindingAttestation; // @synthesize bindingAttestation=_bindingAttestation;
@property(retain, nonatomic) NSData *invitationFromOwner; // @synthesize invitationFromOwner=_invitationFromOwner;
@property(retain, nonatomic) NSString *ownerIdsIdentifier; // @synthesize ownerIdsIdentifier=_ownerIdsIdentifier;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)encodeWithError:(id *)arg1;	// IMP=0x000000010004e29c
- (id)description;	// IMP=0x000000010004e130
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010004e00c
- (id)init;	// IMP=0x000000010004dfd0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010004dddc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010004dc08

@end
