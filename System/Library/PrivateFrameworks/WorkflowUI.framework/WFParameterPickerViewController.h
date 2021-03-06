/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFModuleModelProvider.h>

@protocol WFParameterPickerViewControllerDelegate;
@class WFWorkflow, WFWorkflowViewController, NSArray, NSString;

@interface WFParameterPickerViewController : UIViewController <WFModuleModelProvider> {

	WFWorkflow* _workflow;
	id<WFParameterPickerViewControllerDelegate> _delegate;
	WFWorkflowViewController* _workflowViewController;
	NSArray* _excludedParameters;

}

@property (assign,nonatomic,__weak) WFWorkflowViewController * workflowViewController;                 //@synthesize workflowViewController=_workflowViewController - In the implementation block
@property (nonatomic,retain) NSArray * excludedParameters;                                             //@synthesize excludedParameters=_excludedParameters - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                                  //@synthesize workflow=_workflow - In the implementation block
@property (assign,nonatomic,__weak) id<WFParameterPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFParameterPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFParameterPickerViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)cancelPressed;
-(WFWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(WFWorkflowViewController *)workflowViewController;
-(void)setWorkflowViewController:(WFWorkflowViewController *)arg1 ;
-(id)createModelForAction:(id)arg1 ;
-(void)component:(id)arg1 didSelectAction:(id)arg2 parameter:(id)arg3 ;
-(NSArray *)excludedParameters;
-(void)setExcludedParameters:(NSArray *)arg1 ;
@end

