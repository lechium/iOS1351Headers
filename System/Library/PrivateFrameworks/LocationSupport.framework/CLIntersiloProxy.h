/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProxy.h>

@protocol CLIntersiloProxyDelegateProtocol;
@class CLSilo;

@interface CLIntersiloProxy : NSProxy {

	id<CLIntersiloProxyDelegateProtocol> _delegate;
	CLSilo* _delegateSilo;

}

@property (nonatomic,__weak,readonly) id<CLIntersiloProxyDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) CLSilo * delegateSilo;                                      //@synthesize delegateSilo=_delegateSilo - In the implementation block
+(Class)initiatorRepresentingClass;
+(Class)recipientRepresentingClass;
+(id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 recipientName:(id)arg3 ;
-(id)init;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<CLIntersiloProxyDelegateProtocol>)delegate;
-(id)peer;
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2 ;
-(void)setDelegateEntityName:(const char*)arg1 ;
-(id)initWithDelegateObject:(id)arg1 delegateSilo:(id)arg2 ;
-(CLSilo *)delegateSilo;
-(BOOL)offsiloHandleInvocation:(id)arg1 selectorInfo:(id)arg2 peer:(id)arg3 ;
@end

