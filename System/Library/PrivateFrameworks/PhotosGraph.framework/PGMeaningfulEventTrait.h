/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PGMeaningfulEventTrait : NSObject {

	double _minimumScore;

}

@property (assign,nonatomic) double minimumScore;                    //@synthesize minimumScore=_minimumScore - In the implementation block
@property (nonatomic,readonly) BOOL isMatchingRequired; 
@property (nonatomic,readonly) BOOL isActive; 
-(id)init;
-(id)debugDescription;
-(BOOL)isActive;
-(BOOL)isMatchingRequired;
-(double)minimumScore;
-(void)setMinimumScore:(double)arg1 ;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
@end

