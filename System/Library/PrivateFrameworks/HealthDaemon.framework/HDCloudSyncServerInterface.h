/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDCloudSyncServerInterface <NSObject>
@required
-(id)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3;
-(id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(/*^block*/id)arg1;
-(void)remote_fetchCloudSyncStatusWithCompletion:(/*^block*/id)arg1;
-(id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(/*^block*/id)arg1;
-(id)remote_fetchCloudSyncProgressWithCompletion:(/*^block*/id)arg1;
-(id)remote_forceCloudResetWithCompletion:(/*^block*/id)arg1;
-(id)remote_fetchCloudDescriptionWithCompletion:(/*^block*/id)arg1;
-(void)remote_disableCloudSyncWithCompletion:(/*^block*/id)arg1;
-(void)remote_enableCloudSyncWithCompletion:(/*^block*/id)arg1;
-(void)remote_accountConfigurationDidChangeWithCompletion:(/*^block*/id)arg1;
-(void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(/*^block*/id)arg1;

@end

