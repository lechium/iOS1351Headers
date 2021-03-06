/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/_SFPasswordTableViewController.h>

@protocol _SFPasswordPickerTableViewControllerDelegate;
@class NSMutableArray, NSIndexPath, _SFPasswordPickerTableConfiguration;

@interface _SFPasswordPickerTableViewController : _SFPasswordTableViewController {

	NSMutableArray* _savedPasswordsMatchingHintStrings;
	NSMutableArray* _savedPasswords;
	NSMutableArray* _matchingPasswords;
	long long _sectionForPasswordsMatchingHintStrings;
	long long _sectionForAllPasswords;
	NSIndexPath* _indexPathOfRowShowingDetailView;
	id<_SFPasswordPickerTableViewControllerDelegate> _delegate;
	_SFPasswordPickerTableConfiguration* _configuration;

}

@property (assign,nonatomic,__weak) id<_SFPasswordPickerTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) _SFPasswordPickerTableConfiguration * configuration;                         //@synthesize configuration=_configuration - In the implementation block
-(id<_SFPasswordPickerTableViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_SFPasswordPickerTableViewControllerDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(_SFPasswordPickerTableConfiguration *)configuration;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)_cancel;
-(void)handleContextMenuDeleteForIndexPath:(id)arg1 ;
-(void)searchPatternDidUpdate;
-(void)_updateMatchingPasswords;
-(void)_updateSections;
-(void)_deletePasswordAtIndexPath:(id)arg1 ;
-(id)_passwordForIndexPath:(id)arg1 ;
@end

