/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WK_RTCVideoEncoderQpThresholds : NSObject {

	long long _low;
	long long _high;

}

@property (nonatomic,readonly) long long low;               //@synthesize low=_low - In the implementation block
@property (nonatomic,readonly) long long high;              //@synthesize high=_high - In the implementation block
-(long long)high;
-(long long)low;
-(id)initWithThresholdsLow:(long long)arg1 high:(long long)arg2 ;
@end

