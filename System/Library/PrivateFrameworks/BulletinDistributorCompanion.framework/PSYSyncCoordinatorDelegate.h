/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSYSyncCoordinatorDelegate <NSObject>
@optional
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
-(void)supportsMigrationSync;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;

@end
