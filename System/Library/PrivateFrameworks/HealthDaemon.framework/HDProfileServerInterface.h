/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDProfileServerInterface <NSObject>
@required
-(void)remote_setDisplayFirstName:(id)arg1 lastName:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_deleteProfile:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_getAllProfilesWithCompletion:(/*^block*/id)arg1;
-(void)remote_profileIdentifierForNRDeviceUUID:(id)arg1 completion:(/*^block*/id)arg2;

@end

