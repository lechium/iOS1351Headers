/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVAudioPlayerDelegate, OS_dispatch_queue;
#import <AVFAudio/AVFAudio-Structs.h>
@class NSData, NSURL, NSDictionary, AVAudioFormat, NSArray, AVAudioSession, NSObject;

@interface AudioPlayerImpl : NSObject {

	id<AVAudioPlayerDelegate> _delegate;
	NSData* _data;
	NSURL* _url;
	NSDictionary* _actualSettings;
	AVAudioFormat* _format;
	BOOL _playRetain;
	NSArray* _channelAssignments;
	AVAudioSession* _audioSession;
	BOOL _sessionListenerWasSet;
	unsigned long long _endInterruptionFlags;
	AVAudioPlayerCpp* _localPlayer;
	NSObject*<OS_dispatch_queue> _gcd;

}
-(id)init;
-(void)dealloc;
@end
