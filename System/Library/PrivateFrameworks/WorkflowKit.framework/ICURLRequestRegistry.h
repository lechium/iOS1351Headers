/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableDictionary;

@interface ICURLRequestRegistry : NSObject {

	NSMutableArray* _activeRequests;
	NSMutableDictionary* _requestHandlers;

}

@property (nonatomic,retain) NSMutableArray * activeRequests;                    //@synthesize activeRequests=_activeRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestHandlers;              //@synthesize requestHandlers=_requestHandlers - In the implementation block
+(id)sharedRegistry;
-(NSMutableDictionary *)requestHandlers;
-(NSMutableArray *)activeRequests;
-(void)registerHandler:(/*^block*/id)arg1 forIncomingRequestsWithAction:(id)arg2 scheme:(id)arg3 ;
-(void)removeHandlerForIncomingRequestsWithAction:(id)arg1 scheme:(id)arg2 ;
-(/*^block*/id)handlerForIncomingRequestWithAction:(id)arg1 scheme:(id)arg2 ;
-(void)registerOutgoingRequest:(id)arg1 ;
-(id)popRequest:(id)arg1 ;
-(id)popActiveRequest;
-(id)popRequestWithUUID:(id)arg1 ;
-(void)setActiveRequests:(NSMutableArray *)arg1 ;
-(void)setRequestHandlers:(NSMutableDictionary *)arg1 ;
@end

