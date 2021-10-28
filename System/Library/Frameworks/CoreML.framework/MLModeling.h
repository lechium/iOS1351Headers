/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MLModelDescription, MLModelInterface, MLModelMetadata;


@protocol MLModeling
@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
@required
-(MLModelInterface *)interface;
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
-(MLModelMetadata *)metadata;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(void)setModelDescription:(id)arg1;

@end
