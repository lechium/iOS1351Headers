/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BSInvalidatable;
@class NSArray;

@interface SBMainDisplayInterfaceOrientationAggregator : NSObject {

	id<BSInvalidatable> _stateCaptureHandle;

}

@property (nonatomic,readonly) long long activeInterfaceOrientation; 
@property (nonatomic,retain,readonly) NSArray * interfaceOrientationSources; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)_layoutOrientation;
-(long long)activeInterfaceOrientation;
-(void)_sortSources:(id)arg1 ;
-(long long)activeInterfaceOrientationAtOrBelow:(double)arg1 ;
-(id)highestActiveInterfaceOrientationSourceBelow:(double)arg1 ;
-(id)highestActiveInterfaceOrientationSourceIgnoringSourcesAbove:(double)arg1 ;
-(NSArray *)interfaceOrientationSources;
-(id)_highestSourceAtOrBelow:(double)arg1 amongSources:(id)arg2 ;
-(long long)activeInterfaceOrientationBelow:(double)arg1 ;
-(id)highestActiveInterfaceOrientationSource;
@end
