/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable, NSString;

@interface MCDNowPlayingObserver : NSObject {

	NSHashTable* _observers;
	unsigned _playbackState;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                 //@synthesize playbackState=_playbackState - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned)playbackState;
-(void)setPlaybackState:(unsigned)arg1 ;
-(void)_notifyObservers;
-(unsigned)queryPlaybackState;
-(void)playbackStateChanged:(id)arg1 ;
@end
