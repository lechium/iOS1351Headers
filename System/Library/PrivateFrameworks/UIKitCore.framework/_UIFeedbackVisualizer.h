/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIWindow, NSMapTable;

@interface _UIFeedbackVisualizer : NSObject {

	UIWindow* _visualFeedbackWindow;
	NSMapTable* _engineLayers;

}

@property (nonatomic,retain) UIWindow * visualFeedbackWindow;              //@synthesize visualFeedbackWindow=_visualFeedbackWindow - In the implementation block
@property (nonatomic,retain) NSMapTable * engineLayers;                    //@synthesize engineLayers=_engineLayers - In the implementation block
+(id)sharedVisualizer;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addEngine:(id)arg1 ;
-(void)showVisualForFeedback:(id)arg1 withDelay:(double)arg2 ;
-(void)cancelVisualForFeedback:(id)arg1 ;
-(id)_colorForFeedback:(id)arg1 ;
-(id)_colorForEngine:(id)arg1 ;
-(id)_monogramForEngine:(id)arg1 ;
-(id)_colorForEngineState:(long long)arg1 ;
-(void)_showVisualForFeedback:(id)arg1 ;
-(void)_updateEngine:(id)arg1 ;
-(UIWindow *)visualFeedbackWindow;
-(void)setVisualFeedbackWindow:(UIWindow *)arg1 ;
-(NSMapTable *)engineLayers;
-(void)setEngineLayers:(NSMapTable *)arg1 ;
@end
