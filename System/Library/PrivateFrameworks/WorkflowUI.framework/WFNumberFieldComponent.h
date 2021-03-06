/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKStatefulViewComponent.h>

@interface WFNumberFieldComponent : CKStatefulViewComponent {

	/*^block*/id _updateBlock;
	/*^block*/id _variableBlock;
	CKTypedComponentAction<> _doneAction;
	WFNumberFieldAttributes _attributes;

}

@property (nonatomic,readonly) WFNumberFieldAttributes attributes;               //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) id updateBlock;                                   //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,readonly) id variableBlock;                                 //@synthesize variableBlock=_variableBlock - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> doneAction;              //@synthesize doneAction=_doneAction - In the implementation block
+(id)newWithAttributes:(const WFNumberFieldAttributes*)arg1 updateBlock:(/*^block*/id)arg2 variableBlock:(/*^block*/id)arg3 doneAction:(CKTypedComponentAction<>)arg4 size:(const CKComponentSize*)arg5 ;
-(WFNumberFieldAttributes)attributes;
-(id)updateBlock;
-(CKTypedComponentAction<>)doneAction;
-(id)variableBlock;
@end

