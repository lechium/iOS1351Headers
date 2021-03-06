/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSSpecifier.h>

@class PSUICellularPlanManagerCache, PSUICellularPlanUniversalReference;

@interface PSUICellularPlanLabelSpecifier : PSSpecifier {

	PSUICellularPlanManagerCache* _planManagerCache;
	PSUICellularPlanUniversalReference* _planReference;

}

@property (nonatomic,retain) PSUICellularPlanManagerCache * planManagerCache;                 //@synthesize planManagerCache=_planManagerCache - In the implementation block
@property (nonatomic,retain) PSUICellularPlanUniversalReference * planReference;              //@synthesize planReference=_planReference - In the implementation block
-(id)cellularPlanLabel:(id)arg1 ;
-(void)updateValuesAndTitles;
-(id)initWithPlanUniversalReference:(id)arg1 planManagerCache:(id)arg2 ;
-(PSUICellularPlanManagerCache *)planManagerCache;
-(void)setPlanManagerCache:(PSUICellularPlanManagerCache *)arg1 ;
-(PSUICellularPlanUniversalReference *)planReference;
-(void)setPlanReference:(PSUICellularPlanUniversalReference *)arg1 ;
@end

