/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSArray, MCSectionBasedTableView, NSString;

@interface MCSectionBasedTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	NSArray* _sectionControllers;
	MCSectionBasedTableView* _sectionBasedTableView;

}

@property (nonatomic,retain) MCSectionBasedTableView * sectionBasedTableView;              //@synthesize sectionBasedTableView=_sectionBasedTableView - In the implementation block
@property (nonatomic,copy) NSArray * sectionControllers;                                   //@synthesize sectionControllers=_sectionControllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)defaultView;
-(NSArray *)sectionControllers;
-(void)setSectionControllers:(NSArray *)arg1 ;
-(void)setSectionBasedTableView:(MCSectionBasedTableView *)arg1 ;
-(void)_registerCellClass;
-(MCSectionBasedTableView *)sectionBasedTableView;
@end
