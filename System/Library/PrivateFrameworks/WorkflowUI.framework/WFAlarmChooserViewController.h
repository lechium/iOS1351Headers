/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/MTAlarmDataSourceObserver.h>

@protocol WFAlarmChooserViewControllerDelegate;
@class UITableView, MTAlarmDataSource, NSMutableOrderedSet, NSString;

@interface WFAlarmChooserViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MTAlarmDataSourceObserver> {

	id<WFAlarmChooserViewControllerDelegate> _delegate;
	UITableView* _tableView;
	MTAlarmDataSource* _alarmDataSource;
	NSMutableOrderedSet* _checkedAlarmIDs;

}

@property (nonatomic,readonly) UITableView * tableView;                                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) MTAlarmDataSource * alarmDataSource;                                 //@synthesize alarmDataSource=_alarmDataSource - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * checkedAlarmIDs;                               //@synthesize checkedAlarmIDs=_checkedAlarmIDs - In the implementation block
@property (assign,nonatomic,__weak) id<WFAlarmChooserViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFAlarmChooserViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFAlarmChooserViewControllerDelegate>)arg1 ;
-(void)finish:(id)arg1 ;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)isModalInPresentation;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)cancel:(id)arg1 ;
-(void)dataSourceDidReload:(id)arg1 ;
-(MTAlarmDataSource *)alarmDataSource;
-(id)initWithAlarmDataSource:(id)arg1 checkedAlarmIDs:(id)arg2 ;
-(void)checkForValidCheckedAlarmIDs;
-(void)updateDoneButtonEnabled;
-(NSMutableOrderedSet *)checkedAlarmIDs;
@end

