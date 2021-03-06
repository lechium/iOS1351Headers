/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKSecureElementApplet : NSObject <NSSecureCoding> {

	BOOL _locked;
	BOOL _containsSubKeys;
	NSString* _identifier;
	unsigned long long _lifecycleState;

}

@property (nonatomic,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long lifecycleState;              //@synthesize lifecycleState=_lifecycleState - In the implementation block
@property (getter=isLocked,nonatomic,readonly) BOOL locked;                    //@synthesize locked=_locked - In the implementation block
@property (nonatomic,readonly) BOOL containsSubKeys;                           //@synthesize containsSubKeys=_containsSubKeys - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureElementAppletWithInternalApplet:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isLocked;
-(unsigned long long)lifecycleState;
-(BOOL)containsSubKeys;
-(id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned long long)arg2 locked:(BOOL)arg3 containsSubKeys:(BOOL)arg4 ;
-(id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned long long)arg2 ;
@end

