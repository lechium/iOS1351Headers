/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface AVPlayerMediaSelectionCriteria : NSObject {

	void* _criteriaInternal;

}

@property (nonatomic,readonly) NSArray * preferredLanguages; 
@property (nonatomic,readonly) NSArray * preferredMediaCharacteristics; 
@property (nonatomic,readonly) NSArray * principalMediaCharacteristics; 
-(id)init;
-(void)dealloc;
-(id)description;
-(NSArray *)preferredLanguages;
-(id)figDictionary;
-(id)initWithFigDictionary:(id)arg1 ;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 ;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 ;
-(NSArray *)principalMediaCharacteristics;
-(NSArray *)preferredMediaCharacteristics;
-(id)preferredMediaSubTypes;
-(id)precludedMediaSubTypes;
-(BOOL)preferMultichannelAudio;
-(BOOL)precludeMultichannelAudio;
-(id)initWithPrincipalMediaCharacteristics:(id)arg1 preferredLanguages:(id)arg2 preferredMediaCharacteristics:(id)arg3 ;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 preferMultichannelAudio:(BOOL)arg5 precludeMultichannelAudio:(BOOL)arg6 ;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 fallbackPreferredLanguages:(id)arg3 fallbackPreferredMediaCharacteristics:(id)arg4 captionDisplayType:(long long)arg5 ;
@end

