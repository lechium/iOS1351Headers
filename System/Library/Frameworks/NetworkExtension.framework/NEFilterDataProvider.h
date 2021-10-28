/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEFilterProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSString;

@interface NEFilterDataProvider : NEFilterProvider <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)handleNewFlow:(id)arg1 ;
-(void)handleRulesChanged;
-(void)applySettings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)handleInboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3 ;
-(id)handleOutboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3 ;
-(id)handleInboundDataCompleteForFlow:(id)arg1 ;
-(id)handleOutboundDataCompleteForFlow:(id)arg1 ;
-(id)handleRemediationForFlow:(id)arg1 ;
-(void)resumeFlow:(id)arg1 withVerdict:(id)arg2 ;
-(void)updateFlow:(id)arg1 usingVerdict:(id)arg2 forDirection:(long long)arg3 ;
@end
