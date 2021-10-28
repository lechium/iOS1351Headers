//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, SSURLConnectionResponse;

@interface AuthorizeMachineOperation : ISOperation
{
    NSNumber *_accountIdentifier;	// 96 = 0x60
    _Bool _allowSilentAuthentication;	// 104 = 0x68
    NSString *_clientIdentifierHeader;	// 112 = 0x70
    NSNumber *_familyMemberAccountIdentifier;	// 120 = 0x78
    NSString *_keybagPath;	// 128 = 0x80
    long long _mdRetryCount;	// 136 = 0x88
    NSString *_mdSyncState;	// 144 = 0x90
    NSString *_reason;	// 152 = 0x98
    SSURLConnectionResponse *_response;	// 160 = 0xa0
    _Bool _shouldAddKeysToKeyBag;	// 168 = 0xa8
    _Bool _shouldPromptForCredentials;	// 169 = 0xa9
    id _token;	// 176 = 0xb0
    NSString *_userAgent;	// 184 = 0xb8
}

- (void)_setResponse:(id)arg1;	// IMP=0x000000010009df10
- (_Bool)_runAuthorizationWithAuthentication:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000010009d980
- (_Bool)_runAuthentication:(id *)arg1;	// IMP=0x000000010009d77c
- (void)_run;	// IMP=0x000000010009d2d4
- (id)_newURLOperation;	// IMP=0x000000010009cff4
- (id)_newMachineDataOperationWithResponse:(id)arg1;	// IMP=0x000000010009cf2c
- (id)_newBodyDictionary;	// IMP=0x000000010009ca18
- (id)_newAuthenticationContext;	// IMP=0x000000010009c8d0
- (_Bool)_handleResponse:(id)arg1 error:(id *)arg2;	// IMP=0x000000010009c650
- (id)_accountIdentifier;	// IMP=0x000000010009c5fc
- (void)run;	// IMP=0x000000010009c5f0
@property(copy) NSString *userAgent;
@property _Bool shouldPromptForCredentials;
@property _Bool shouldAddKeysToKeyBag;
@property(copy) NSString *reason;
@property(copy) NSString *keybagPath;
@property(copy) NSNumber *familyMemberAccountIdentifier;
@property(copy) NSString *clientIdentifierHeader;
@property(copy) id authorizationToken;
@property _Bool allowSilentAuthentication;
@property(copy) NSNumber *accountIdentifier;
@property(readonly) SSURLConnectionResponse *response;
- (void)dealloc;	// IMP=0x000000010009bde0
- (id)initWithAuthorizationRequest:(id)arg1;	// IMP=0x000000010009bcbc

@end
