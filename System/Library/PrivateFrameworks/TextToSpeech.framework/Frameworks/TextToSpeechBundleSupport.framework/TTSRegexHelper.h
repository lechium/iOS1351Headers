/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <TextToSpeechBundleSupport/TextToSpeechBundleSupport-Structs.h>
@class NSMutableArray, NSMutableSet, NSObject, NSMutableDictionary, NSRegularExpression;

@interface TTSRegexHelper : NSObject {

	vector<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >, std::__1::allocator<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > > >* _boostRegexes;
	NSMutableArray* _nsRegexes;
	NSMutableSet* _duplicateChecker;
	NSObject*<OS_dispatch_queue> _ttsRegexQueue;
	NSMutableDictionary* _nsRules;
	NSMutableDictionary* _boostRules;
	NSRegularExpression* _escapeStripper;
	int _regexStyle;

}

@property (assign,nonatomic) int regexStyle;              //@synthesize regexStyle=_regexStyle - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setRegexStyle:(int)arg1 ;
-(void)_addRules:(id)arg1 ;
-(int)regexStyle;
-(void)_addNSRule:(id)arg1 ruleApplication:(id)arg2 caseInsensitive:(BOOL)arg3 ;
-(id)_boostApplyRulesForText:(id)arg1 rangeAdjustments:(id)arg2 ;
-(id)_nsApplyRulesForText:(id)arg1 rangeAdjustments:(id)arg2 ;
-(id)_calculatedUTF8Offsets:(id)arg1 ;
-(id)_boostApplyMatches:(id)arg1 rangeAdjustments:(id)arg2 text:(id)arg3 logging:(id)arg4 ;
-(id)_processReplacementStringForSpecialCharacters:(id)arg1 ;
-(void)addRules:(id)arg1 ;
-(id)applyRulesForText:(id)arg1 rangeAdjustments:(id)arg2 ;
-(id)regexRules;
-(id)boostRules;
-(BOOL)hasStoredRules;
-(void)resetStoredRules;
@end

