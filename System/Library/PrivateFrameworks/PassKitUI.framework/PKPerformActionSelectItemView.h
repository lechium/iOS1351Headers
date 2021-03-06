/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:32 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/PKPerformActionView.h>

@protocol PKPerformActionViewDelegate;
@class UITextField, PKPass, PKPaymentPassAction, NSDateFormatter, PKSelectedItemActionItem, UITableView, PKPerformActionSelectItemExpiresHeader, NSString;

@interface PKPerformActionSelectItemView : UIView <UITableViewDelegate, UITableViewDataSource, PKPerformActionView> {

	PKPass* _pass;
	PKPaymentPassAction* _action;
	NSDateFormatter* _dateFormatter;
	PKSelectedItemActionItem* _selectedItem;
	UITableView* _tableView;
	PKPerformActionSelectItemExpiresHeader* _expiresHeader;
	id<PKPerformActionViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PKPerformActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * amountTextField; 
-(id)init;
-(id<PKPerformActionViewDelegate>)delegate;
-(void)setDelegate:(id<PKPerformActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)transactionAmount;
-(id)pass;
-(id)serviceProviderData;
-(id)transactionCurrency;
-(UITextField *)amountTextField;
-(id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3 ;
-(void)_addSubviews;
-(void)saveLastInputValues;
-(BOOL)_showsExpirationSection;
-(id)_optionsSectionHeaderText;
-(id)_optionsSectionFooterText;
@end

