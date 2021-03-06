/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXCMMViewControllerDelegate.h>
#import <libobjc.A.dylib/PXCMMActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXCMMActionControllerDelegate.h>
#import <libobjc.A.dylib/PXCMMWorkflowPresenting.h>

@protocol PXCMMWorkflowCoordinatorDelegate;
@class UINavigationController, PXCMMViewController, NSString;

@interface PXCMMWorkflowCoordinator : NSObject <PXCMMViewControllerDelegate, PXCMMActionPerformerDelegate, PXCMMActionControllerDelegate, PXCMMWorkflowPresenting> {

	UINavigationController* _navigationController;
	PXCMMViewController* _rootWorkflowViewController;
	PXCMMViewController* _sendBackWorkflowViewController;
	id<PXCMMWorkflowCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXCMMWorkflowCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXCMMWorkflowCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PXCMMWorkflowCoordinatorDelegate>)arg1 ;
-(void)_presentAlertController:(id)arg1 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)workflowViewControllerWithContext:(id)arg1 ;
-(void)cancelWorkflow;
-(id)completeMyMomentViewController:(id)arg1 performActionForSession:(id)arg2 ;
-(id)completeMyMomentViewController:(id)arg1 performSendBackActionForSession:(id)arg2 ;
-(void)startPreloadingTasksForCompleteMyMomentViewController:(id)arg1 ;
-(void)didCancelCompleteMyMomentViewController:(id)arg1 ;
-(void)completeMyMomentViewController:(id)arg1 showPhotoPickerForSession:(id)arg2 ;
-(id)workflowViewControllerWithContext:(id)arg1 embedInNavigationControllerOfClass:(Class)arg2 ;
-(id)_performActionWithType:(id)arg1 forSession:(id)arg2 ;
-(id)_performPublishActionForSession:(id)arg1 ;
-(id)_performDeleteActionForSession:(id)arg1 ;
-(void)_performMessageComposeActionForSession:(id)arg1 shareURL:(id)arg2 ;
-(void)_performPhotosPickerActionForSession:(id)arg1 gridPresentation:(id)arg2 ;
-(id)_performReceiveActionForSession:(id)arg1 ;
-(void)_performCleanupActionForSession:(id)arg1 ;
-(void)_performNotifyIfNeededActionForSession:(id)arg1 ;
-(void)_performSendBackActionForSession:(id)arg1 ;
-(void)_didFinishSession:(id)arg1 withState:(unsigned long long)arg2 ;
-(void)_didFinishSession:(id)arg1 withState:(unsigned long long)arg2 avoidDismissal:(BOOL)arg3 ;
-(void)_presentSendBackFlowWithContext:(id)arg1 ;
-(void)_completePublishForSession:(id)arg1 withURL:(id)arg2 error:(id)arg3 ;
-(void)_completePhotosPickerActionForSession:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_completeMessageComposeActionForSession:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_completeSendBackActionForSession:(id)arg1 withContext:(id)arg2 error:(id)arg3 ;
-(void)_completeActionForSession:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_session:(id)arg1 finishedAccepting:(BOOL)arg2 withError:(id)arg3 ;
-(id)_createWorkflowViewControllerWithContext:(id)arg1 ;
-(id)_presentingViewControllerForViewController:(id)arg1 ;
-(id)_alertControllerForSession:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

