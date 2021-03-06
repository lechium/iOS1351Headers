/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AppleSpell;

@interface AXMSpellChecker : NSObject {

	AppleSpell* _spellChecker;

}

@property (nonatomic,retain) AppleSpell * spellChecker;              //@synthesize spellChecker=_spellChecker - In the implementation block
-(AppleSpell *)spellChecker;
-(void)correctSpellingInText:(id)arg1 withLanguages:(id)arg2 ;
-(BOOL)textContainsMisspelling:(id)arg1 withLanguages:(id)arg2 ;
-(void)setSpellChecker:(AppleSpell *)arg1 ;
@end

