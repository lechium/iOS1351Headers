//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface FMDAccount : NSObject
{
    unsigned char _activityState;	// 8 = 0x8
    NSString *_oneTimeRemoveAuthToken;	// 16 = 0x10
    NSString *_username;	// 24 = 0x18
    NSString *_serverHost;	// 32 = 0x20
    NSString *_serverProtocolScheme;	// 40 = 0x28
    NSString *_apsEnvironment;	// 48 = 0x30
    unsigned long long _unregisterState;	// 56 = 0x38
    NSDate *_lastUnregisterFailedTime;	// 64 = 0x40
    NSArray *_versionHistory;	// 72 = 0x48
    NSDate *_accountAddTime;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010002af70
@property(nonatomic) unsigned char activityState; // @synthesize activityState=_activityState;
@property(retain, nonatomic) NSDate *accountAddTime; // @synthesize accountAddTime=_accountAddTime;
@property(retain, nonatomic) NSArray *versionHistory; // @synthesize versionHistory=_versionHistory;
@property(retain, nonatomic) NSDate *lastUnregisterFailedTime; // @synthesize lastUnregisterFailedTime=_lastUnregisterFailedTime;
@property(nonatomic) unsigned long long unregisterState; // @synthesize unregisterState=_unregisterState;
@property(retain, nonatomic) NSString *apsEnvironment; // @synthesize apsEnvironment=_apsEnvironment;
@property(retain) NSString *serverProtocolScheme; // @synthesize serverProtocolScheme=_serverProtocolScheme;
@property(retain) NSString *serverHost; // @synthesize serverHost=_serverHost;
@property(retain) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *oneTimeRemoveAuthToken; // @synthesize oneTimeRemoveAuthToken=_oneTimeRemoveAuthToken;
- (void)copyInfoFromAccount:(id)arg1;	// IMP=0x000000010002ad18
@property(readonly, nonatomic) NSString *apsEnvironmentConstant;
@property(readonly, nonatomic) NSString *authToken;
@property(readonly, nonatomic) NSString *authId;

@end

