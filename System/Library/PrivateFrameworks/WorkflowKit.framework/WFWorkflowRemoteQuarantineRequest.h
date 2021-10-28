/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFBaseRemoteQuarantineRequest.h>

@class WFWorkflow, NSDictionary;

@interface WFWorkflowRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest {

	WFWorkflow* _workflow;
	NSDictionary* _workflowJavaScriptCoreRepresentation;

}

@property (nonatomic,readonly) WFWorkflow * workflow;                                        //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,copy) NSDictionary * workflowJavaScriptCoreRepresentation;              //@synthesize workflowJavaScriptCoreRepresentation=_workflowJavaScriptCoreRepresentation - In the implementation block
+(id)JSONKeyPathsByPropertyKey;
-(WFWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(id)policyFunctionName;
-(id)defaultLocalizedDeniedErrorTitle;
-(id)defaultLocalizedDeniedErrorMessage;
-(id)javaScriptCoreRepresentationWithError:(id*)arg1 ;
-(id)workflowJavaScriptCoreRepresentationWithError:(id*)arg1 ;
-(NSDictionary *)workflowJavaScriptCoreRepresentation;
-(void)setWorkflowJavaScriptCoreRepresentation:(NSDictionary *)arg1 ;
@end
