/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSObject;

@interface RBSXPCMessageContext : NSObject {

	NSObject*<OS_xpc_object> _handoffToken;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
+(id)currentContext;
-(NSObject*<OS_xpc_object>)connection;
-(void)_unset;
-(void)_set;
-(id)_initWithHandoffToken:(id)arg1 ;
-(void)handoffToQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end
