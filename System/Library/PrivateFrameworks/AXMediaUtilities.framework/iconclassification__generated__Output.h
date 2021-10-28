/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSString, NSSet;

@interface iconclassification__generated__Output : NSObject <MLFeatureProvider> {

	NSDictionary* _output1;
	NSString* _classLabel;

}

@property (nonatomic,retain) NSDictionary * output1;              //@synthesize output1=_output1 - In the implementation block
@property (nonatomic,retain) NSString * classLabel;               //@synthesize classLabel=_classLabel - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSString *)classLabel;
-(NSDictionary *)output1;
-(id)initWithOutput1:(id)arg1 classLabel:(id)arg2 ;
-(void)setOutput1:(NSDictionary *)arg1 ;
-(void)setClassLabel:(NSString *)arg1 ;
@end
