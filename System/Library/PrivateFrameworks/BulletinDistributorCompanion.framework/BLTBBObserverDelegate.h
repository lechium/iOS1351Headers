/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BBObserverDelegate.h>

@protocol BBObserverDelegate, BLTBBObserverDelegateDelegate;
@class NSString;

@interface BLTBBObserverDelegate : NSObject <BBObserverDelegate> {

	id<BBObserverDelegate> _actualDelegate;
	id<BLTBBObserverDelegateDelegate> _delegate;

}

@property (__weak) id<BBObserverDelegate> actualDelegate;                                    //@synthesize actualDelegate=_actualDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<BLTBBObserverDelegateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<BLTBBObserverDelegateDelegate>)delegate;
-(void)setDelegate:(id<BLTBBObserverDelegateDelegate>)arg1 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(id<BBObserverDelegate>)actualDelegate;
-(void)setActualDelegate:(id<BBObserverDelegate>)arg1 ;
@end

