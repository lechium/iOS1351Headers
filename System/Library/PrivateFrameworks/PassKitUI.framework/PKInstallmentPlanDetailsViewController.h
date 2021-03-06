/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKSectionTableViewController.h>

@class PKAccount, PKAccountService, PKInstallmentPlan, PKPaymentPass, PKPaymentTransactionDetailAmountLineItemGenerator, NSArray, PKPaymentTransactionDetailHeaderView;

@interface PKInstallmentPlanDetailsViewController : PKSectionTableViewController {

	PKAccount* _account;
	PKAccountService* _accountService;
	PKInstallmentPlan* _installmentPlan;
	PKPaymentPass* _paymentPass;
	PKPaymentTransactionDetailAmountLineItemGenerator* _lineItemGenerator;
	NSArray* _lineItems;
	PKPaymentTransactionDetailHeaderView* _headerView;

}
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)initWithAccount:(id)arg1 installmentPlan:(id)arg2 accountService:(id)arg3 paymentPass:(id)arg4 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)_updateHeaderHeight;
-(id)_detailsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_progressCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
@end

