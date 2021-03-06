/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class STUsageDetailsViewModel, NSArray, NSString;


@protocol STUsageDetailsViewModelCoordinator <NSObject>
@property (nonatomic,readonly) STUsageDetailsViewModel * viewModel; 
@property (nonatomic,copy,readonly) NSArray * devices; 
@property (nonatomic,copy) NSString * selectedDeviceIdentifier; 
@property (getter=isRefreshing,readonly) BOOL refreshing; 
@required
-(NSArray *)devices;
-(BOOL)isRefreshing;
-(STUsageDetailsViewModel *)viewModel;
-(void)startRefreshingUsageData;
-(void)stopRefreshingUsageData;
-(void)refreshUsageData;
-(NSString *)selectedDeviceIdentifier;
-(void)setSelectedDeviceIdentifier:(id)arg1;

@end

