/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PDBucket : NSObject {

	BOOL _hasInclusiveUpperBound;
	double _lowerInclusiveBound;
	double _upperBound;
	unsigned long long _count;
	NSString* _label;

}

@property (assign,nonatomic) double lowerInclusiveBound; 
@property (assign,nonatomic) double upperBound; 
@property (assign,nonatomic) BOOL hasInclusiveUpperBound; 
@property (assign,nonatomic) unsigned long long count; 
@property (nonatomic,retain) NSString * label; 
@property (assign,nonatomic) double lowerInclusiveBound;               //@synthesize lowerInclusiveBound=_lowerInclusiveBound - In the implementation block
@property (assign,nonatomic) double upperBound;                        //@synthesize upperBound=_upperBound - In the implementation block
@property (assign,nonatomic) BOOL hasInclusiveUpperBound;              //@synthesize hasInclusiveUpperBound=_hasInclusiveUpperBound - In the implementation block
@property (assign,nonatomic) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSString * label;                         //@synthesize label=_label - In the implementation block
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(double)upperBound;
-(void)setUpperBound:(double)arg1 ;
-(void)setLowerInclusiveBound:(double)arg1 ;
-(double)lowerInclusiveBound;
-(void)setHasInclusiveUpperBound:(BOOL)arg1 ;
-(BOOL)hasInclusiveUpperBound;
@end
