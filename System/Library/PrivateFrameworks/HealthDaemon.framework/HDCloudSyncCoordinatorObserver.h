/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDCloudSyncCoordinatorObserver
@required
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateSyncEnabled:(BOOL)arg2;
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateErrorRequiringUserAction:(id)arg2;
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateLastPushDate:(id)arg2 lastPullDate:(id)arg3;
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateRestoreCompletionDate:(id)arg2;

@end
