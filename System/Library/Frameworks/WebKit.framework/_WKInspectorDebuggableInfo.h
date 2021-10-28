/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _WKInspectorDebuggableInfo : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::DebuggableInfo> _debuggableInfo;

}

@property (assign,nonatomic) long long debuggableType; 
@property (nonatomic,copy) NSString * targetPlatformName; 
@property (nonatomic,copy) NSString * targetBuildVersion; 
@property (nonatomic,copy) NSString * targetProductVersion; 
@property (assign,nonatomic) BOOL targetIsSimulator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Object*)_apiObject;
-(long long)debuggableType;
-(void)setDebuggableType:(long long)arg1 ;
-(NSString *)targetPlatformName;
-(void)setTargetPlatformName:(NSString *)arg1 ;
-(NSString *)targetBuildVersion;
-(void)setTargetBuildVersion:(NSString *)arg1 ;
-(NSString *)targetProductVersion;
-(void)setTargetProductVersion:(NSString *)arg1 ;
-(BOOL)targetIsSimulator;
-(void)setTargetIsSimulator:(BOOL)arg1 ;
@end
