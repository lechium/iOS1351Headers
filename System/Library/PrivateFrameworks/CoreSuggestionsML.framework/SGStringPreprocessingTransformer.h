/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSArray, NSMethodSignature, NSString;

@interface SGStringPreprocessingTransformer : NSObject <PMLTransformerProtocol> {

	NSArray* _methodNames;
	NSArray* _methodValues;
	NSMethodSignature* _methodSignatureNoValue;
	NSMethodSignature* _methodSignatureWithValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withMethods:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithMethods:(id)arg1 ;
-(id)transformBatch:(id)arg1 ;
-(SEL)selectorForMethod:(id)arg1 preprocessor:(id)arg2 ;
-(void)applySelector:(SEL)arg1 preprocesor:(id)arg2 string:(id)arg3 value:(id)arg4 ;
-(BOOL)isEqualToStringPreprocessingTransformer:(id)arg1 ;
@end

