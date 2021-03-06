/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TUDialRequest.h>

@interface TCDialRequest : TUDialRequest {

	BOOL _remoteUplinkMuted;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
@property (assign,getter=isRemoteUplinkMuted,nonatomic) BOOL remoteUplinkMuted;              //@synthesize remoteUplinkMuted=_remoteUplinkMuted - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)state;
-(id)URL;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isRemoteUplinkMuted;
-(void)setRemoteUplinkMuted:(BOOL)arg1 ;
@end

