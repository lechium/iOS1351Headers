/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/RLMObject.h>

@class NSString, NSDate, RLMLinkingObjects;

@interface WFRealmWorkflowQuarantine : RLMObject {

	NSString* _sourceAppIdentifier;
	NSDate* _importDate;
	RLMLinkingObjects* _workflows;

}

@property (copy) NSString * sourceAppIdentifier;                 //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (retain) NSDate * importDate;                          //@synthesize importDate=_importDate - In the implementation block
@property (readonly) RLMLinkingObjects * workflows;              //@synthesize workflows=_workflows - In the implementation block
+(id)className;
+(id)requiredProperties;
+(id)defaultPropertyValues;
+(id)linkingObjectsProperties;
-(NSString *)sourceAppIdentifier;
-(void)setImportDate:(NSDate *)arg1 ;
-(void)setSourceAppIdentifier:(NSString *)arg1 ;
-(NSDate *)importDate;
-(RLMLinkingObjects *)workflows;
@end

