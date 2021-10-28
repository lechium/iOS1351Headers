/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WFListEditorViewCell.h>

@class UIView, WFTextTokenEditorView;

@interface WFDictionaryEditorViewCell : WFListEditorViewCell {

	UIView* _separatorView;
	WFTextTokenEditorView* _keyEditor;

}

@property (nonatomic,__weak,readonly) UIView * separatorView;                         //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,__weak,readonly) WFTextTokenEditorView * keyEditor;              //@synthesize keyEditor=_keyEditor - In the implementation block
-(void)setValue:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(UIView *)separatorView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setVariableProvider:(id)arg1 ;
-(void)setVariablesDisabled:(BOOL)arg1 ;
-(void)setAllowedVariableTypes:(id)arg1 ;
-(void)beginEditingWithContext:(id)arg1 ;
-(id)valueEditorValue;
-(void)updateWithValueState:(id)arg1 ;
-(id)valueTitle;
-(void)updateEditorBlocks;
-(void)configureEditorViewController:(id)arg1 ;
-(WFTextTokenEditorView *)keyEditor;
@end
