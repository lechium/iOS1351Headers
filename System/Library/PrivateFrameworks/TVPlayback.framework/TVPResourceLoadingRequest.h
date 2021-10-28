/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVAssetResourceLoadingRequest, NSNumber, NSDictionary, NSURL;

@interface TVPResourceLoadingRequest : NSObject {

	AVAssetResourceLoadingRequest* _loadingRequest;

}

@property (nonatomic,readonly) AVAssetResourceLoadingRequest * loadingRequest;              //@synthesize loadingRequest=_loadingRequest - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * avRequestID; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) BOOL isCancelled; 
-(id)init;
-(BOOL)isCancelled;
-(NSDictionary *)dictionaryRepresentation;
-(NSURL *)URL;
-(void)finishLoadingWithError:(id)arg1 ;
-(AVAssetResourceLoadingRequest *)loadingRequest;
-(id)initWithAssetResourceLoadingRequest:(id)arg1 ;
-(void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 renewalDate:(id)arg3 redirect:(id)arg4 ;
-(void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3 ;
-(NSNumber *)avRequestID;
@end
