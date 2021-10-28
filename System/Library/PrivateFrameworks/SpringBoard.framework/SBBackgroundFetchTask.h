/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SpringBoard/SpringBoard-Structs.h>
@class NSString, RBSAssertion;

@interface SBBackgroundFetchTask : NSObject {

	os_unfair_lock_s _lock;
	NSString* _bundleID;
	int _sequenceNumber;
	RBSAssertion* _lock_assertion;
	/*^block*/id _lock_completionHandler;
	BOOL _lock_finished;

}
+(int)_nextSequenceNumber;
-(void)dealloc;
-(id)description;
-(void)execute;
-(void)finishWithResult:(unsigned long long)arg1 ;
-(id)initForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end
