/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionEndpointInjectorConfiguring.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class BSServiceManager, RBSTarget, NSArray, NSString, RBSAssertion;

@interface BSServiceConnectionEndpointInjector : NSObject <BSServiceConnectionEndpointInjectorConfiguring, BSInvalidatable> {

	os_unfair_lock_s _lock;
	BSServiceManager* _manager;
	RBSTarget* _target;
	NSArray* _additionalAttributes;
	NSString* _domain;
	NSString* _service;
	NSString* _instance;
	NSString* _inheritingEnvironment;
	RBSAssertion* _assertion;
	BOOL _invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)injectorWithConfigurator:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)setTarget:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(void)setInstance:(id)arg1 ;
-(void)setInheritingEnvironment:(id)arg1 ;
-(void)setAdditionalAttributes:(id)arg1 ;
-(id)_initWithManager:(id)arg1 configurator:(/*^block*/id)arg2 ;
-(void)setService:(id)arg1 ;
@end

