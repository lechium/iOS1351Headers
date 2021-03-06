/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangeQueueEndActionCommandEvent : MPRemoteCommandEvent {

	BOOL _preservesQueueEndAction;
	long long _queueEndAction;

}

@property (nonatomic,readonly) long long queueEndAction;                  //@synthesize queueEndAction=_queueEndAction - In the implementation block
@property (nonatomic,readonly) BOOL preservesQueueEndAction;              //@synthesize preservesQueueEndAction=_preservesQueueEndAction - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(long long)queueEndAction;
-(BOOL)preservesQueueEndAction;
@end

