//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSDAccountManager : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0000000100038cc4
- (_Bool)whitelisted:(id)arg1;	// IMP=0x000000010003e760
- (id)authenticationFor:(id)arg1 password:(id)arg2 accountType:(id)arg3 serviceType:(long long)arg4 error:(id *)arg5;	// IMP=0x000000010003e004
- (_Bool)disableFMIP:(id)arg1 password:(id)arg2 error:(id *)arg3;	// IMP=0x000000010003d444
- (_Bool)signOutiCloudAccount:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003ce28
- (_Bool)signIniCloudAccount:(id)arg1 password:(id)arg2 features:(id)arg3 error:(id *)arg4;	// IMP=0x000000010003afc8
- (void)signOutiTunesAccount;	// IMP=0x000000010003ab3c
- (_Bool)signIniTunesAccount:(id)arg1 password:(id)arg2 error:(id *)arg3;	// IMP=0x000000010003a398
- (id)existingAccounts;	// IMP=0x000000010003a180
- (_Bool)setupiTunes:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100039d08
- (_Bool)setupiCloud:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000397a0
- (_Bool)trySetupAccounts:(id *)arg1;	// IMP=0x000000010003905c
- (_Bool)setupAccounts:(id *)arg1;	// IMP=0x0000000100038d30

@end

