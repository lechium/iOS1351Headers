/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@class NSString, NSArray;

@interface MCTypeInput : MCKeyboardInput {

	NSString* _characters;
	NSArray* _nearbyKeys;

}

@property (nonatomic,copy,readonly) NSString * characters;              //@synthesize characters=_characters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * nearbyKeys;               //@synthesize nearbyKeys=_nearbyKeys - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)characters;
-(BOOL)canComposeNew:(id)arg1 ;
-(id)initWithCharacters:(id)arg1 nearbyKeys:(id)arg2 ;
-(NSArray *)nearbyKeys;
@end
