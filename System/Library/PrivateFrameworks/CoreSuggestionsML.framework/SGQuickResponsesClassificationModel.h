/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsML/CoreSuggestionsML-Structs.h>
#import <CoreSuggestionsML/SGQuickResponsesModel.h>

@interface SGQuickResponsesClassificationModel : SGQuickResponsesModel
+(id)newTransformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 ;
+(id)newTransformerInstanceForLanguage:(id)arg1 withDictionary:(id)arg2 withSeed:(unsigned long long)arg3 forMode:(unsigned long long)arg4 ;
+(id)featurizerWithMethods:(id)arg1 bucketSize:(unsigned long long)arg2 characterNGramRange:(NSRange)arg3 tokenNGramRange:(NSRange)arg4 ;
+(id)newTransformerInstanceForConfig:(id)arg1 seed:(unsigned long long)arg2 useSeed:(BOOL)arg3 ;
@end
