/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, _SBStatusBarTapApplicationDestination;

@interface _SBStatusBarTapHandler : NSObject {

	NSURL* _url;
	/*^block*/id _block;
	_SBStatusBarTapApplicationDestination* _appDestination;
	_SBStatusBarTapApplicationDestination* _applicationDestination;

}

@property (nonatomic,copy,readonly) _SBStatusBarTapApplicationDestination * applicationDestination;              //@synthesize applicationDestination=_applicationDestination - In the implementation block
@property (nonatomic,readonly) BOOL canRequestUnlock; 
-(id)initWithURL:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)handleTap;
-(_SBStatusBarTapApplicationDestination *)applicationDestination;
-(BOOL)canRequestUnlock;
-(id)initWithApplicationDestination:(id)arg1 ;
@end

