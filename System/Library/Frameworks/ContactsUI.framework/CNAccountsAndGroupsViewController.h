/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:02 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>

@protocol CNAccountsAndGroupsViewControllerDelegate;
@class CNContactListStyleApplier, CNAccountsAndGroupsDataSource, NSString;

@interface CNAccountsAndGroupsViewController : UITableViewController <UITableViewDelegate> {

	BOOL _needsReload;
	BOOL _tableViewNeedsReloadAfterResume;
	CNContactListStyleApplier* _contactListStyleApplier;
	CNAccountsAndGroupsDataSource* _dataSource;
	id<CNAccountsAndGroupsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL needsReload;                                                           //@synthesize needsReload=_needsReload - In the implementation block
@property (assign,nonatomic) BOOL tableViewNeedsReloadAfterResume;                                       //@synthesize tableViewNeedsReloadAfterResume=_tableViewNeedsReloadAfterResume - In the implementation block
@property (nonatomic,retain) CNContactListStyleApplier * contactListStyleApplier;                        //@synthesize contactListStyleApplier=_contactListStyleApplier - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsDataSource * dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CNAccountsAndGroupsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CNAccountsAndGroupsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNAccountsAndGroupsViewControllerDelegate>)arg1 ;
-(CNAccountsAndGroupsDataSource *)dataSource;
-(void)setDataSource:(CNAccountsAndGroupsDataSource *)arg1 ;
-(void)loadView;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)reloadData;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)applicationDidResume;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)done:(id)arg1 ;
-(BOOL)needsReload;
-(void)setNeedsReload:(BOOL)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)applyStyle;
-(void)contactStoreDidChangeWithNotification:(id)arg1 ;
-(void)setContactListStyleApplier:(CNContactListStyleApplier *)arg1 ;
-(CNContactListStyleApplier *)contactListStyleApplier;
-(BOOL)tableViewNeedsReloadAfterResume;
-(void)setTableViewNeedsReloadAfterResume:(BOOL)arg1 ;
@end

