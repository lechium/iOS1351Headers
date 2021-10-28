/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/RLMObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol WFTrustedJavaScriptDomain, WFRealmAccessResourcePermissionState;
@class RLMArray, RLMLinkingObjects;

@interface WFWorkflowTrustedResources : RLMObject <NSCopying> {

	RLMArray*<WFTrustedJavaScriptDomain> _trustedDomains;
	RLMArray*<WFRealmAccessResourcePermissionState> _accessResourcePermissionStates;
	RLMLinkingObjects* _workflows;

}

@property (retain) RLMArray*<WFTrustedJavaScriptDomain> trustedDomains;                                         //@synthesize trustedDomains=_trustedDomains - In the implementation block
@property (retain) RLMArray*<WFRealmAccessResourcePermissionState> accessResourcePermissionStates;              //@synthesize accessResourcePermissionStates=_accessResourcePermissionStates - In the implementation block
@property (readonly) RLMLinkingObjects * workflows;                                                             //@synthesize workflows=_workflows - In the implementation block
+(id)requiredProperties;
+(id)linkingObjectsProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RLMArray*<WFTrustedJavaScriptDomain>)trustedDomains;
-(RLMArray*<WFRealmAccessResourcePermissionState>)accessResourcePermissionStates;
-(RLMLinkingObjects *)workflows;
-(void)setTrustedDomains:(RLMArray*<WFTrustedJavaScriptDomain>)arg1 ;
-(void)setAccessResourcePermissionStates:(RLMArray*<WFRealmAccessResourcePermissionState>)arg1 ;
@end
