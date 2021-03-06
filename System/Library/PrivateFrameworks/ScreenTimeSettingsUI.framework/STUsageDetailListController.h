/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenTimeSettingsUI/STPINListViewController.h>

@class STTestGroupSpecifierProvider, STSegmentedControlGroupSpecifierProvider, STScreenTimeUsageGroupSpecifierProvider, STAllowanceProgressGroupSpecifierProvider, STMostUsedGroupSpecifierProvider, STNotificationsUsageGroupSpecifierProvider, STDevicePickupsUsageGroupSpecifierProvider, STNoUsageDataView, STDatePickerBar, NSLayoutConstraint;

@interface STUsageDetailListController : STPINListViewController {

	STTestGroupSpecifierProvider* _testProvider;
	STSegmentedControlGroupSpecifierProvider* _segmentedControlProvider;
	STScreenTimeUsageGroupSpecifierProvider* _screenTimeProvider;
	STAllowanceProgressGroupSpecifierProvider* _allowancesProvider;
	STMostUsedGroupSpecifierProvider* _mostUsedProvider;
	STNotificationsUsageGroupSpecifierProvider* _notificationsProvider;
	STDevicePickupsUsageGroupSpecifierProvider* _pickupsProvider;
	STNoUsageDataView* _noUsageDataView;
	STDatePickerBar* _datePickerBar;
	NSLayoutConstraint* _datePickerTopConstraint;
	NSLayoutConstraint* _datePickerBottomConstraint;

}

@property (retain) STTestGroupSpecifierProvider * testProvider;                                      //@synthesize testProvider=_testProvider - In the implementation block
@property (retain) STSegmentedControlGroupSpecifierProvider * segmentedControlProvider;              //@synthesize segmentedControlProvider=_segmentedControlProvider - In the implementation block
@property (retain) STScreenTimeUsageGroupSpecifierProvider * screenTimeProvider;                     //@synthesize screenTimeProvider=_screenTimeProvider - In the implementation block
@property (retain) STAllowanceProgressGroupSpecifierProvider * allowancesProvider;                   //@synthesize allowancesProvider=_allowancesProvider - In the implementation block
@property (retain) STMostUsedGroupSpecifierProvider * mostUsedProvider;                              //@synthesize mostUsedProvider=_mostUsedProvider - In the implementation block
@property (retain) STNotificationsUsageGroupSpecifierProvider * notificationsProvider;               //@synthesize notificationsProvider=_notificationsProvider - In the implementation block
@property (retain) STDevicePickupsUsageGroupSpecifierProvider * pickupsProvider;                     //@synthesize pickupsProvider=_pickupsProvider - In the implementation block
@property (retain) STNoUsageDataView * noUsageDataView;                                              //@synthesize noUsageDataView=_noUsageDataView - In the implementation block
@property (retain) STDatePickerBar * datePickerBar;                                                  //@synthesize datePickerBar=_datePickerBar - In the implementation block
@property (getter=isDatePickerHidden) BOOL datePickerHidden; 
@property (retain) NSLayoutConstraint * datePickerTopConstraint;                                     //@synthesize datePickerTopConstraint=_datePickerTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * datePickerBottomConstraint;                                  //@synthesize datePickerBottomConstraint=_datePickerBottomConstraint - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setCoordinator:(id)arg1 ;
-(void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(STNoUsageDataView *)noUsageDataView;
-(void)setTestProvider:(STTestGroupSpecifierProvider *)arg1 ;
-(void)setSegmentedControlProvider:(STSegmentedControlGroupSpecifierProvider *)arg1 ;
-(void)setScreenTimeProvider:(STScreenTimeUsageGroupSpecifierProvider *)arg1 ;
-(void)setAllowancesProvider:(STAllowanceProgressGroupSpecifierProvider *)arg1 ;
-(void)setMostUsedProvider:(STMostUsedGroupSpecifierProvider *)arg1 ;
-(void)setPickupsProvider:(STDevicePickupsUsageGroupSpecifierProvider *)arg1 ;
-(void)setNotificationsProvider:(STNotificationsUsageGroupSpecifierProvider *)arg1 ;
-(void)setNoUsageDataView:(STNoUsageDataView *)arg1 ;
-(void)_leftDatePickerBarButtonTapped:(id)arg1 ;
-(void)_rightDatePickerBarButtonTapped:(id)arg1 ;
-(void)setDatePickerBar:(STDatePickerBar *)arg1 ;
-(void)setDatePickerTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDatePickerBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(STMostUsedGroupSpecifierProvider *)mostUsedProvider;
-(STScreenTimeUsageGroupSpecifierProvider *)screenTimeProvider;
-(STDatePickerBar *)datePickerBar;
-(STSegmentedControlGroupSpecifierProvider *)segmentedControlProvider;
-(STAllowanceProgressGroupSpecifierProvider *)allowancesProvider;
-(STDevicePickupsUsageGroupSpecifierProvider *)pickupsProvider;
-(STNotificationsUsageGroupSpecifierProvider *)notificationsProvider;
-(void)_hasUsageDataDidChange:(BOOL)arg1 ;
-(void)_devicesDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)setDatePickerHidden:(BOOL)arg1 ;
-(void)_showDeviceSelectionAlertController:(id)arg1 ;
-(void)_setSelectedUsageReportType:(unsigned long long)arg1 ;
-(void)_setSelectedDeviceIdentifier:(id)arg1 ;
-(NSLayoutConstraint *)datePickerTopConstraint;
-(NSLayoutConstraint *)datePickerBottomConstraint;
-(BOOL)isDatePickerHidden;
-(STTestGroupSpecifierProvider *)testProvider;
@end

