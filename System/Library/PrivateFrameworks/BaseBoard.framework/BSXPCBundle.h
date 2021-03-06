/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_xpc_object;
@class NSString, NSDictionary, NSObject;

@interface BSXPCBundle : NSObject <BSDescriptionProviding> {

	NSString* _bundleIdentifier;
	NSString* _bundlePath;
	NSString* _executablePath;
	NSDictionary* _infoDictionary;
	NSObject*<OS_xpc_object> _xpcBundle;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundlePath;                      //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * executablePath;                  //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * infoDictionary;              //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcBundle;              //@synthesize xpcBundle=_xpcBundle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundleWithPath:(id)arg1 ;
+(id)mainBundle;
+(id)bundleWithXPCBundle:(id)arg1 ;
+(id)bundleForPID:(int)arg1 ;
+(id)bundleWithExecutablePath:(id)arg1 ;
-(NSString *)description;
-(NSString *)bundleIdentifier;
-(NSDictionary *)infoDictionary;
-(NSString *)bundlePath;
-(NSString *)executablePath;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithXPCBundle:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcBundle;
@end

