/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface CRTextRecognizerModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _output_label_prob_map;

}

@property (nonatomic,retain) MLMultiArray * output_label_prob_map;              //@synthesize output_label_prob_map=_output_label_prob_map - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithOutput_label_prob_map:(id)arg1 ;
-(MLMultiArray *)output_label_prob_map;
-(void)setOutput_label_prob_map:(MLMultiArray *)arg1 ;
@end
