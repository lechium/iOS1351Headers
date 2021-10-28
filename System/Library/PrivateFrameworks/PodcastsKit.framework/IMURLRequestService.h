/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsKit/IMBaseStoreService.h>

@class NSURLRequest;

@interface IMURLRequestService : IMBaseStoreService {

	NSURLRequest* _mutableRequest;

}

@property (nonatomic,retain) id<NSURLSessionDelegate><AMSURLProtocolDelegate> urlSessionDelegate; 
@property (nonatomic,retain) NSURLRequest * mutableRequest;                                                    //@synthesize mutableRequest=_mutableRequest - In the implementation block
-(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)urlSessionDelegate;
-(void)performRequest:(/*^block*/id)arg1 ;
-(void)setUrlSessionDelegate:(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)arg1 ;
-(NSURLRequest *)mutableRequest;
-(void)setMutableRequest:(NSURLRequest *)arg1 ;
@end
