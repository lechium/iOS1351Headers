/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VSServiceConnectionHandlerDelegate;
@class NSXPCConnection;

@interface VSServiceConnectionHandler : NSObject {

	NSXPCConnection* _connection;
	id<VSServiceConnectionHandlerDelegate> _delegate;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                        //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<VSServiceConnectionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VSServiceConnectionHandlerDelegate>)delegate;
-(void)setDelegate:(id<VSServiceConnectionHandlerDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_didFinish;
@end

