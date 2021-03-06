/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFParameter.h>

@protocol WFExpandingParameterHintProvider;
@class NSString;

@interface WFExpandingParameter : WFParameter {

	NSString* _hintLabel;
	id<WFExpandingParameterHintProvider> _hintProvider;

}

@property (assign,nonatomic,__weak) id<WFExpandingParameterHintProvider> hintProvider;              //@synthesize hintProvider=_hintProvider - In the implementation block
@property (nonatomic,readonly) NSString * hintLabel;                                                //@synthesize hintLabel=_hintLabel - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(NSString *)hintLabel;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(BOOL)supportsImportQuestions;
-(id<WFExpandingParameterHintProvider>)hintProvider;
-(void)setHintProvider:(id<WFExpandingParameterHintProvider>)arg1 ;
@end

