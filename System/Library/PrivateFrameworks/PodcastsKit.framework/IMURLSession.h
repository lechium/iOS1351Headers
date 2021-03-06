/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSURLSession.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface IMURLSession : AMSURLSession {

	NSObject*<OS_dispatch_queue> _syncQueue;
	long long _state;
	BOOL _followsRedirects;

}

@property (assign,nonatomic) BOOL followsRedirects;              //@synthesize followsRedirects=_followsRedirects - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) BOOL isUsable; 
-(long long)state;
-(void)invalidateAndCancel;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)finishTasksAndInvalidate;
-(BOOL)isUsable;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)setFollowsRedirects:(BOOL)arg1 ;
-(BOOL)followsRedirects;
-(void)_configureProtocolHandler;
@end

