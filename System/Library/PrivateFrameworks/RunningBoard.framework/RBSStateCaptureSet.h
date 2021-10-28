/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BSInvalidatable;
@class NSMutableSet, NSSet;

@interface RBSStateCaptureSet : NSObject {

	id<BSInvalidatable> _invalidatable;
	NSMutableSet* _stateCaptureSegments;

}

@property (nonatomic,copy,readonly) NSSet * itemsCopy; 
-(id)init;
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(NSSet *)itemsCopy;
@end
