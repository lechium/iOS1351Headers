/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIScreenBasedObject.h>

@protocol UISplitKeyboardSource;
@class UIScreen, UIWindowScene, NSString, NSDictionary;

@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject> {

	UIScreen* _screen;
	UIWindowScene* _canvas;
	id<UISplitKeyboardSource> _controller;

}

@property (assign,nonatomic) id<UISplitKeyboardSource> masterController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
+(id)supportForScreen:(id)arg1 ;
+(id)supportForUIScene:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)_options;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(UIScreen *)_intendedScreen;
-(void)setMasterController:(id<UISplitKeyboardSource>)arg1 ;
-(id<UISplitKeyboardSource>)masterController;
-(void)_updatedController;
-(void)_disconnectingController:(id)arg1 ;
-(void)_connectController:(id)arg1 ;
-(id)_initWithCanvas:(id)arg1 options:(id)arg2 ;
-(id)_intendedCanvas;
@end
