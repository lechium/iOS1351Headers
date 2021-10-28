/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@class STUsageReport, NSArray, NSLayoutConstraint;

@interface STWeeklyReportViewController : UITableViewController {

	STUsageReport* _report;
	NSArray* _tableViewCells;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,readonly) STUsageReport * report;                 //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) NSArray * tableViewCells;                 //@synthesize tableViewCells=_tableViewCells - In the implementation block
@property (retain) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(STUsageReport *)report;
-(void)viewDidLoad;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(NSArray *)tableViewCells;
-(id)initWithUsageReport:(id)arg1 ;
-(void)_heightDidChange:(id)arg1 ;
-(void)setTableViewCells:(NSArray *)arg1 ;
@end
