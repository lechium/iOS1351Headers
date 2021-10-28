/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIResponder.h>
#import <UIKit/UIKeyInput.h>

@class UITextInputAssistantItem, UIView;

@interface DocumentManagerExecutables.DOCTypeToFocusController : UIResponder <UIKeyInput> {

	 delegate;
	 typeToFocusInputBuffer;
	 typeToFocusTimeout;
	 typeToFocusInputView;

}

@property (assign,nonatomic) long long autocorrectionType; 
@property (readonly,nonatomic) UITextInputAssistantItem * inputAssistantItem; 
@property (readonly,nonatomic) BOOL hasText; 
@property (readonly,nonatomic) UIView * inputView; 
-(id)init;
-(void)dealloc;
-(void)setAutocorrectionType:(long long)arg1 ;
-(UIView *)inputView;
-(long long)autocorrectionType;
-(UITextInputAssistantItem *)inputAssistantItem;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(BOOL)hasText;
-(void)typingTimeout;
@end
