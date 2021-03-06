/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMIDenseOpticalFlowFrame : HMFObject {

	CVBufferRef _pixelBuffer;
	SCD_Struct_HM4 _time;

}

@property (readonly) CVBufferRef pixelBuffer;              //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) SCD_Struct_HM4 time;                  //@synthesize time=_time - In the implementation block
-(void)dealloc;
-(SCD_Struct_HM4)time;
-(CVBufferRef)pixelBuffer;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 atTime:(SCD_Struct_HM4)arg2 ;
@end

