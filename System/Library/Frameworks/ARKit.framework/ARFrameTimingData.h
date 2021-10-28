/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSDictionary;

@interface ARFrameTimingData : NSObject {

	NSMutableDictionary* _timestampsByDataClassKey;
	double _videoLatency;

}

@property (assign,nonatomic) double videoLatency;                      //@synthesize videoLatency=_videoLatency - In the implementation block
@property (nonatomic,readonly) NSDictionary * timestamps; 
-(id)init;
-(NSDictionary *)timestamps;
-(void)addTimestamp:(double)arg1 forDataOfClass:(Class)arg2 ;
-(double)videoLatency;
-(void)setVideoLatency:(double)arg1 ;
@end
