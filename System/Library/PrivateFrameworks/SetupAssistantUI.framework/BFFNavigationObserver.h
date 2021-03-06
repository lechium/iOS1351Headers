/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BFFNavigationControllerDelegate;
@interface BFFNavigationObserver : NSObject {

	id<BFFNavigationControllerDelegate> _observer;

}

@property (assign,nonatomic,__weak) id<BFFNavigationControllerDelegate> observer;              //@synthesize observer=_observer - In the implementation block
+(id)observerWithObserver:(id)arg1 ;
-(id<BFFNavigationControllerDelegate>)observer;
-(void)setObserver:(id<BFFNavigationControllerDelegate>)arg1 ;
@end

