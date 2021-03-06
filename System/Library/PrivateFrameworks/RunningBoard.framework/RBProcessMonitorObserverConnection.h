/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RBProcessMonitorObserverConnection.h>

@protocol RBProcessMonitorObserverConnection <NSObject>
@required
-(void)sendMessage:(id)arg1 replyQueue:(id)arg2 completion:(/*^block*/id)arg3;

@end


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface RBProcessMonitorObserverConnection : NSObject <RBProcessMonitorObserverConnection> {

	NSObject*<OS_xpc_object> _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(void)sendMessage:(id)arg1 replyQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

