/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVWeakReference;

@interface AVCMNotificationDispatcherListenerAndCallback : NSObject {

	AVWeakReference* _weakReferenceToListener;
	/*function pointer*/void* _callback;
	void* _callbackContextToken;

}

@property (nonatomic,readonly) id listener; 
@property (nonatomic,readonly) /*function pointer*/void* callback;              //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) void* callbackContextToken;                        //@synthesize callbackContextToken=_callbackContextToken - In the implementation block
-(id)init;
-(void)dealloc;
-(id)listener;
-(/*function pointer*/void*)callback;
-(id)initWithWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 ;
-(void)setCallbackContextToken:(void*)arg1 ;
-(void*)callbackContextToken;
@end

