/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class SGStringPreprocessingTransformer, SGStringLabelingTransformer, NSString;

@interface SGTextLabelTransformer : NSObject <PMLTransformerProtocol> {

	SGStringPreprocessingTransformer* _preprocessor;
	SGStringLabelingTransformer* _labeler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_preprocessedLabelsWithLabels:(id)arg1 andPreprocessor:(id)arg2 ;
+(id)withMethods:(id)arg1 withLabelStrings:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithMethods:(id)arg1 withLabelStrings:(id)arg2 ;
-(id)initWithPreprocessor:(id)arg1 labeler:(id)arg2 ;
-(BOOL)isEqualToTextLabelTransformer:(id)arg1 ;
@end
