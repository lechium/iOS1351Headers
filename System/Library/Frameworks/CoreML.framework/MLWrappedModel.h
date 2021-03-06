/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/MLModel.h>

@class MLModel, NSString;

@interface MLWrappedModel : MLModel {

	MLModel* _innerModel;
	NSString* _reason;

}

@property (retain) MLModel * innerModel;                     //@synthesize innerModel=_innerModel - In the implementation block
@property (nonatomic,retain) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(NSString *)reason;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(void)setReason:(NSString *)arg1 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithInnerModel:(id)arg1 ;
-(void)clearInnerModelWithReason:(id)arg1 ;
-(MLModel *)innerModel;
-(void)setInnerModel:(MLModel *)arg1 ;
@end

