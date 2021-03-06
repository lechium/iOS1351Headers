//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSCKRecordHolder.h"

@class CKKSWrappedAESSIVKey, NSData, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CKKSItem : CKKSCKRecordHolder
{
    NSString *_uuid;	// 8 = 0x8
    NSString *_parentKeyUUID;	// 16 = 0x10
    NSData *_encitem;	// 24 = 0x18
    CKKSWrappedAESSIVKey *_wrappedkey;	// 32 = 0x20
    unsigned long long _generationCount;	// 40 = 0x28
    unsigned long long _encver;	// 48 = 0x30
    NSNumber *_plaintextPCSServiceIdentifier;	// 56 = 0x38
    NSData *_plaintextPCSPublicKey;	// 64 = 0x40
    NSData *_plaintextPCSPublicIdentity;	// 72 = 0x48
}

+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x0000000100055a04
+ (id)sqlColumns;	// IMP=0x0000000100055914
+ (void)setOSVersionInRecord:(id)arg1;	// IMP=0x00000001000558b8
- (void).cxx_destruct;	// IMP=0x0000000100055814
@property(retain) NSData *plaintextPCSPublicIdentity; // @synthesize plaintextPCSPublicIdentity=_plaintextPCSPublicIdentity;
@property(retain) NSData *plaintextPCSPublicKey; // @synthesize plaintextPCSPublicKey=_plaintextPCSPublicKey;
@property(retain) NSNumber *plaintextPCSServiceIdentifier; // @synthesize plaintextPCSServiceIdentifier=_plaintextPCSServiceIdentifier;
@property unsigned long long encver; // @synthesize encver=_encver;
@property unsigned long long generationCount; // @synthesize generationCount=_generationCount;
@property(copy) CKKSWrappedAESSIVKey *wrappedkey; // @synthesize wrappedkey=_wrappedkey;
@property(copy) NSData *encitem; // @synthesize encitem=_encitem;
@property(copy) NSString *parentKeyUUID; // @synthesize parentKeyUUID=_parentKeyUUID;
@property(copy) NSString *uuid; // @synthesize uuid=_uuid;
- (id)sqlValues;	// IMP=0x0000000100055210
- (id)whereClauseToFindSelf;	// IMP=0x0000000100055108
@property(retain, getter=base64Item, setter=setBase64Item:) NSString *base64encitem;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100054f88
- (id)debugDescription;	// IMP=0x0000000100054ee4
- (id)description;	// IMP=0x0000000100054e44
- (id)makeAuthenticatedDataDictionaryUpdatingCKKSItemEncVer2:(id)arg1;	// IMP=0x000000010005477c
- (id)makeAuthenticatedDataDictionaryUpdatingCKKSItemEncVer1;	// IMP=0x0000000100054570
- (id)makeAuthenticatedDataDictionaryUpdatingCKKSItem:(id)arg1 encryptionVersion:(unsigned long long)arg2;	// IMP=0x0000000100054470
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x0000000100053cdc
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x00000001000538d4
- (void)setFromCKRecord:(id)arg1;	// IMP=0x00000001000534e0
- (id)CKRecordName;	// IMP=0x00000001000534d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100053110
- (id)initWithUUID:(id)arg1 parentKeyUUID:(id)arg2 zoneID:(id)arg3 encodedCKRecord:(id)arg4 encItem:(id)arg5 wrappedkey:(id)arg6 generationCount:(unsigned long long)arg7 encver:(unsigned long long)arg8 plaintextPCSServiceIdentifier:(id)arg9 plaintextPCSPublicKey:(id)arg10 plaintextPCSPublicIdentity:(id)arg11;	// IMP=0x0000000100052f04
- (id)initWithUUID:(id)arg1 parentKeyUUID:(id)arg2 zoneID:(id)arg3 encodedCKRecord:(id)arg4 encItem:(id)arg5 wrappedkey:(id)arg6 generationCount:(unsigned long long)arg7 encver:(unsigned long long)arg8;	// IMP=0x0000000100052e08
- (id)initWithUUID:(id)arg1 parentKeyUUID:(id)arg2 zoneID:(id)arg3 encItem:(id)arg4 wrappedkey:(id)arg5 generationCount:(unsigned long long)arg6 encver:(unsigned long long)arg7;	// IMP=0x0000000100052d30
- (id)initWithUUID:(id)arg1 parentKeyUUID:(id)arg2 zoneID:(id)arg3;	// IMP=0x0000000100052ca0
- (id)initCopyingCKKSItem:(id)arg1;	// IMP=0x0000000100052a34
- (id)initWithCKRecord:(id)arg1;	// IMP=0x0000000100052a00

@end

