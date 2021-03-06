//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMSystemMonitorListener-Protocol.h"

@class NSMutableArray, NSMutableDictionary;
@protocol FTPasswordManager, IDSAppleIDRegistrationCenterMessageDelivery;

@interface IDSAppleIDRegistrationCenter : NSObject <IMSystemMonitorListener>
{
    NSMutableDictionary *_queues;	// 8 = 0x8
    NSMutableArray *_handlers;	// 16 = 0x10
    id <IDSAppleIDRegistrationCenterMessageDelivery> _messageDelivery;	// 24 = 0x18
    id <FTPasswordManager> _passwordManager;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001005b9db4
- (void).cxx_destruct;	// IMP=0x00000001005c20d4
- (void)removeListener:(id)arg1;	// IMP=0x00000001005c2038
- (void)addListener:(id)arg1;	// IMP=0x00000001005c1f68
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x00000001005c1e6c
- (_Bool)authenticateRegistration:(id)arg1;	// IMP=0x00000001005c1cf8
- (_Bool)authenticateRegistration:(id)arg1 requireSilentAuth:(_Bool)arg2;	// IMP=0x00000001005c1b70
- (_Bool)authenticateRegistration:(id)arg1 forceNewToken:(_Bool)arg2;	// IMP=0x00000001005c19e8
- (_Bool)validateRegion:(id)arg1 phoneNumber:(id)arg2 forRegistration:(id)arg3;	// IMP=0x00000001005c1800
- (_Bool)queryInitialInvitationContextForRegistration:(id)arg1;	// IMP=0x00000001005c1690
- (_Bool)_queryInitialInvitationContextForRegistration:(id)arg1;	// IMP=0x00000001005c1100
- (_Bool)_validateRegionID:(id)arg1 phoneNumber:(id)arg2 registration:(id)arg3;	// IMP=0x00000001005c0ac8
- (_Bool)_registrationNeedsAuthentication:(id)arg1;	// IMP=0x00000001005c098c
- (_Bool)_registrationIsAuthenticating:(id)arg1;	// IMP=0x00000001005c08c8
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2 failIfNotSilent:(_Bool)arg3;	// IMP=0x00000001005c0294
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2;	// IMP=0x00000001005c0208
- (void)_fetchTokenForRegistrationInfo:(id)arg1 failIfNotSilent:(_Bool)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001005bf6d0
- (void)_renewTokenForRegistrationInfo:(id)arg1 failIfNotSilent:(_Bool)arg2;	// IMP=0x00000001005bec64
- (void)_noteSuccessfulToken:(id)arg1 profileID:(id)arg2 selfID:(id)arg3 forRegistrationInfo:(id)arg4 wasFetched:(_Bool)arg5;	// IMP=0x00000001005be674
- (void)_processRegionValidationMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;	// IMP=0x00000001005be1cc
- (void)_processDefaultInvitationContextMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;	// IMP=0x00000001005bdd84
- (void)_postUserNotificationWithTitle:(id)arg1 message:(id)arg2 identifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001005bdae0
- (void)_notifyAuthenticationSuccess:(id)arg1;	// IMP=0x00000001005bd4f4
- (void)_notifyAuthenticationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x00000001005bca58
- (void)_notifyAuthenticating:(id)arg1;	// IMP=0x00000001005bc630
- (void)_notifyRegionValidationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x00000001005bbccc
- (void)_notifyRegionValidationSuccess:(id)arg1 regionID:(id)arg2 phoneNumber:(id)arg3 context:(id)arg4 verified:(_Bool)arg5;	// IMP=0x00000001005bb5c8
- (void)_notifyInitialRegionQuerySuccess:(id)arg1;	// IMP=0x00000001005bb184
- (void)_removeMessageForRegistration:(id)arg1 fromQueueForKey:(id)arg2;	// IMP=0x00000001005bae04
- (_Bool)_haveQueuedMessageForRegistration:(id)arg1 inQueueForKey:(id)arg2;	// IMP=0x00000001005baa9c
- (void)_serviceQueueForKey:(id)arg1;	// IMP=0x00000001005ba638
- (void)_setQueue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001005ba4d8
- (id)_queueForKey:(id)arg1;	// IMP=0x00000001005ba348
- (void)dealloc;	// IMP=0x00000001005ba22c
- (id)init;	// IMP=0x00000001005ba10c
- (id)initWithMessageDelivery:(id)arg1 passwordManager:(id)arg2;	// IMP=0x00000001005b9f7c

@end

