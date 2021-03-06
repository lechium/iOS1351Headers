/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable, NSArray;

@interface SBSwitcherDemoFilteringController : NSObject {

	NSHashTable* _observers;
	NSArray* _hiddenApplicationBundleIDs;

}

@property (nonatomic,copy) NSArray * hiddenApplicationBundleIDs;              //@synthesize hiddenApplicationBundleIDs=_hiddenApplicationBundleIDs - In the implementation block
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setHiddenApplicationBundleIDs:(NSArray *)arg1 ;
-(NSArray *)hiddenApplicationBundleIDs;
@end

