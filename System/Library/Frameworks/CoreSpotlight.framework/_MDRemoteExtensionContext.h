/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpotlight/_MDExtensionContext.h>
#import <libobjc.A.dylib/_MDRemoteExtensionContextProtocol.h>

@class CSIndexExtensionRequestHandler, NSString;

@interface _MDRemoteExtensionContext : _MDExtensionContext <_MDRemoteExtensionContextProtocol> {

	CSIndexExtensionRequestHandler* _requestHandler;

}

@property (nonatomic,retain) CSIndexExtensionRequestHandler * requestHandler;              //@synthesize requestHandler=_requestHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(CSIndexExtensionRequestHandler *)requestHandler;
-(void)setRequestHandler:(CSIndexExtensionRequestHandler *)arg1 ;
-(id)hostContext;
-(void)getLastUpdateTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
@end

