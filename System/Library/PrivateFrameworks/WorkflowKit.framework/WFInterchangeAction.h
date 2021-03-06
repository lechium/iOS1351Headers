/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@class ICAction, NSArray;

@interface WFInterchangeAction : WFAction {

	ICAction* _interchangeAction;
	NSArray* _contentClasses;

}

@property (nonatomic,retain) NSArray * contentClasses;                    //@synthesize contentClasses=_contentClasses - In the implementation block
@property (nonatomic,readonly) BOOL requiresCallback; 
@property (nonatomic,readonly) ICAction * interchangeAction;              //@synthesize interchangeAction=_interchangeAction - In the implementation block
-(id)description;
-(id)name;
-(id)keywords;
-(id)creationDate;
-(id)categories;
-(id)lastModifiedDate;
-(id)shortName;
-(id)app;
-(BOOL)isDiscontinued;
-(BOOL)isDiscoverable;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)outputContentClasses;
-(BOOL)inputRequired;
-(id)initWithInterchangeAction:(id)arg1 serializedParameters:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(BOOL)skipsProcessingHiddenParameters;
-(id)specifiedInputContentClasses;
-(id)specifiedOutputContentClasses;
-(id)inputContentClasses;
-(BOOL)inputsMultipleItems;
-(id)unsupportedEnvironments;
-(id)userInterfaceTypes;
-(BOOL)inputPassthrough;
-(BOOL)neverSuggested;
-(id)parameterSummary;
-(id)inputParameterKey;
-(id)requiredResources;
-(BOOL)outputsMultipleItems;
-(id)descriptionDictionary;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)subcategoryForCategory:(id)arg1 ;
-(id)initWithInterchangeAction:(id)arg1 identifier:(id)arg2 definition:(id)arg3 serializedParameters:(id)arg4 ;
-(BOOL)requiresCallback;
-(BOOL)shouldSuppressCallback;
-(BOOL)callbackIsCurrentlyDisabled;
-(BOOL)mappedValueIsTrue:(id)arg1 forContentMapping:(id)arg2 ;
-(ICAction *)interchangeAction;
-(NSArray *)contentClasses;
-(void)setContentClasses:(NSArray *)arg1 ;
@end

