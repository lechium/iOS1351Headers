/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKPlayerStateChangeEventUserInfo.h>

@interface IKPlayerShouldHandleStateChangeEventUserInfo : IKPlayerStateChangeEventUserInfo {

	BOOL _shouldHandle;
	double _requestedTime;
	double _proposedTime;

}

@property (nonatomic,readonly) double requestedTime;              //@synthesize requestedTime=_requestedTime - In the implementation block
@property (nonatomic,readonly) BOOL shouldHandle;                 //@synthesize shouldHandle=_shouldHandle - In the implementation block
@property (nonatomic,readonly) double proposedTime;               //@synthesize proposedTime=_proposedTime - In the implementation block
-(id)initWithState:(long long)arg1 ;
-(double)proposedTime;
-(void)processReturnJSValue:(id)arg1 inContext:(id)arg2 ;
-(double)requestedTime;
-(id)initWithState:(long long)arg1 oldState:(long long)arg2 ;
-(id)initWithState:(long long)arg1 requestedTime:(double)arg2 ;
-(id)initWithState:(long long)arg1 oldState:(long long)arg2 requestedTime:(double)arg3 ;
-(BOOL)shouldHandle;
@end

