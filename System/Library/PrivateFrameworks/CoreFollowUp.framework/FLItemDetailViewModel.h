/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FLViewModel.h>

@class NSArray, NSSet, FLFollowUpController, FLItemChangeObserver, NSString;

@interface FLItemDetailViewModel : NSObject <FLViewModel> {

	NSArray* _originalItems;
	NSSet* _originalItemIdentifiers;
	FLFollowUpController* _controller;
	FLItemChangeObserver* _observer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)allPendingItems;
-(void)setItemChangeHandler:(/*^block*/id)arg1 ;
@end
