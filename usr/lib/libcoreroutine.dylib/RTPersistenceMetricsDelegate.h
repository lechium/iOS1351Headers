/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RTPersistenceMetricsDelegate <NSObject>
@required
-(void)onDailyMetricsNotification:(id)arg1;
-(void)persistenceStore:(id)arg1 didPrepareWithContext:(id)arg2;
-(void)persistenceStoreFailedWithError:(id)arg1;
-(void)persistenceStoreResetSyncWithUserInfo:(id)arg1;
-(void)persistenceDriver:(id)arg1 persistenceMigrator:(id)arg2 didStartMigratingStore:(id)arg3 withModelProvider:(id)arg4;
-(void)persistenceDriver:(id)arg1 persistenceMigrator:(id)arg2 didFinishMigratingStore:(id)arg3 withModelProvider:(id)arg4;

@end

