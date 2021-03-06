/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IdleTimerServices/IdleTimerServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface ITIdleTimerConfiguration : NSObject <NSCopying, BSXPCSecureCoding, BSDescriptionProviding> {

	BOOL _disablesTimer;
	NSString* _identifier;
	unsigned long long _idleEventMask;
	/*^block*/id _idleEventHandlerBlock;

}

@property (getter=_identifier,nonatomic,copy,readonly) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,setter=_setIdleEventMask:,getter=_idleEventMask,nonatomic) unsigned long long idleEventMask;                    //@synthesize idleEventMask=_idleEventMask - In the implementation block
@property (setter=_setIdleEventHandlerBlock:,getter=_idleEventHandlerBlock,nonatomic,copy) id idleEventHandlerBlock;              //@synthesize idleEventHandlerBlock=_idleEventHandlerBlock - In the implementation block
@property (assign,nonatomic) BOOL disablesTimer;                                                                                  //@synthesize disablesTimer=_disablesTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)configurationToDisableIdleTimer;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_identifier;
-(id)initWithConfiguration:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(void)_setIdleEventMask:(unsigned long long)arg1 ;
-(void)_setIdleEventHandlerBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_idleEventMask;
-(id)_copyWithNewIdentifier;
-(BOOL)disablesTimer;
-(/*^block*/id)_idleEventHandlerBlock;
-(void)setDisablesTimer:(BOOL)arg1 ;
@end

