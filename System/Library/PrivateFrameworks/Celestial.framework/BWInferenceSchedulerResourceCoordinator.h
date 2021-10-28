/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface BWInferenceSchedulerResourceCoordinator : NSObject {

	NSMutableDictionary* _requestedPoolSizeByFormat;
	NSMutableDictionary* _pixelBufferPoolByFormat;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(int)requestPixelBufferPoolForRequirement:(id)arg1 size:(unsigned long long)arg2 ;
-(void)preparePixelBufferPools;
-(id)pixelBufferPoolForFormat:(id)arg1 ;
-(int)requestPixelBufferPoolForFormat:(id)arg1 size:(unsigned long long)arg2 ;
-(id)formatsWithRequestedPoolsRemainingAfterSubtractingFormats:(id)arg1 ;
@end
