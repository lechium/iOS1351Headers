/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBWindowLayoutStrategy.h>

@class NSString;

@interface SBMainDisplayWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy> {

	BOOL _clip;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)noClipStrategy;
+(id)_strategyWithClipping:(BOOL)arg1 ;
+(id)clipStrategy;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(CGRect)frameWithInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldClipForWindow:(id)arg1 ;
@end
