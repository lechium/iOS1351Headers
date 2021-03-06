/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFSlotTemplateViewDelegate.h>
#import <libobjc.A.dylib/WFModuleSummaryEditorDelegate.h>
#import <libobjc.A.dylib/WFVariableDelegate.h>

@protocol WFModuleSummaryViewDelegate, WFVariableProvider, WFVariableUIDelegate;
@class NSString, NSSet, NSDictionary, WFSlotTemplateView, NSMutableDictionary, WFModuleSummaryEditor, WFSlotIdentifier, WFModuleSummaryTemplateBuilder, WFVariable, NSHashTable, UIFont, UIColor;

@interface WFModuleSummaryView : UIView <WFSlotTemplateViewDelegate, WFModuleSummaryEditorDelegate, WFVariableDelegate> {

	BOOL _processing;
	NSString* _summaryFormatString;
	NSSet* _parameters;
	NSSet* _editableParameters;
	NSDictionary* _parameterStates;
	/*^block*/id _updateBlock;
	id<WFModuleSummaryViewDelegate> _delegate;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	WFSlotTemplateView* _templateView;
	NSMutableDictionary* _mutableStagedParameterStates;
	WFModuleSummaryEditor* _currentEditor;
	WFSlotIdentifier* _currentlyEditingSlotIdentifier;
	WFModuleSummaryTemplateBuilder* _templateBuilder;
	WFVariable* _variableBeingEdited;
	NSHashTable* _variablesBeingObserved;

}

