/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLNearestNeighborsIndex.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MLNearestNeighborsLinearIndex : NSObject <MLNearestNeighborsIndex, NSSecureCoding> {

	vector<float, std::__1::allocator<float> >* vData;
	vector<float, std::__1::allocator<float> >* vDataL2Squared;
	unsigned long long _numDataPoints;
	unsigned long long _numDimensions;

}

@property (assign,nonatomic) unsigned long long numDataPoints;              //@synthesize numDataPoints=_numDataPoints - In the implementation block
@property (assign,nonatomic) unsigned long long numDimensions;              //@synthesize numDimensions=_numDimensions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > >*)findNearestNeighbors:(unsigned long long)arg1 toQueryPoint:(const vector<float, std::__1::allocator<float> >*)arg2 ;
-(BOOL)updateWithData:(const vector<float, std::__1::allocator<float> >*)arg1 error:(id*)arg2 ;
-(unsigned long long)dataPointCount;
-(id)initWithDataset:(vector<float, std::__1::allocator<float> >*)arg1 numberOfDimensions:(unsigned long long)arg2 ;
-(unsigned long long)numDataPoints;
-(void)setNumDataPoints:(unsigned long long)arg1 ;
-(unsigned long long)numDimensions;
-(void)setNumDimensions:(unsigned long long)arg1 ;
@end

