//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSBaseMessage.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface IDSProfileMessage : IDSBaseMessage <NSCopying>
{
    NSData *_pushCert;	// 232 = 0xe8
    struct __SecKey *_pushKey;	// 240 = 0xf0
    struct __SecKey *_pushPublicKey;	// 248 = 0xf8
    NSData *_pushToken;	// 256 = 0x100
    NSString *_authToken;	// 264 = 0x108
    NSString *_profileID;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0000000100124978
@property(copy, nonatomic) NSString *profileID; // @synthesize profileID=_profileID;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) struct __SecKey *pushPublicKey; // @synthesize pushPublicKey=_pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey; // @synthesize pushPrivateKey=_pushKey;
@property(copy, nonatomic) NSData *pushCertificate; // @synthesize pushCertificate=_pushCert;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0000000100124624
- (id)additionalMessageHeaders;	// IMP=0x000000010012430c
- (id)additionalMessageHeadersForOutgoingPush;	// IMP=0x0000000100123f3c
- (_Bool)hasRequiredKeys:(id *)arg1;	// IMP=0x0000000100123d74
- (long long)responseCommand;	// IMP=0x0000000100123d5c
- (long long)command;	// IMP=0x0000000100123d44
- (_Bool)wantsBinaryPush;	// IMP=0x0000000100123d28
- (_Bool)wantsCompressedBody;	// IMP=0x0000000100123d0c
- (_Bool)wantsHTTPHeaders;	// IMP=0x0000000100123cf0
- (_Bool)wantsBagKey;	// IMP=0x0000000100123cd4
- (void)dealloc;	// IMP=0x0000000100123a68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100123824
- (id)init;	// IMP=0x0000000100123688

@end
