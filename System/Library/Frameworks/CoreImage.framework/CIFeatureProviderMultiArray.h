/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSString, NSSet;

@interface CIFeatureProviderMultiArray : NSObject <MLFeatureProvider> {

	MLMultiArray* multiArray;
	NSString* name;

}

@property (nonatomic,retain) MLMultiArray * multiArray; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setMultiArray:(MLMultiArray *)arg1 ;
-(id)initWithName:(id)arg1 array:(id)arg2 ;
-(MLMultiArray *)multiArray;
@end

