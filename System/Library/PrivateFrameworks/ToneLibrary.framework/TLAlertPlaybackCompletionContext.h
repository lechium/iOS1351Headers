/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError;

@interface TLAlertPlaybackCompletionContext : NSObject {

	/*^block*/id _completionHandler;
	long long _playbackCompletionType;
	NSError* _error;

}

@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long playbackCompletionType;              //@synthesize playbackCompletionType=_playbackCompletionType - In the implementation block
@property (nonatomic,copy) NSError * error;                                 //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setPlaybackCompletionType:(long long)arg1 ;
-(long long)playbackCompletionType;
@end
