/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSUUID;

@interface CCUIAnimationBatch : NSObject {

	NSMutableDictionary* _animationsByParameters;
	NSUUID* _UUID;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
-(id)init;
-(NSUUID *)UUID;
-(void)addAnimation:(id)arg1 ;
-(void)iterateAnimationsWithBlock:(/*^block*/id)arg1 ;
-(void)iterateAnimationsOfType:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
@end
