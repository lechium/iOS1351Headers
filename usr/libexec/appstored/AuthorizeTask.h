//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class ACAccount, NSDictionary, NSNumber, NSString;

@interface AuthorizeTask : Task
{
    ACAccount *_account;	// 8 = 0x8
    NSNumber *_accountID;	// 16 = 0x10
    unsigned int _fairplayContext;	// 24 = 0x18
    _Bool _allowSilentAuthentication;	// 28 = 0x1c
    _Bool _shouldAddKeysToKeyBag;	// 29 = 0x1d
    _Bool _displaysDialogs;	// 30 = 0x1e
    NSNumber *_familyMemberAccountID;	// 32 = 0x20
    id _authorizationToken;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    NSString *_clientIdentifierHeader;	// 56 = 0x38
    NSString *_keybagPath;	// 64 = 0x40
    NSString *_logUUID;	// 72 = 0x48
    unsigned long long _reason;	// 80 = 0x50
    NSDictionary *_response;	// 88 = 0x58
    NSString *_token;	// 96 = 0x60
    NSString *_userAgent;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000100126ae4
@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy) NSString *token; // @synthesize token=_token;
@property(readonly) NSDictionary *response; // @synthesize response=_response;
@property _Bool displaysDialogs; // @synthesize displaysDialogs=_displaysDialogs;
@property _Bool shouldAddKeysToKeyBag; // @synthesize shouldAddKeysToKeyBag=_shouldAddKeysToKeyBag;
@property unsigned long long reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(copy) NSString *keybagPath; // @synthesize keybagPath=_keybagPath;
@property(copy) NSString *clientIdentifierHeader; // @synthesize clientIdentifierHeader=_clientIdentifierHeader;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy) id authorizationToken; // @synthesize authorizationToken=_authorizationToken;
@property _Bool allowSilentAuthentication; // @synthesize allowSilentAuthentication=_allowSilentAuthentication;
@property(copy) NSNumber *familyMemberAccountID; // @synthesize familyMemberAccountID=_familyMemberAccountID;
- (_Bool)_runAuthorizationWithAuthenticationWithError:(id *)arg1;	// IMP=0x0000000100126780
- (void)_relaunchApp;	// IMP=0x0000000100126588
- (id)_performAuthorizationResult:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x0000000100126198
- (void)_main;	// IMP=0x00000001001253c4
- (_Bool)_handleAuthenticationForProxy:(id)arg1;	// IMP=0x000000010012513c
- (id)_getTokenForAccount:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000100124e24
- (id)_newBodyDictionary;	// IMP=0x0000000100124b00
- (_Bool)_handleResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100124854
- (id)_authenticateForAppleID:(id)arg1 outError:(id *)arg2;	// IMP=0x00000001001245a4
- (void)main;	// IMP=0x0000000100124598
- (id)initWithAccountID:(id)arg1;	// IMP=0x0000000100124518

@end

