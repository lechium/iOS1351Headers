//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSUUID, SecCDKeychainAccessControlEntity, SecCDKeychainItemMetadata, SecCDKeychainItemType;

__attribute__((visibility("hidden")))
@interface SecCDKeychainItem : NSObject
{
    SecCDKeychainItemMetadata *_metadata;	// 8 = 0x8
    NSData *_encryptedSecretData;	// 16 = 0x10
    NSDictionary *_secrets;	// 24 = 0x18
    int _keyclass;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010004040c
@property(readonly) int keyclass; // @synthesize keyclass=_keyclass;
@property(readonly) NSDictionary *secrets; // @synthesize secrets=_secrets;
@property(readonly) SecCDKeychainItemMetadata *metadata; // @synthesize metadata=_metadata;
- (id)secretsFromEncryptedData:(id)arg1 withKeybag:(int)arg2 error:(id *)arg3;	// IMP=0x000000010003fec8
- (id)encryptedSecretDataWithAttributeData:(id)arg1 keybag:(int)arg2 error:(id *)arg3;	// IMP=0x000000010003f7dc
- (id)primaryKeyStringRepresentationWithError:(id *)arg1;	// IMP=0x000000010003f404
- (id)primaryKeys;	// IMP=0x000000010003f3f4
@property(readonly) NSArray *lookupAttributes;
@property(readonly) NSDictionary *attributes;
@property(readonly) NSUUID *persistentID;
@property(readonly) SecCDKeychainAccessControlEntity *owner;
@property(readonly) SecCDKeychainItemType *itemType;
- (id)description;	// IMP=0x000000010003f220
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003f130
- (id)initWithManagedItem:(id)arg1 keychain:(id)arg2 error:(id *)arg3;	// IMP=0x000000010003ee28
- (id)initItemType:(id)arg1 withPersistentID:(id)arg2 attributes:(id)arg3 lookupAttributes:(id)arg4 secrets:(id)arg5 owner:(id)arg6 keyclass:(int)arg7;	// IMP=0x000000010003ecc0

@end

