/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol WFVariableProvider <NSObject>
@property (nonatomic,readonly) NSArray * availableVariableNames; 
@property (nonatomic,readonly) NSArray * availableOutputActions; 
@property (nonatomic,readonly) NSArray * workflowInputClasses; 
@required
-(BOOL)hasAvailableVariables;
-(BOOL)isVariableWithNameAvailable:(id)arg1;
-(id)possibleContentClassesForVariableNamed:(id)arg1 context:(id)arg2;
-(BOOL)hasAvailableActionOutputVariables;
-(BOOL)isVariableWithOutputUUIDAvailable:(id)arg1;
-(id)actionProvidingVariableWithOutputUUID:(id)arg1;
-(id)actionsProvidingVariableName:(id)arg1;
-(void)addVariableObserver:(id)arg1;
-(void)removeVariableObserver:(id)arg1;
-(NSArray *)availableVariableNames;
-(NSArray *)availableOutputActions;
-(NSArray *)workflowInputClasses;

@end

