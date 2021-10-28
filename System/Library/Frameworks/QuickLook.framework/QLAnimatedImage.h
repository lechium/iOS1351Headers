/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <QuickLook/QuickLook-Structs.h>
@class QLImageData, UIImage;

@interface QLAnimatedImage : NSObject {

	QLImageData* _imageData;
	unsigned long long _durationsCount;
	QLFrameDurationInformation* _durations;
	double _duration;
	UIImage* _lastImage;
	unsigned long long _lastImageIndex;

}
-(void)dealloc;
-(double)duration;
-(unsigned long long)frameCount;
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(void)generateDurations;
-(BOOL)time:(double)arg1 belongsToIndex:(unsigned long long)arg2 ;
-(long long)indexForTime:(double)arg1 ;
-(id)frameAtTime:(double)arg1 ;
@end
