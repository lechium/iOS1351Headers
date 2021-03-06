/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject {

	NSOperationQueue* _serviceThrottlingOperationQueue;
	NSXPCConnection* _serverConnection;

}

@property (nonatomic,retain) NSOperationQueue * serviceThrottlingOperationQueue;              //@synthesize serviceThrottlingOperationQueue=_serviceThrottlingOperationQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverConnection;                              //@synthesize serverConnection=_serverConnection - In the implementation block
+(id)sharedService;
-(id)init;
-(void)dealloc;
-(void)sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSXPCConnection *)serverConnection;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(void)setServiceThrottlingOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)serviceThrottlingOperationQueue;
@end

