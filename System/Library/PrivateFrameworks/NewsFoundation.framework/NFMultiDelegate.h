/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable, Protocol;

@interface NFMultiDelegate : NSObject {

	NSHashTable* _children;
	Protocol* _delegateProtocol;

}

@property (nonatomic,readonly) NSHashTable * children;                   //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) Protocol * delegateProtocol;              //@synthesize delegateProtocol=_delegateProtocol - In the implementation block
@property (nonatomic,readonly) id delegate; 
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)delegate;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSHashTable *)children;
-(Protocol *)delegateProtocol;
-(id)initWithDelegate:(id)arg1 delegateProtocol:(id)arg2 ;
-(void)replaceDelegate:(id)arg1 withDelegate:(id)arg2 ;
@end

