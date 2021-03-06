/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaSafetyNet.framework/MediaSafetyNet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection, NSString;

@interface MSNScopedException : NSObject {

	NSXPCConnection* _connection;
	NSString* _exception;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSString * exception;                      //@synthesize exception=_exception - In the implementation block
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSString *)exception;
-(void)setException:(NSString *)arg1 ;
-(id)initWithConnection:(id)arg1 exception:(id)arg2 ;
@end

