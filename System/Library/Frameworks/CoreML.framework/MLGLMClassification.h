/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLClassifier.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSMutableArray, NSString;

@interface MLGLMClassification : MLClassifier <MLModelSpecificationLoader> {

	vector<double, std::__1::allocator<double> >* intercept;
	vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >* weights;
	NSMutableArray* classLabels;
	long long classType;
	int postEvalTransForm;
	int classEncoding;
	shared_ptr<CoreML::Specification::Model>* m_spec;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)classify:(id)arg1 error:(id*)arg2 ;
-(BOOL)calculateClassProbability:(double*)arg1 input:(id)arg2 error:(id*)arg3 ;
-(id)classify:(id)arg1 topK:(unsigned long long)arg2 error:(id*)arg3 ;
@end

