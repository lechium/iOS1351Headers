/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEFilterExtensionProviderContext.h>
#import <libobjc.A.dylib/NEFilterControlExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterControlExtensionProviderHostProtocol.h>

@class NSString;

@interface NEFilterControlExtensionProviderContext : NEFilterExtensionProviderContext <NEFilterControlExtensionProviderProtocol, NEFilterControlExtensionProviderHostProtocol> {

	BOOL _observing;

}

@property (assign) BOOL observing;                                  //@synthesize observing=_observing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)extensionPoint;
-(void)stopObserving;
-(void)dispose;
-(void)setObserving:(BOOL)arg1 ;
-(BOOL)observing;
-(void)startFilterWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleNewFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleReport:(id)arg1 ;
-(void)notifyRulesChanged;
-(void)provideRemediationMap:(id)arg1 ;
-(void)provideURLAppendStringMap:(id)arg1 ;
@end

