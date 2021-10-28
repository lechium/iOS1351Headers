/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Silex/Silex-Structs.h>
@class NSString, NSMutableArray;

@interface SXTextStyleAttributesMap : NSObject {

	NSString* _string;
	NSMutableArray* _attributes;

}

@property (nonatomic,readonly) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSMutableArray * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(NSString *)string;
-(id)description;
-(id)initWithString:(id)arg1 ;
-(NSMutableArray *)attributes;
-(id)attributedString;
-(void)addAttributes:(id)arg1 ;
-(id)attributesMapWithAttributesForRange:(NSRange)arg1 ;
@end
