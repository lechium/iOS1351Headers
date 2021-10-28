//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSAccountSigningKeyKeychainAdapter-Protocol.h"

@class NSString;

@interface IDSAccountSigningKeyKeychainAdapter : NSObject <IDSAccountSigningKeyKeychainAdapter>
{
}

- (int)syncCircleStatusWithError:(id *)arg1;	// IMP=0x00000001005e724c
- (id)externalRepresentation:(struct __SecKey *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00000001005e720c
- (struct __SecKey *)copyPublicKey:(struct __SecKey *)arg1;	// IMP=0x00000001005e71e0
- (_Bool)verifySignature:(struct __CFData *)arg1 overData:(struct __CFData *)arg2 withKey:(struct __SecKey *)arg3 algorithm:(struct __CFString *)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000001005e7184
- (id)createSignatureWithKey:(struct __SecKey *)arg1 algorithm:(struct __CFString *)arg2 overData:(struct __CFData *)arg3 error:(struct __CFError **)arg4;	// IMP=0x00000001005e7134
- (int)deleteWithQuery:(struct __CFDictionary *)arg1;	// IMP=0x00000001005e7108
- (int)copyMatchingWithQuery:(struct __CFDictionary *)arg1 outData:(const void **)arg2;	// IMP=0x00000001005e70d4
- (struct __SecKey *)createRandomKeyWithQuery:(struct __CFDictionary *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00000001005e70a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
