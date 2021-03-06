/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITextInteraction.h>

@protocol UITextInput;
@class UIResponder;

@interface UITextLiveConversionInteraction : UITextInteraction {

	UIResponder*<UITextInput> _textInput;
	long long _panOffset;

}

@property (readonly) double pointSize; 
-(double)pointSize;
-(void)willMoveToView:(id)arg1 ;
-(id)_liveConversionTapGestureRecognizer;
-(id)_liveConversionPanGestureRecognizer;
-(void)_tap:(id)arg1 ;
-(void)_pan:(id)arg1 ;
-(id)initWithTextInput:(id)arg1 ;
@end

