/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WLDataMigrationDelegate <NSObject>
@required
-(void)dataMigratorDidGetInterrupted;
-(void)dataMigrator:(id)arg1 didFailWithError:(id)arg2;
-(void)dataMigratorDidBecomeRestartable:(id)arg1;
-(void)dataMigratorDidFinish:(id)arg1 withImportErrors:(BOOL)arg2;
-(void)dataMigrator:(id)arg1 didUpdateMigrationState:(unsigned long long)arg2;
-(void)dataMigrator:(id)arg1 didUpdateProgressPercentage:(float)arg2;
-(void)dataMigrator:(id)arg1 didUpdateRemainingDownloadTime:(double)arg2;

@end

