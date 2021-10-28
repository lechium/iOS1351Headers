/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSURLSessionConfiguration, NSURLSession;


@protocol __NSURLSessionTaskGroupForConfiguration <NSObject>
@property (__weak,readonly) NSURLSessionConfiguration * _groupConfiguration; 
@property (__weak,readonly) NSURLSession * _groupSession; 
@required
-(id)dataTaskWithRequest:(id)arg1;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)uploadTaskWithStreamedRequest:(id)arg1;
-(NSURLSessionConfiguration *)_groupConfiguration;
-(NSURLSession *)_groupSession;

@end
