/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CLSPerson, NSString, NSArray, NSDate;

@interface PGPotentialRecentPersonCentricSuggestion : NSObject {

	CLSPerson* _person;
	NSString* _personLocalIdentifier;
	NSArray* _assets;
	NSDate* _notSeenSinceDate;

}

@property (nonatomic,readonly) CLSPerson * person;                                //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) NSString * personLocalIdentifier;                  //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                                  //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) NSDate * notSeenSinceDate;                         //@synthesize notSeenSinceDate=_notSeenSinceDate - In the implementation block
@property (nonatomic,readonly) unsigned long long relationshipScore; 
-(NSArray *)assets;
-(NSString *)personLocalIdentifier;
-(CLSPerson *)person;
-(NSDate *)notSeenSinceDate;
-(id)initWithCLSPerson:(id)arg1 assets:(id)arg2 ;
-(id)initWithPersonLocalIdentifier:(id)arg1 assets:(id)arg2 notSeenSinceDate:(id)arg3 ;
-(unsigned long long)relationshipScore;
@end
