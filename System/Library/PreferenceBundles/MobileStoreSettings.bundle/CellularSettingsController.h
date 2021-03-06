/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@class ISURLBag, ASDCellularSettings;

@interface CellularSettingsController : PSListController {

	ISURLBag* _bag;
	ASDCellularSettings* _settings;

}

@property (nonatomic,retain) ASDCellularSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) ISURLBag * bag;                              //@synthesize bag=_bag - In the implementation block
-(id)init;
-(ASDCellularSettings *)settings;
-(void)setSettings:(ASDCellularSettings *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(ISURLBag *)bag;
-(void)setBag:(ISURLBag *)arg1 ;
-(id)_formattedNetworkLimit;
@end

