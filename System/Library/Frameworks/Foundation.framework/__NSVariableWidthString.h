/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSDictionary, NSString;

@interface __NSVariableWidthString : NSString {

	NSDictionary* _variants;
	NSString* _defaultString;

}

@property (readonly) unsigned long long length; 
-(void)dealloc;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)formatConfiguration;
-(id)initWithWidthContexts:(id)arg1 ;
-(id)initWithString:(id)arg1 widthVariants:(id)arg2 ;
-(id)initWithWidthVariants:(id)arg1 ;
-(id)variantFittingPresentationWidth:(long long)arg1 ;
@end

