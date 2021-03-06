//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BAASupportDelegate-Protocol.h"

@class NSString;

@interface BAADelegateImpl : NSObject <BAASupportDelegate>
{
}

+ (int)getBlessedUser:(unsigned int *)arg1 keybagUUID:(unsigned char [16])arg2;	// IMP=0x00000001000f43f0
+ (int)confirmSigKey:(unsigned int)arg1 status:(int)arg2;	// IMP=0x00000001000f4308
+ (int)getSigKeyCertificates:(unsigned int)arg1 certificates:(id *)arg2;	// IMP=0x00000001000f411c
+ (int)getSigKeyExpDate:(unsigned int)arg1 expirationDate:(unsigned long long *)arg2;	// IMP=0x00000001000f3fcc
+ (int)setSigKey:(unsigned int)arg1 expirationDate:(unsigned long long)arg2 keyData:(id)arg3 certificates:(id)arg4;	// IMP=0x00000001000f3b9c
+ (int)generateSigKey:(unsigned int)arg1 keyData:(id *)arg2 attestation:(id *)arg3 pubKey:(id *)arg4;	// IMP=0x00000001000f3858
+ (_Bool)isInternal;	// IMP=0x00000001000f3818

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

