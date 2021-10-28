/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class VNSaliencyImageObservation, NSArray;


@protocol PIStillReframeResult <NURenderResult>
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) VNSaliencyImageObservation * saliencyObservation; 
@property (nonatomic,copy,readonly) NSArray * ANODSubjects; 
@required
-(double)confidence;
-(CGRect)bounds;
-(VNSaliencyImageObservation *)saliencyObservation;
-(NSArray *)ANODSubjects;

@end
