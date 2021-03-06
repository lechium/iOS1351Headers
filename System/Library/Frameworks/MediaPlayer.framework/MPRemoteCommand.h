/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, MPRemoteCommandDelegate_Internal, MPRemoteCommandDelegate_Private;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSMutableDictionary;

@interface MPRemoteCommand : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _handlers;
	BOOL _enabled;
	BOOL _observing;
	unsigned _mediaRemoteCommandType;
	id<MPRemoteCommandDelegate_Internal> _commandCenterDelegate;
	id<MPRemoteCommandDelegate_Private> _delegate;

}

@property (assign,nonatomic,__weak) id<MPRemoteCommandDelegate_Internal> commandCenterDelegate;              //@synthesize commandCenterDelegate=_commandCenterDelegate - In the implementation block
@property (assign,getter=isObserving,nonatomic) BOOL observing;                                              //@synthesize observing=_observing - In the implementation block
@property (nonatomic,readonly) BOOL hasTargets; 
@property (getter=isSupported,nonatomic,readonly) BOOL supported; 
@property (getter=isSupportedAndEnabled,nonatomic,readonly) BOOL supportedAndEnabled; 
@property (nonatomic,readonly) unsigned mediaRemoteCommandType;                                              //@synthesize mediaRemoteCommandType=_mediaRemoteCommandType - In the implementation block
@property (assign,nonatomic,__weak) id<MPRemoteCommandDelegate_Private> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(id<MPRemoteCommandDelegate_Private>)delegate;
-(void)setDelegate:(id<MPRemoteCommandDelegate_Private>)arg1 ;
-(BOOL)isEnabled;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)isSupported;
-(id)addTargetWithHandler:(/*^block*/id)arg1 ;
-(void)removeTarget:(id)arg1 ;
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
-(BOOL)isSupportedForContentItemIdentifier:(id)arg1 ;
-(BOOL)isEnabledForContentItemIdentifier:(id)arg1 ;
-(BOOL)isSupportedAndEnabled;
-(BOOL)hasTargets;
-(void)invokeCommandWithEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MRMediaRemoteCommandInfoRef)createCommandInfoRepresentation;
-(void)notifyPropagatablePropertyChanged;
-(id)newCommandEvent;
-(id)newCommandEventWithContentItemIdentifier:(id)arg1 ;
-(id)newCommandEventWithPlaybackQueueOffset:(long long)arg1 ;
-(id)newCommandEventWithCommandType:(unsigned)arg1 options:(id)arg2 ;
-(id)newSeekCommandEventWithType:(unsigned long long)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(id<MPRemoteCommandDelegate_Internal>)commandCenterDelegate;
-(void)setCommandCenterDelegate:(id<MPRemoteCommandDelegate_Internal>)arg1 ;
-(BOOL)isObserving;
-(void)setObserving:(BOOL)arg1 ;
-(unsigned)mediaRemoteCommandType;
@end

