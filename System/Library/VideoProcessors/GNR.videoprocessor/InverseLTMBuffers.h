/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLTexture;
#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@interface InverseLTMBuffers : NSObject {

	id<MTLTexture> inverseLtmTex;
	id<MTLTexture> inverseGlobalLtmTex;
	id<MTLTexture> inverseGtcTex;

}
-(id)initWithMetal:(id)arg1 ;
-(int)setToneCurves:(ltmCurves*)arg1 ;
@end

