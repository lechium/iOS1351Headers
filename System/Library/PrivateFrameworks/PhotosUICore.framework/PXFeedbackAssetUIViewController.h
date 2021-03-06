/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXFeedbackFormDelegate.h>
#import <libobjc.A.dylib/PXAutoloopVideoTaskDelegate.h>

@protocol PXFeedbackAssetUIViewControllerDelegate;
@class PHAsset, NSDictionary, UINavigationController, PXFeedbackLikeItOrNotComboUIViewController, PXAutoloopVideoProcessTask, NSArray, NSString;

@interface PXFeedbackAssetUIViewController : UIViewController <PXFeedbackFormDelegate, PXAutoloopVideoTaskDelegate> {

	BOOL _userLikedIt;
	PHAsset* _asset;
	id<PXFeedbackAssetUIViewControllerDelegate> _delegate;
	NSDictionary* _positiveFeedback;
	NSDictionary* _negativeFeedback;
	UINavigationController* _navigationController;
	PXFeedbackLikeItOrNotComboUIViewController* _feedbackController;
	PXAutoloopVideoProcessTask* _autoLoopFrameworkDiagnosticsCurrentTask;
	NSArray* _autoLoopFrameworkDiagnosticFileURLs;

}

@property (nonatomic,retain) PHAsset * asset;                                                                   //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL userLikedIt;                                                                  //@synthesize userLikedIt=_userLikedIt - In the implementation block
@property (nonatomic,retain) NSDictionary * positiveFeedback;                                                   //@synthesize positiveFeedback=_positiveFeedback - In the implementation block
@property (nonatomic,retain) NSDictionary * negativeFeedback;                                                   //@synthesize negativeFeedback=_negativeFeedback - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                                     //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) PXFeedbackLikeItOrNotComboUIViewController * feedbackController;                   //@synthesize feedbackController=_feedbackController - In the implementation block
@property (nonatomic,retain) PXAutoloopVideoProcessTask * autoLoopFrameworkDiagnosticsCurrentTask;              //@synthesize autoLoopFrameworkDiagnosticsCurrentTask=_autoLoopFrameworkDiagnosticsCurrentTask - In the implementation block
@property (nonatomic,retain) NSArray * autoLoopFrameworkDiagnosticFileURLs;                                     //@synthesize autoLoopFrameworkDiagnosticFileURLs=_autoLoopFrameworkDiagnosticFileURLs - In the implementation block
@property (nonatomic,__weak,readonly) id<PXFeedbackAssetUIViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXFeedbackAssetUIViewControllerDelegate>)delegate;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)viewDidLoad;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)userDidFinish:(BOOL)arg1 ;
-(id)longTitleText;
-(id)viewTitleForRadar;
-(id)negativeFeedbackKeys;
-(id)positiveFeedbackKeys;
-(BOOL)shouldDisplaySecondaryFeedbackButtons;
-(void)userIndicatedLike;
-(void)userIndicatedDislike;
-(void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3 ;
-(NSDictionary *)negativeFeedback;
-(void)setNegativeFeedback:(NSDictionary *)arg1 ;
-(PXFeedbackLikeItOrNotComboUIViewController *)feedbackController;
-(void)setFeedbackController:(PXFeedbackLikeItOrNotComboUIViewController *)arg1 ;
-(void)autoloopVideoTaskStatusDidChange:(id)arg1 ;
-(id)initWithAsset:(id)arg1 delegate:(id)arg2 ;
-(void)_fileRadarWithAutoLoopAsset:(id)arg1 positiveFeedback:(id)arg2 negativeFeedback:(id)arg3 ;
-(void)continueFiling;
-(void)_startAutoLoopVideoTaskForDiagnosticsWithAsset:(id)arg1 ;
-(BOOL)userLikedIt;
-(void)setUserLikedIt:(BOOL)arg1 ;
-(NSDictionary *)positiveFeedback;
-(void)setPositiveFeedback:(NSDictionary *)arg1 ;
-(PXAutoloopVideoProcessTask *)autoLoopFrameworkDiagnosticsCurrentTask;
-(void)setAutoLoopFrameworkDiagnosticsCurrentTask:(PXAutoloopVideoProcessTask *)arg1 ;
-(NSArray *)autoLoopFrameworkDiagnosticFileURLs;
-(void)setAutoLoopFrameworkDiagnosticFileURLs:(NSArray *)arg1 ;
@end

