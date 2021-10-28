/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobilePhoneSettings/VMViewController.h>

@protocol VMAccountsViewControllerDelegate;
@class NSArray, VMAccountsView;

@interface VMAccountsViewController : VMViewController {

	NSArray* _accounts;
	id<VMAccountsViewControllerDelegate> _delegate;
	VMAccountsView* _accountsView;

}

@property (nonatomic,copy) NSArray * accounts;                                                  //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) VMAccountsView * accountsView;                                     //@synthesize accountsView=_accountsView - In the implementation block
@property (assign,nonatomic,__weak) id<VMAccountsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VMAccountsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VMAccountsViewControllerDelegate>)arg1 ;
-(NSArray *)accounts;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setAccounts:(NSArray *)arg1 ;
-(id)accountAtIndex:(unsigned long long)arg1 ;
-(void)updateAccounts;
-(VMAccountsView *)accountsView;
-(void)setAccountsView:(VMAccountsView *)arg1 ;
-(void)handleVMVoicemailManagerAccountsDidChangeNotification:(id)arg1 ;
-(void)updateAccountsView;
@end
