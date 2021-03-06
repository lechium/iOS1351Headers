/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface SBInAppStatusBarHiddenAssertion : NSObject <BSInvalidatable> {

	NSString* _identifier;
	NSString* _reason;
	/*^block*/id _invalidationBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
-(void)invalidateWithAnimation:(BOOL)arg1 ;
@end

