//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSUserDefaults;

@interface NFRemoteAdminStorage : NSObject
{
    NSUserDefaults *_ud;	// 8 = 0x8
    NSMutableDictionary *_serversForApplets;	// 16 = 0x10
    NSMutableDictionary *_serverStates;	// 24 = 0x18
    NSMutableArray *_redirectStates;	// 32 = 0x20
    NSData *_apnToken;	// 40 = 0x28
    unsigned long long _jcopSeqCounter;	// 48 = 0x30
    NSString *_seosPlatformID;	// 56 = 0x38
}

+ (id)sharedStorage;	// IMP=0x00000001000221fc
- (id)redirectStateForIdentifier:(id)arg1;	// IMP=0x0000000100025eb0
- (id)redirectStateForTaskID:(id)arg1;	// IMP=0x0000000100025d34
- (void)removeRedirectState:(id)arg1;	// IMP=0x0000000100025cd0
- (void)addRedirectState:(id)arg1;	// IMP=0x0000000100025c6c
@property(readonly) NSArray *redirectStates;
- (void)saveRedirectStates;	// IMP=0x0000000100025a24
- (id)nextRequestForServer:(id)arg1 session:(id)arg2;	// IMP=0x00000001000251d4
- (void)saveServerStates;	// IMP=0x0000000100024fec
- (id)serverStateForIdentifier:(id)arg1;	// IMP=0x0000000100024e98
@property(readonly) NSArray *serverStates;
- (void)resetAPNConnectionRequest;	// IMP=0x0000000100024c00
- (void)setAPNConnectionRequesterPush:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000001000249a4
@property(copy) NSDictionary *APNConnectionRequesterManual;
@property(copy) NSData *APNTokenUpdateInfo;
@property(readonly, copy, nonatomic) NSDictionary *SEOSUpdateInfo;
@property(nonatomic) _Bool hasSEOSUpdated;
@property(readonly, copy, nonatomic) NSDictionary *JCOPUpdateInfo;
@property(nonatomic) _Bool hasJCOPUpdated;
- (void)setServerIdentifier:(id)arg1 forAppletID:(id)arg2;	// IMP=0x0000000100023f68
- (id)serverIdentifierForAppletID:(id)arg1;	// IMP=0x0000000100023f08
@property(readonly) NSString *defaultServerIdentifier;
- (id)serverURLStringForIdentifier:(id)arg1;	// IMP=0x0000000100023d68
- (id)serverURLForIdentifier:(id)arg1;	// IMP=0x0000000100023be0
- (_Bool)setRegistrationInfo:(id)arg1 defaultServerIdentifier:(id)arg2;	// IMP=0x0000000100023910
@property(readonly) NSDictionary *registrationInfo;
- (void)_importLegacyRegistration;	// IMP=0x00000001000232f8
- (void)setSEOSPlatformID:(id)arg1;	// IMP=0x00000001000232c4
- (void)setJCOPSequenceCounter:(unsigned long long)arg1;	// IMP=0x00000001000232bc
- (void)_fixupRedirectState;	// IMP=0x0000000100022eb0
- (void)_fixupAdminStates;	// IMP=0x0000000100022c28
- (void)_updateAdminStatesURL;	// IMP=0x0000000100022a50
- (void)dealloc;	// IMP=0x00000001000229e8
- (id)init;	// IMP=0x0000000100022260

@end
