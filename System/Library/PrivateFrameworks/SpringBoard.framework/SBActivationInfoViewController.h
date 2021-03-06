/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/STTelephonyStateObserver.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSString, NSArray, UIView, UITableView, NSLayoutConstraint, UIButton;

@interface SBActivationInfoViewController : UIViewController <STTelephonyStateObserver, UITableViewDataSource, UITableViewDelegate> {

	NSString* _meid;
	NSString* _serial;
	NSArray* _mobileEquipmentInfo;
	NSArray* _mobileSubscriptionInfo;
	UIView* _containerView;
	UITableView* _activationInfoTableView;
	NSLayoutConstraint* _activationInfoTableViewHeight;
	UIButton* _regulatoryInfoButton;

}

@property (nonatomic,readonly) UIButton * regulatoryInfoButton;              //@synthesize regulatoryInfoButton=_regulatoryInfoButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)_titleForHeaderInSection:(long long)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(void)mobileEquipmentInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(UIButton *)regulatoryInfoButton;
-(void)_updateMobileEquipmentInfo;
-(void)_telephonyStateChanged;
-(id)_activationInfoCell;
-(id)_backgroundViewForHeaderView:(id)arg1 ;
-(id)_processMobileEquipmentInfo:(id)arg1 ;
-(id)_processMobileSubscriptionInfo;
-(id)_processDeviceInfo;
-(id)_formattedIMEI:(id)arg1 ;
-(id)_formattedCSN:(id)arg1 ;
-(id)_formattedICCID:(id)arg1 ;
-(id)_formattedString:(id)arg1 withSpaceAfterDigits:(unsigned long long)arg2 ;
@end

