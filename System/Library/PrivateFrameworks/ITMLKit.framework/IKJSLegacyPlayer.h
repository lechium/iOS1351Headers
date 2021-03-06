/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSLegacyPlayer.h>

@protocol IKJSLegacyPlayer <JSExport>
@end

#import <libobjc.A.dylib/_IKJSLegacyPlayerProxy.h>
#import <libobjc.A.dylib/_IKJSLegacyPlayer.h>

@protocol IKJSPlayerAppBridge;
@class IKDOMElement, NSString;

@interface IKJSLegacyPlayer : IKJSObject <NSObject, IKJSLegacyPlayer, _IKJSLegacyPlayerProxy, _IKJSLegacyPlayer> {

	id<IKJSPlayerAppBridge> _appBridge;

}

@property (assign,nonatomic,__weak) id<IKJSPlayerAppBridge> appBridge;                   //@synthesize appBridge=_appBridge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) IKDOMElement * currentAVMediaElement; 
-(void)setAppBridge:(id<IKJSPlayerAppBridge>)arg1 ;
-(id<IKJSPlayerAppBridge>)appBridge;
-(IKDOMElement *)currentAVMediaElement;
-(id)asPrivateIKJSLegacyPlayer;
@end

