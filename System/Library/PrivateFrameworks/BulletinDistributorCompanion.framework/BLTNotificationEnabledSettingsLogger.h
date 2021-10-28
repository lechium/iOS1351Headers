/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BLTSectionInfoList;

@interface BLTNotificationEnabledSettingsLogger : NSObject {

	double _lastLogTime;
	BLTSectionInfoList* _sectionInfoList;

}

@property (nonatomic,retain) BLTSectionInfoList * sectionInfoList;              //@synthesize sectionInfoList=_sectionInfoList - In the implementation block
+(id)sharedNotificationEnabledSettingsLogger:(id)arg1 ;
-(id)init;
-(void)_log;
-(void)_performActivity:(id)arg1 ;
-(void)_registerActivity;
-(void)setSectionInfoList:(BLTSectionInfoList *)arg1 ;
-(BLTSectionInfoList *)sectionInfoList;
@end
