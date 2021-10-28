/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class WFWorkflowTypeManagerResultsController, NSString, UIView;

@interface WFWorkflowTypeManagerViewController : UITableViewController <UIAdaptivePresentationControllerDelegate> {

	WFWorkflowTypeManagerResultsController* _resultsController;
	/*^block*/id _doneHandler;
	NSString* _workflowType;
	UIView* _headerView;

}

@property (nonatomic,copy) id doneHandler;                                                              //@synthesize doneHandler=_doneHandler - In the implementation block
@property (nonatomic,copy) NSString * workflowType;                                                     //@synthesize workflowType=_workflowType - In the implementation block
@property (nonatomic,readonly) WFWorkflowTypeManagerResultsController * resultsController;              //@synthesize resultsController=_resultsController - In the implementation block
@property (nonatomic,readonly) UIView * headerView;                                                     //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerRequestHandler;
-(void)done;
-(void)loadView;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIView *)headerView;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(WFWorkflowTypeManagerResultsController *)resultsController;
-(id)initWithWorkflowType:(id)arg1 ;
-(NSString *)workflowType;
-(void)setDoneHandler:(id)arg1 ;
-(id)doneHandler;
-(void)setWorkflowType:(NSString *)arg1 ;
@end
