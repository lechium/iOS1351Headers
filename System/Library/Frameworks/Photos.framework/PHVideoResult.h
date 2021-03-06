/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHCompositeMediaResult.h>

@class NSURL;

@interface PHVideoResult : PHCompositeMediaResult {

	NSURL* _videoURL;

}

@property (nonatomic,retain) NSURL * videoURL;              //@synthesize videoURL=_videoURL - In the implementation block
-(NSURL *)videoURL;
-(BOOL)containsValidData;
-(id)videoAdjustmentData;
-(void)setVideoAdjustmentData:(id)arg1 ;
-(void)setVideoURL:(NSURL *)arg1 ;
@end

