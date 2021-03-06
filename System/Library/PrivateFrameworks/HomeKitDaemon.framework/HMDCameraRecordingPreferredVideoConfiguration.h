/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber;

@interface HMDCameraRecordingPreferredVideoConfiguration : NSObject {

	NSNumber* _frameRate;
	NSNumber* _bitRate;
	NSNumber* _keyFrameInterval;
	long long _resolution;
	long long _h264Level;

}

@property (readonly) NSNumber * frameRate;                     //@synthesize frameRate=_frameRate - In the implementation block
@property (readonly) NSNumber * bitRate;                       //@synthesize bitRate=_bitRate - In the implementation block
@property (readonly) NSNumber * keyFrameInterval;              //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (readonly) long long resolution;                     //@synthesize resolution=_resolution - In the implementation block
@property (readonly) long long h264Level;                      //@synthesize h264Level=_h264Level - In the implementation block
-(id)description;
-(long long)resolution;
-(NSNumber *)bitRate;
-(NSNumber *)frameRate;
-(NSNumber *)keyFrameInterval;
-(long long)h264Level;
-(id)initWithResolution:(long long)arg1 frameRate:(id)arg2 bitRate:(id)arg3 keyFrameInterval:(id)arg4 h264Level:(long long)arg5 ;
@end

