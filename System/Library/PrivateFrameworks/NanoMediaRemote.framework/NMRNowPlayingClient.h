/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NMRNowPlayingClient : NSObject {

	void* _mediaRemoteNowPlayingClient;
	NSString* _bundleIdentifier;
	NSString* _displayName;

}

@property (nonatomic,readonly) void* mediaRemoteNowPlayingClient;              //@synthesize mediaRemoteNowPlayingClient=_mediaRemoteNowPlayingClient - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
-(void*)mediaRemoteNowPlayingClient;
-(id)initWithMRNowPlayingClient:(void*)arg1 ;
@end
