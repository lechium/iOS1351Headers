/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMIMotionDetector
@required
-(id)initWithSize:(CGSize)arg1;
-(void)appendFramePixelBuffer:(CVBufferRef)arg1 atTime:(SCD_Struct_HM4)arg2;
-(id)detectWithGlobalMotionScore:(float*)arg1;

@end
