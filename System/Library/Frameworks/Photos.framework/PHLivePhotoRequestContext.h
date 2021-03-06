/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHImageRequest, PHVideoRequest, PHLivePhotoResult, PHLivePhotoRequestOptions;

@interface PHLivePhotoRequestContext : PHMediaRequestContext {

	NSProgress* _imageProgress;
	NSProgress* _videoProgress;
	PHImageRequest* _initialImageRequest;
	PHImageRequest* _finalImageRequest;
	PHVideoRequest* _videoRequest;
	PHLivePhotoResult* _livePhotoResult;
	AB _finalImageRequestStarted;
	AB _finalImageReceived;
	AB _finalVideoReceived;
	PHLivePhotoRequestOptions* _livePhotoOptions;

}

@property (nonatomic,readonly) PHLivePhotoRequestOptions * livePhotoOptions;              //@synthesize livePhotoOptions=_livePhotoOptions - In the implementation block
-(long long)type;
-(/*^block*/id)progressHandler;
-(BOOL)isNetworkAccessAllowed;
-(id)initialRequests;
-(id)progresses;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3 result:(id)arg4 ;
-(BOOL)shouldReportProgress;
-(BOOL)representsShareableHighQualityResource;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(BOOL)_shouldRequestVideo;
-(id)_lazyImageProgress;
-(id)_lazyVideoProgress;
-(void)_setFinalImageRequestFromRequest:(id)arg1 ;
-(PHLivePhotoRequestOptions *)livePhotoOptions;
@end

