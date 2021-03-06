/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface BLTSectionConfigurationInternal : NSObject {

	NSDictionary* _configurations;

}
-(id)init;
-(id)_loadConfigurations;
-(unsigned long long)coordinationTypeForSectionID:(id)arg1 subtype:(long long)arg2 category:(id)arg3 ;
-(unsigned long long)coordinationTypeForSectionID:(id)arg1 subtype:(long long)arg2 ;
-(BOOL)hasSectionIDOptedOutOfAttachmentCoordination:(id)arg1 ;
-(BOOL)shouldSectionIDSettingsAlwaysSync:(id)arg1 ;
-(BOOL)shouldSectionIDAlwaysAlert:(id)arg1 ;
-(BOOL)hasSectionIDOptedOutOfWaitForUserIdle:(id)arg1 ;
-(BOOL)hasSectionIDOptedOutOfNotificationTuning:(id)arg1 ;
-(BOOL)hasSectionIDDisplayedCriticalBulletins:(id)arg1 ;
-(BOOL)applyWhitelistToChildSections:(id)arg1 ;
-(unsigned long long)legacyMapLocationForSectionID:(id)arg1 ;
-(id)watchVersionThatUsesUserInfoForContextForSectionID:(id)arg1 ;
-(id)additionalBridgeSectionIDsForSectionID:(id)arg1 ;
-(BOOL)hasSectionIDOptedOutOfSubtitleRemovalForOlderWatches:(id)arg1 ;
-(BOOL)shouldUsePhoneExpirationDateForSectionID:(id)arg1 ;
-(BOOL)hasSectionIDOptedOutOfSettingsCoordination:(id)arg1 ;
-(BOOL)setCoordinationType:(unsigned long long)arg1 sectionID:(id)arg2 ;
-(id)watchVersionThatUsesAttachmentURLForSectionID:(id)arg1 ;
@end

