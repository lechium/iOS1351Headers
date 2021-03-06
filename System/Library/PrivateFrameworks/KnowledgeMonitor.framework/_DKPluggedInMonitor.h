/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKPluggedInMonitor : _DKMonitor {

	BOOL _enabled;
	int _pluggedInToken;

}

@property (assign,nonatomic) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int pluggedInToken;              //@synthesize pluggedInToken=_pluggedInToken - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(void)setIsPluggedIn:(BOOL)arg1 ;
+(id)_eventWithState:(BOOL)arg1 adapterType:(long long)arg2 ;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)deactivate;
-(int)pluggedInToken;
-(void)setPluggedInToken:(int)arg1 ;
-(long long)currentAdapterType;
-(void)setCurrentState;
@end

