/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/ControlCenter/Bundles/PerformanceTraceModule.bundle/PerformanceTraceModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>
#import <libobjc.A.dylib/TCArtraceSessionDelegate.h>

@class UIViewPropertyAnimator, TCArtraceSession, NSArray, CCUIContentModuleContext, NSString;

@interface CCUIPerformanceTraceModuleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController, TCArtraceSessionDelegate> {

	unsigned long long state;
	TCArtraceSession* _traceSession;
	NSArray* _traceStartScenes;
	CCUIContentModuleContext* _contentModuleContext;

}

@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;               //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
+(BOOL)isSupported;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_stopRecording;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)_updateState:(int)arg1 ;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(double)preferredExpandedContentHeight;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)_startRecording;
-(id)_getFGSceneIdentifiers;
-(void)artraceSession:(id)arg1 didReceiveOutput:(id)arg2 ;
-(void)artraceSessionDidComplete:(id)arg1 ;
@end
