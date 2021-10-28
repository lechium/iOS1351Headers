/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NURenderJob.h>

@class AVAsset, NSDictionary;

@interface PIAutoLoopAnalysisJob : NURenderJob {

	AVAsset* _videoSource;
	NSDictionary* _recipe;

}

@property (nonatomic,retain) AVAsset * videoSource;              //@synthesize videoSource=_videoSource - In the implementation block
@property (nonatomic,retain) NSDictionary * recipe;              //@synthesize recipe=_recipe - In the implementation block
-(id)result;
-(id)cacheKey;
-(BOOL)render:(out id*)arg1 ;
-(NSDictionary *)recipe;
-(void)setRecipe:(NSDictionary *)arg1 ;
-(BOOL)prepare:(out id*)arg1 ;
-(AVAsset *)videoSource;
-(void)setVideoSource:(AVAsset *)arg1 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(id)scalePolicy;
-(BOOL)wantsOutputVideo;
-(id)analysisRequest;
@end
