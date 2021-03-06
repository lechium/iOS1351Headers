/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BLTSettingSyncing <NSObject>
@required
-(void)removeSectionWithSectionID:(id)arg1;
-(void)setSectionInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3;
-(void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3;
-(void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2;
-(void)setNotificationsSoundEnabled:(int)arg1 sectionID:(id)arg2;
-(void)setNotificationsCriticalAlertEnabled:(int)arg1 sectionID:(id)arg2;

@end

