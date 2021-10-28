/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailFoundation/EFObservable.h>

@protocol EFObservable;
@class NSLock;

@interface _EFDistinctUntilChangedObservable : EFObservable {

	id<EFObservable> _observable;
	id _lastObservedResult;
	NSLock* _lock;

}
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 ;
-(BOOL)_isLastResultDistinctFromResult:(id)arg1 ;
@end
