/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFGranularAccessResource.h>

@class NSArray;

@interface WFRemoteServerAccessResource : WFGranularAccessResource {

	NSArray* _requestedURLs;

}

@property (nonatomic,copy) NSArray * requestedURLs;              //@synthesize requestedURLs=_requestedURLs - In the implementation block
+(BOOL)isSystemResource;
+(Class)perWorkflowStateClass;
-(id)name;
-(id)icon;
-(unsigned long long)globalLevelStatus;
-(id)localizedWorkflowLevelNotDeterminedStatusMessage;
-(id)localizedWorkflowLevelDeniedStatusMessage;
-(id)localizedWorkflowLevelPromptTemplate;
-(id)localizedWorkflowLevelMessageTemplate;
-(id)requestedEntries;
-(void)setRequestedURLs:(NSArray *)arg1 ;
-(NSArray *)requestedURLs;
@end
