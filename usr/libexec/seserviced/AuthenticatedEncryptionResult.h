//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface AuthenticatedEncryptionResult : NSObject
{
    NSData *_cipherText;	// 8 = 0x8
    NSData *_authenticationTag;	// 16 = 0x10
}

+ (id)withCipherText:(id)arg1 authenticationTag:(id)arg2;	// IMP=0x000000010002e624
- (void).cxx_destruct;	// IMP=0x000000010002e6b4
@property(readonly, nonatomic) NSData *authenticationTag; // @synthesize authenticationTag=_authenticationTag;
@property(readonly, nonatomic) NSData *cipherText; // @synthesize cipherText=_cipherText;

@end
