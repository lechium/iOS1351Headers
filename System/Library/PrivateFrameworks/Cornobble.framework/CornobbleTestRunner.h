/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Cornobble.framework/Cornobble
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Cornobble/CornobbleTestRunnerProtocol.h>

@class NSString;

@interface CornobbleTestRunner : NSObject <CornobbleTestRunnerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 ;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 canFlick:(BOOL)arg4 ;
+(void)performFingerOnGlassScrollWithParameters:(id)arg1 ;
+(void)performTestNamed:(id)arg1 withEventStream:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 canFlick:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)performTestNamed:(id)arg1 usingComposer:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)performTestNamed:(id)arg1 withRecapCommandString:(id)arg2 onView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)performTestNamed:(id)arg1 withRecapFile:(id)arg2 onView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(BOOL)isCornobbleAvailable;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 ;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 pages:(unsigned long long)arg4 direction:(long long)arg5 canFlick:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 pages:(unsigned long long)arg4 canFlick:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)performTestNamed:(id)arg1 usingComposer:(/*^block*/id)arg2 ;
+(void)performTestNamed:(id)arg1 withEventStream:(id)arg2 ;
+(void)performTestNamed:(id)arg1 withRecapCommandString:(id)arg2 onView:(id)arg3 ;
+(void)performTestNamed:(id)arg1 withRecapFile:(id)arg2 onView:(id)arg3 ;
+(void)performFingerOnGlassScrollTestNamed:(id)arg1 withParameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
