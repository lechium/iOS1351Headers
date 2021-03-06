/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class _CDClientContext, _CDContextualKeyPath, _CDContextualChangeRegistration, NSDictionary, NSObject, _CDContextualPredicate;

@interface SunriseSunsetProvider : NSObject {

	_CDClientContext* _duetContextStore;
	_CDContextualKeyPath* _duetKeyPath;
	_CDContextualChangeRegistration* _duetRegistration;
	NSDictionary* _duetInfo;
	NSObject*<OS_dispatch_semaphore> _duetDispatchSemaphore;
	BOOL _sunriseSunsetNotificationEnabled;
	/*^block*/id _callbackBlock;
	/*^block*/id _duetCallback;
	_CDContextualPredicate* _predicate;
	int _logLevel;

}

@property (assign) int logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
-(void)dealloc;
-(void)cancel;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(void)unregisterBlock;
-(void)registerBlock:(/*^block*/id)arg1 ;
-(id)copySunriseSunsetInfo:(int)arg1 ;
-(void)updateSunriseSunsetInfo;
-(void)unregisterNotification;
-(id)copySunsetSunriseInfoFromContext;
@end

