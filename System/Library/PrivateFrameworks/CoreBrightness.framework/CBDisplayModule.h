/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreBrightness/CBModule.h>
#import <libobjc.A.dylib/CBContainerModuleProtocol.h>
#import <libobjc.A.dylib/CBStatusInfoProtocol.h>

@class NSString;

@interface CBDisplayModule : CBModule <CBContainerModuleProtocol, CBStatusInfoProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)stop;
-(void)start;
-(id)copyPropertyForKey:(id)arg1 ;
-(id)copyPropertyInternalForKey:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(id)copyIdentifiers;
@end
