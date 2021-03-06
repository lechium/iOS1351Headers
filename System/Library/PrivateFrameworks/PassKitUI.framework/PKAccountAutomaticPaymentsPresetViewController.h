/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKSectionTableViewController.h>

@class PKAccountAutomaticPaymentsController, PKAccount, PKTableHeaderView, NSIndexPath, NSArray;

@interface PKAccountAutomaticPaymentsPresetViewController : PKSectionTableViewController {

	PKAccountAutomaticPaymentsController* _controller;
	PKAccount* _account;
	unsigned long long _featureIdentifier;
	PKTableHeaderView* _tableHeaderView;
	NSIndexPath* _selectedIndexPath;
	NSArray* _paymentPresets;

}
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableHeaderView;
-(id)initWithController:(id)arg1 ;
-(void)_handleNext:(id)arg1 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
@end

