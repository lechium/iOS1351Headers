/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CACUserAttentionSignalProviderFactory : NSObject {

	double _samplingInterval;
	double _attentionLossTimeout;
	unsigned long long _supportedAttentionAwarenessEvents;

}
+(id)_attentionAwarenessConfigurationWithIdentifier:(id)arg1 eventMask:(unsigned long long)arg2 samplingInterval:(double)arg3 attentionLossTimeout:(double)arg4 ;
-(id)wakeGestureManager;
-(unsigned long long)_faceAttentionAwarenessEventMask;
-(unsigned long long)_touchAttentionAwarenessEventMask;
-(id)initWithSamplingInterval:(double)arg1 attentionLossTimeout:(double)arg2 supportedAttentionAwarenessEvents:(unsigned long long)arg3 ;
-(id)faceAttentionAwarenessClient;
-(id)touchAttentionAwarenessClient;
@end
