/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVFragmentedAssetMinder.h>

@class NSArray;

@interface AVFragmentedMovieMinder : AVFragmentedAssetMinder

@property (assign,nonatomic) double mindingInterval; 
@property (nonatomic,readonly) NSArray * movies; 
+(id)fragmentedMovieMinderWithMovie:(id)arg1 mindingInterval:(double)arg2 ;
-(double)mindingInterval;
-(void)setMindingInterval:(double)arg1 ;
-(BOOL)_throwsWhenAlreadyMindedAssetIsAdded;
-(id)initWithMovie:(id)arg1 mindingInterval:(double)arg2 ;
-(NSArray *)movies;
-(void)addFragmentedMovie:(id)arg1 ;
-(void)removeFragmentedMovie:(id)arg1 ;
@end
