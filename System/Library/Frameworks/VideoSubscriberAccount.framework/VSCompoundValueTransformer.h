/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSValueTransformer.h>

@class NSArray;

@interface VSCompoundValueTransformer : NSValueTransformer {

	NSArray* _valueTransformers;

}

@property (nonatomic,copy) NSArray * valueTransformers;              //@synthesize valueTransformers=_valueTransformers - In the implementation block
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(void)setValueTransformers:(NSArray *)arg1 ;
-(NSArray *)valueTransformers;
@end

