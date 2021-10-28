/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteManagement/RMConfigurationSubscriberClient.h>

@protocol RMConfigurationEventStreamSubscriberDelegate;
@class NSObject, NSArray;

@interface RMConfigurationEventStreamSubscriber : RMConfigurationSubscriberClient {

	NSObject* _delegationLock;
	NSArray* _configurationTypes;
	id<RMConfigurationEventStreamSubscriberDelegate> _delegate;
	id _eventStreamObserver;

}

@property (nonatomic,retain) id eventStreamObserver;                                                        //@synthesize eventStreamObserver=_eventStreamObserver - In the implementation block
@property (nonatomic,readonly) NSArray * configurationTypes;                                                //@synthesize configurationTypes=_configurationTypes - In the implementation block
@property (assign,nonatomic,__weak) id<RMConfigurationEventStreamSubscriberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)_setupEventHandler;
+(id)_eventDescriptorByNameForEventStreamNamed:(id)arg1 ;
+(id)configuredConfigurationTypes;
-(id)init;
-(void)dealloc;
-(id<RMConfigurationEventStreamSubscriberDelegate>)delegate;
-(void)setDelegate:(id<RMConfigurationEventStreamSubscriberDelegate>)arg1 ;
-(void)start;
-(void)_handleEvent:(id)arg1 ;
-(void)_setupEventHandler;
-(NSArray *)configurationTypes;
-(void)_fetchConfigurationsAndNotifyDelegateIfNeeded:(id)arg1 ;
-(void)setEventStreamObserver:(id)arg1 ;
-(void)_delegateDidFailToFetchConfigurationsWithTypes:(id)arg1 error:(id)arg2 ;
-(void)_delegateDidFetchConfigurationsByType:(id)arg1 ;
-(id)eventStreamObserver;
@end
