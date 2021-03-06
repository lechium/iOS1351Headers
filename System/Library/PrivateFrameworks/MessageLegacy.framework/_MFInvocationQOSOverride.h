/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MessageLegacy/MessageLegacy-Structs.h>
@interface _MFInvocationQOSOverride : NSObject {

	pthread_override_sRef _override;
	BOOL _lowPriority;
	unsigned _desiredQoS;
	opaque_pthread_t* _pthread;

}

@property (getter=isLowPriority,nonatomic,readonly) BOOL lowPriority;              //@synthesize lowPriority=_lowPriority - In the implementation block
@property (nonatomic,readonly) unsigned desiredQoS;                                //@synthesize desiredQoS=_desiredQoS - In the implementation block
@property (nonatomic,readonly) opaque_pthread_t* pthread;                          //@synthesize pthread=_pthread - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isLowPriority;
-(BOOL)removeOverride;
-(opaque_pthread_t*)pthread;
-(unsigned)desiredQoS;
-(id)initWithPthread:(opaque_pthread_t*)arg1 desiredQoS:(unsigned)arg2 lowPriority:(BOOL)arg3 ;
-(void)applyOverrideWhileForeground:(BOOL)arg1 ;
@end

