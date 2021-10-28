/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PPScoredItem;

@interface PPCoalescedScoredNamedEntity : NSObject {

	unsigned short _occurrencesInSource;
	PPScoredItem* _scoredNamedEntity;

}

@property (nonatomic,readonly) PPScoredItem * scoredNamedEntity;                //@synthesize scoredNamedEntity=_scoredNamedEntity - In the implementation block
@property (nonatomic,readonly) unsigned short occurrencesInSource;              //@synthesize occurrencesInSource=_occurrencesInSource - In the implementation block
-(id)init;
-(unsigned short)occurrencesInSource;
-(id)initWithScoredNamedEntity:(id)arg1 occurrencesInSource:(unsigned short)arg2 ;
-(PPScoredItem *)scoredNamedEntity;
@end
