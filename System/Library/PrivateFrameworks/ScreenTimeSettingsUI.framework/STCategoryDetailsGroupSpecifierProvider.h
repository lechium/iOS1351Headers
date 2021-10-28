/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenTimeSettingsUI/STGroupSpecifierProvider.h>

@protocol STRootViewModelCoordinator;
@class STUsageDetailsViewModel, NSObject;

@interface STCategoryDetailsGroupSpecifierProvider : STGroupSpecifierProvider {

	STUsageDetailsViewModel* _usageDetailsViewModel;
	NSObject*<STRootViewModelCoordinator> _coordinator;

}

@property (nonatomic,readonly) STUsageDetailsViewModel * usageDetailsViewModel;                //@synthesize usageDetailsViewModel=_usageDetailsViewModel - In the implementation block
@property (nonatomic,readonly) NSObject*<STRootViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
-(NSObject*<STRootViewModelCoordinator>)coordinator;
-(id)totalUsageDescription:(id)arg1 ;
-(void)showMostUsedDetailListController:(id)arg1 ;
-(id)initWithCategoryUsageItem:(id)arg1 coordinator:(id)arg2 ;
-(STUsageDetailsViewModel *)usageDetailsViewModel;
@end
