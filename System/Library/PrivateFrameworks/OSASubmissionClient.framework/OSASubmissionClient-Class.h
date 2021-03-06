/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OSASubmissionClient.framework/OSASubmissionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OSASubmissionClient/OSASubmissionServices.h>

@protocol OSASubmissionServices;
@class NSXPCConnection, NSString;

@interface OSASubmissionClient : NSObject <OSASubmissionServices> {

	NSXPCConnection* _connection;
	id<OSASubmissionServices> _synchRemoteObjectProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)submitWithOptions:(id)arg1 resultsCallback:(/*^block*/id)arg2 ;
-(id)initWithErrorHandler:(/*^block*/id)arg1 ;
@end

