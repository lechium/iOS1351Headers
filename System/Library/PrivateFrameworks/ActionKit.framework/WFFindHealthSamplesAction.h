/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFContentItemFilterAction.h>

@class NSString;

@interface WFFindHealthSamplesAction : WFContentItemFilterAction

@property (nonatomic,readonly) NSString * readableSampleType; 
-(id)query;
-(id)configurationData;
-(void)initializeParameters;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(void)finishRunningWithError:(id)arg1 ;
-(id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2 ;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(id)parameterDefinitions;
-(void)resourceAvailabilityChanged;
-(void)updateParameterVisibility;
-(NSString *)readableSampleType;
-(id)sampleTypeName;
-(void)updateSourcesForSampleType:(id)arg1 ;
-(void)finishRunningWithNoSamples;
@end
