//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSMessageHashStore, IDSRegistrationKeyManager;

@interface IDSMessageHashChecker : NSObject
{
    _Bool _usePairingKey;	// 8 = 0x8
    IDSRegistrationKeyManager *_registrationKeyManager;	// 16 = 0x10
    IDSMessageHashStore *_messageHashStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001a3aa8
@property(retain, nonatomic) IDSMessageHashStore *messageHashStore; // @synthesize messageHashStore=_messageHashStore;
@property(nonatomic) _Bool usePairingKey; // @synthesize usePairingKey=_usePairingKey;
@property(readonly, nonatomic) IDSRegistrationKeyManager *registrationKeyManager; // @synthesize registrationKeyManager=_registrationKeyManager;
- (id)_legacyIdentity;	// IMP=0x00000001001a38f4
- (_Bool)allowMessageData:(id)arg1 withDelayedCommitBlock:(CDUnknownBlockType *)arg2;	// IMP=0x00000001001a35fc
- (_Bool)allowMessageData:(id)arg1;	// IMP=0x00000001001a3414
- (id)initWithRegistrationKeyManager:(id)arg1 messageHashStore:(id)arg2 usePairingKey:(_Bool)arg3;	// IMP=0x00000001001a32c8
- (id)initWithRegistrationKeyManager:(id)arg1;	// IMP=0x00000001001a31c8

@end
