/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSHashTable, UIWindow, NSMutableArray, NSString;

@interface SBStatusBarManager : NSObject <BSDescriptionProviding> {

	NSHashTable* _statusBars;
	UIWindow* _recycledStatusBarsContainerWindow;
	NSMutableArray* _recycledStatusBars;
	NSHashTable* _hideStatusBarAssertions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)handleStatusBarTapWithEvent:(id)arg1 ;
-(id)createStatusBarWithReason:(id)arg1 withFrame:(CGRect)arg2 ;
-(BOOL)isFrontMostStatusBarHidden;
-(id)frontMostStatusBarStyleRequest;
-(void)recycleStatusBar:(id)arg1 ;
-(id)createStatusBarWithReason:(id)arg1 ;
-(id)acquireHideFrontMostStatusBarAssertionForReason:(id)arg1 ;
-(id)trailingStatusBarStyleRequest;
-(void)_removeStatusBarContainer:(id)arg1 ;
@end

