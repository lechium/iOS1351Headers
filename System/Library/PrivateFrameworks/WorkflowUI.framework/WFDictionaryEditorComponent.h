/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKStatefulViewComponent.h>

@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class NSArray, NSString, NSSet;

@interface WFDictionaryEditorComponent : CKStatefulViewComponent {

	BOOL _variablesDisabled;
	BOOL _editable;
	NSArray* _keyValuePairs;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	id<WFComponentNavigationContext> _navigationContext;
	NSString* _localizedNewItemTypeName;
	NSSet* _allowedValueTypes;
	NSSet* _allowedVariableTypes;
	/*^block*/id _updateBlock;

}

@property (nonatomic,readonly) NSArray * keyValuePairs;                                                //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableProvider> variableProvider;                         //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableUIDelegate> variableUIDelegate;                     //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedNewItemTypeName;                               //@synthesize localizedNewItemTypeName=_localizedNewItemTypeName - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedValueTypes;                                         //@synthesize allowedValueTypes=_allowedValueTypes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedVariableTypes;                                      //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (nonatomic,readonly) BOOL variablesDisabled;                                                 //@synthesize variablesDisabled=_variablesDisabled - In the implementation block
@property (nonatomic,readonly) BOOL editable;                                                          //@synthesize editable=_editable - In the implementation block
@property (nonatomic,readonly) id updateBlock;                                                         //@synthesize updateBlock=_updateBlock - In the implementation block
+(id)newWithKeyValuePairs:(id)arg1 variableProvider:(id)arg2 variableUIDelegate:(id)arg3 navigationContext:(id)arg4 localizedNewItemTypeName:(id)arg5 variablesDisabled:(BOOL)arg6 allowedValueTypes:(id)arg7 allowedVariableTypes:(id)arg8 editable:(BOOL)arg9 updateBlock:(/*^block*/id)arg10 size:(const CKComponentSize*)arg11 ;
-(id)updateBlock;
-(BOOL)editable;
-(NSArray *)keyValuePairs;
-(NSString *)localizedNewItemTypeName;
-(NSSet *)allowedValueTypes;
-(id<WFVariableProvider>)variableProvider;
-(BOOL)variablesDisabled;
-(id<WFComponentNavigationContext>)navigationContext;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
@end

