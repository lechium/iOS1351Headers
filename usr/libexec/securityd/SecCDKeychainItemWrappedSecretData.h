//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, _SFAuthenticatedCiphertext;

__attribute__((visibility("hidden")))
@interface SecCDKeychainItemWrappedSecretData : NSObject <NSSecureCoding>
{
    _SFAuthenticatedCiphertext *_ciphertext;	// 8 = 0x8
    NSData *_wrappedKeyData;	// 16 = 0x10
    NSData *_refKeyBlob;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000397b4
- (void).cxx_destruct;	// IMP=0x0000000100039778
@property(readonly) NSData *refKeyBlob; // @synthesize refKeyBlob=_refKeyBlob;
@property(readonly) NSData *wrappedKeyData; // @synthesize wrappedKeyData=_wrappedKeyData;
@property(readonly) _SFAuthenticatedCiphertext *ciphertext; // @synthesize ciphertext=_ciphertext;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000396d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100039470
- (id)initWithCiphertext:(id)arg1 wrappedKeyData:(id)arg2 refKeyBlob:(id)arg3;	// IMP=0x0000000100039380

@end

