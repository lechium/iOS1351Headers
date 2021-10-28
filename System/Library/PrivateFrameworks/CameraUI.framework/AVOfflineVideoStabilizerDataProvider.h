/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVOfflineVideoStabilizerDataProvider <NSObject>
@required
-(id)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CA7*)arg2 stabilizer:(id)arg3;
-(CVBufferRef)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CA7*)arg2 stabilizer:(id)arg3;

@end
