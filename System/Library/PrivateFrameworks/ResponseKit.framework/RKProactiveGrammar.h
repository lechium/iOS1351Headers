/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RKProactiveGrammar : NSObject
+(id)sharedManager;
+(id)getOTAPathForRKBundle:(id)arg1 ;
+(id)getEntities:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyAttributedTokenForText:(id)arg1 forLanguage:(id)arg2 ;
-(void*)getLanguageModel:(id)arg1 ;
-(id)getEquivalenceClass:(id)arg1 ;
-(id)copyAttributedTokenForText:(id)arg1 forLanguageModel:(void*)arg2 withLanguageCode:(id)arg3 ;
-(void*)chineseTokenizer;
@end

