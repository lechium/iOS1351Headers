/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLProbabilityDictionary.h>

@interface MLInt64ProbabilityDictionary : MLProbabilityDictionary {

	map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >* _mapIntLabelToIndex;

}

@property (assign,nonatomic) map<unsigned long mapIntLabelToIndex;              //@synthesize mapIntLabelToIndex=_mapIntLabelToIndex - In the implementation block
+(id)probabilityDictionaryForInt64Labels:(id)arg1 ;
-(id)copy;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithIntLabels:(id)arg1 ;
-(map<unsigned long)mapIntLabelToIndex;
-(void)setMapIntLabelToIndex:(map<unsigned long)arg1 ;
@end
