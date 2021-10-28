/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreFoundation/CoreFoundation-Structs.h>
@class _CFXNotificationRegistrationContainer, _CFXNotificationRegistrar;

@interface _CFXNotificationRegistrationBase : NSObject {

	_CFXNotificationRegistrationContainer* _parent;
	os_unfair_lock_s _lock;

}

@property (__weak,readonly) _CFXNotificationRegistrationContainer * parent; 
@property (readonly) _CFXNotificationRegistrar * registrar; 
@property (readonly) void* key; 
+(const SCD_Struct_CF2*)keyCallbacks;
-(id)init;
-(void)dealloc;
-(void)removeFromParent:(unsigned long long)arg1 ;
-(_CFXNotificationRegistrationContainer *)parent;
-(void*)key;
-(id)initWithParent:(id)arg1 ;
-(void)setParent:(_CFXNotificationRegistrationContainer *)arg1 ;
-(_CFXNotificationRegistrar *)registrar;
@end
