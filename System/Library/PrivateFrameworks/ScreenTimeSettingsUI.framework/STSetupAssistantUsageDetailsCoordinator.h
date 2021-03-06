/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/STUsageDetailsViewModelCoordinator.h>

@class STUsageDetailsViewModel, NSArray, NSString;

@interface STSetupAssistantUsageDetailsCoordinator : NSObject <STUsageDetailsViewModelCoordinator> {

	BOOL _refreshing;
	NSArray* _devices;
	NSString* _selectedDeviceIdentifier;
	STUsageDetailsViewModel* _viewModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) STUsageDetailsViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * devices;                           //@synthesize devices=_devices - In the implementation block
@property (nonatomic,copy) NSString * selectedDeviceIdentifier;                  //@synthesize selectedDeviceIdentifier=_selectedDeviceIdentifier - In the implementation block
@property (getter=isRefreshing,readonly) BOOL refreshing;                        //@synthesize refreshing=_refreshing - In the implementation block
-(id)init;
-(NSArray *)devices;
-(BOOL)isRefreshing;
-(STUsageDetailsViewModel *)viewModel;
-(void)startRefreshingUsageData;
-(void)stopRefreshingUsageData;
-(void)refreshUsageData;
-(NSString *)selectedDeviceIdentifier;
-(void)setSelectedDeviceIdentifier:(NSString *)arg1 ;
-(id)_introUsageItemsWithStartDate:(id)arg1 ;
-(id)appConfigByIdentifier;
-(id)categoryConfigByIdentifier;
@end

