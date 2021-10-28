//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AMSDTask.h"

@class ACAccount, HMHome;

@interface AMSDGenerateMultiUserTokenTask : AMSDTask
{
    _Bool _tokenNeedsRegeneration;	// 8 = 0x8
    ACAccount *_account;	// 16 = 0x10
    HMHome *_home;	// 24 = 0x18
}

+ (double)_scheduleRefreshInterval;	// IMP=0x0000000100015e78
- (void).cxx_destruct;	// IMP=0x0000000100015f74
@property(nonatomic) _Bool tokenNeedsRegeneration; // @synthesize tokenNeedsRegeneration=_tokenNeedsRegeneration;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (_Bool)_shouldGenerateInviteToken;	// IMP=0x0000000100015ed8
- (_Bool)_saveMultiUserToken:(id)arg1 forHomeParticipant:(id)arg2 iCloudAccount:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100015be0
- (id)_generateMultiUserTokenWithAction:(id)arg1 iCloudAccount:(id)arg2 inviteToken:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100015638
- (id)_generateInviteToken:(id *)arg1 forHomeParticipant:(id)arg2;	// IMP=0x0000000100015070
- (id)_generateAppProvidedDataWithAction:(id)arg1 inviteToken:(id)arg2;	// IMP=0x0000000100014c1c
- (id)performTask;	// IMP=0x0000000100013cb0
- (id)initWithAccount:(id)arg1 home:(id)arg2;	// IMP=0x0000000100013bfc

@end