@property (assign,nonatomic,__weak) WFSlotTemplateView * templateView;                        //@synthesize templateView=_templateView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableStagedParameterStates;              //@synthesize mutableStagedParameterStates=_mutableStagedParameterStates - In the implementation block
@property (nonatomic,retain) WFModuleSummaryEditor * currentEditor;                           //@synthesize currentEditor=_currentEditor - In the implementation block
@property (nonatomic,retain) WFSlotIdentifier * currentlyEditingSlotIdentifier;               //@synthesize currentlyEditingSlotIdentifier=_currentlyEditingSlotIdentifier - In the implementation block
@property (nonatomic,retain) WFModuleSummaryTemplateBuilder * templateBuilder;                //@synthesize templateBuilder=_templateBuilder - In the implementation block
@property (nonatomic,retain) WFVariable * variableBeingEdited;                                //@synthesize variableBeingEdited=_variableBeingEdited - In the implementation block
@property (nonatomic,retain) NSHashTable * variablesBeingObserved;                            //@synthesize variablesBeingObserved=_variablesBeingObserved - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryFormatString;                           //@synthesize summaryFormatString=_summaryFormatString - In the implementation block
@property (nonatomic,copy,readonly) NSSet * parameters;                                       //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy,readonly) NSSet * editableParameters;                               //@synthesize editableParameters=_editableParameters - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parameterStates;                           //@synthesize parameterStates=_parameterStates - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stagedParameterStates; 
@property (nonatomic,retain) UIFont * summaryFont; 
@property (nonatomic,retain) UIFont * summaryUnpopulatedFont; 
@property (assign,nonatomic) double horizontalPadding; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) BOOL extendSlotBackgroundOffEdges; 
@property (nonatomic,readonly) UIColor * disabledSlotTitleColor; 
@property (nonatomic,readonly) UIColor * disabledSlotBackgroundColor; 
@property (nonatomic,copy) id updateBlock;                                                    //@synthesize updateBlock=_updateBlock - In the implementation block
@property (assign,nonatomic) BOOL processing;                                                 //@synthesize processing=_processing - In the implementation block
@property (assign,nonatomic,__weak) id<WFModuleSummaryViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                  //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;              //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)enumerateVariableAttachmentsInContents:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)paragraphStyleWithAlignment:(long long)arg1 ;
+(id)parameterStatesByApplyingStaging:(id)arg1 toOriginal:(id)arg2 ;
+(double)heightForWidth:(double)arg1 withSummaryFormatString:(id)arg2 parameters:(id)arg3 editableParameters:(id)arg4 parameterStates:(id)arg5 stagedParameterStates:(id)arg6 horizontalPadding:(double)arg7 font:(id)arg8 unpopulatedFont:(id)arg9 textAlignment:(long long)arg10 ;
-(id<WFModuleSummaryViewDelegate>)delegate;
-(void)setDelegate:(id<WFModuleSummaryViewDelegate>)arg1 ;
-(NSSet *)parameters;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)tintColorDidChange;
-(long long)textAlignment;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(UIFont *)summaryFont;
-(void)setHorizontalPadding:(double)arg1 ;
-(double)horizontalPadding;
-(WFModuleSummaryEditor *)currentEditor;
-(void)setCurrentEditor:(WFModuleSummaryEditor *)arg1 ;
-(id)parameterForKey:(id)arg1 ;
-(void)setProcessing:(BOOL)arg1 ;
-(id<WFVariableProvider>)variableProvider;
-(void)variableDidChange:(id)arg1 ;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(UIColor *)disabledSlotTitleColor;
-(UIColor *)disabledSlotBackgroundColor;
-(void)setDisabledSlotTitleColor:(id)arg1 backgroundColor:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)extendSlotBackgroundOffEdges;
-(void)setExtendSlotBackgroundOffEdges:(BOOL)arg1 ;
-(BOOL)processing;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(void)summaryEditor:(id)arg1 willUpdateVariable:(id)arg2 ;
-(void)summaryEditor:(id)arg1 didStageParameterState:(id)arg2 ;
-(void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2 ;
-(void)summaryEditorDidRequestTextEntry:(id)arg1 ;
-(void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(BOOL)arg2 withTextAttachmentToEdit:(id)arg3 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)parameterStates;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(NSString *)summaryFormatString;
-(NSSet *)editableParameters;
-(NSDictionary *)stagedParameterStates;
-(void)slotTemplateView:(id)arg1 didSelectSlotWithIdentifier:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)slotTemplateView:(id)arg1 didDeselectSlotWithIdentifier:(id)arg2 ;
-(BOOL)slotTemplateView:(id)arg1 shouldLongPressSlotWithIdentifier:(id)arg2 ;
-(void)slotTemplateView:(id)arg1 didLongPressSlotWithIdentifier:(id)arg2 sourceRect:(CGRect)arg3 textAttachmentToSelect:(id)arg4 ;
-(BOOL)slotTemplateView:(id)arg1 shouldTapTextAttachment:(id)arg2 inSlotWithIdentifier:(id)arg3 ;
-(void)slotTemplateView:(id)arg1 didTapTextAttachment:(id)arg2 inSlotWithIdentifier:(id)arg3 ;
-(void)slotTemplateView:(id)arg1 willBeginTypingInSlotWithIdentifier:(id)arg2 usingTextEntry:(id)arg3 allowMultipleLines:(BOOL*)arg4 ;
-(BOOL)slotTemplateView:(id)arg1 shouldChangeText:(id)arg2 forSlotWithIdentifier:(id)arg3 ;
-(void)slotTemplateView:(id)arg1 didChangeText:(id)arg2 forSlotWithIdentifier:(id)arg3 ;
-(void)slotTemplateView:(id)arg1 typingDidCutWithOriginalBlock:(/*^block*/id)arg2 ;
-(void)slotTemplateView:(id)arg1 typingDidCopyWithOriginalBlock:(/*^block*/id)arg2 ;
-(void)slotTemplateView:(id)arg1 typingDidPasteWithOriginalBlock:(/*^block*/id)arg2 ;
-(void)slotTemplateView:(id)arg1 didEndTypingInSlotWithIdentifier:(id)arg2 ;
-(void)slotTemplateView:(id)arg1 deletePressedOnUnpopulatedSlotWithIdentifier:(id)arg2 ;
-(void)slotTemplateViewDidInvalidateSize:(id)arg1 ;
-(void)updateTemplateContentsAnimated:(BOOL)arg1 ;
-(void)setSummaryFormatString:(id)arg1 withParameters:(id)arg2 editableParameters:(id)arg3 parameterStates:(id)arg4 ;
-(void)setSummaryFont:(UIFont *)arg1 ;
-(UIFont *)summaryUnpopulatedFont;
-(void)setSummaryUnpopulatedFont:(UIFont *)arg1 ;
-(id)currentParameterStateForParameterKey:(id)arg1 ;
-(Class)editorClassForParameter:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceRect:(CGRect)arg2 fromLongPressGesture:(BOOL)arg3 fromTextAttachment:(id)arg4 ;
-(id)addElementToArrayForParameterKey:(id)arg1 ;
-(void)removeElementFromArrayAtIndex:(unsigned long long)arg1 forParameterKey:(id)arg2 ;
-(void)destroyCurrentEditor;
-(void)startEditingForParameterKey:(id)arg1 ;
-(id)transformParameterStateForSerialization:(id)arg1 inEditor:(id)arg2 ;
-(void)updateVariableObservationsWithContents:(id)arg1 ;
-(void)updateVariableAttachmentAppearanceInContents:(id)arg1 ;
-(WFSlotTemplateView *)templateView;
-(void)setTemplateView:(WFSlotTemplateView *)arg1 ;
-(NSMutableDictionary *)mutableStagedParameterStates;
-(void)setMutableStagedParameterStates:(NSMutableDictionary *)arg1 ;
-(WFSlotIdentifier *)currentlyEditingSlotIdentifier;
-(void)setCurrentlyEditingSlotIdentifier:(WFSlotIdentifier *)arg1 ;
-(WFModuleSummaryTemplateBuilder *)templateBuilder;
-(void)setTemplateBuilder:(WFModuleSummaryTemplateBuilder *)arg1 ;
-(WFVariable *)variableBeingEdited;
-(void)setVariableBeingEdited:(WFVariable *)arg1 ;
-(NSHashTable *)variablesBeingObserved;
-(void)setVariablesBeingObserved:(NSHashTable *)arg1 ;
@end

