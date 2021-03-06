/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXHost.h>

@class NSExtensionContext, NSString;

@interface SXHostExtension : NSObject <SXHost> {

	BOOL _isActive;
	NSExtensionContext* _extensionContext;

}

@property (assign,nonatomic,__weak) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                             //@synthesize isActive=_isActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL active; 
-(BOOL)isActive;
-(BOOL)active;
-(NSExtensionContext *)extensionContext;
-(BOOL)canOpenURL:(id)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(id)initWithExtensionContext:(id)arg1 ;
-(void)setExtensionContext:(NSExtensionContext *)arg1 ;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)extensionHostDidBecomeActive:(id)arg1 ;
-(void)extensionHostDidEnterBackground:(id)arg1 ;
-(void)extensionHostWillEnterForeground:(id)arg1 ;
@end

