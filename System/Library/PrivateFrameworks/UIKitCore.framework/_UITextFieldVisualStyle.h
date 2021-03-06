/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UITextFieldVisualStyleSubject;
@interface _UITextFieldVisualStyle : NSObject {

	id<_UITextFieldVisualStyleSubject> _styleSubject;

}

@property (assign,nonatomic,__weak) id<_UITextFieldVisualStyleSubject> styleSubject;              //@synthesize styleSubject=_styleSubject - In the implementation block
+(id)inferredVisualStyleWithStyleSubject:(id)arg1 ;
-(id)defaultTextColor;
-(id)defaultTextColorForKeyboardAppearance;
-(id)parentViewForTextContentView;
-(id)placeholderColor;
-(id)namesOfAttributesToOverrideForEditing;
-(id)overridingEditingAttributes:(id)arg1 forOriginalAttributes:(id)arg2 ;
-(id)defaultFocusedTextColor;
-(id)initWithStyleSubject:(id)arg1 ;
-(BOOL)textShouldUseVibrancy;
-(void)handleTextVibrancy;
-(id<_UITextFieldVisualStyleSubject>)styleSubject;
-(void)setStyleSubject:(id<_UITextFieldVisualStyleSubject>)arg1 ;
@end

