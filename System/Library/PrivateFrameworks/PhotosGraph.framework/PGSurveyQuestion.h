/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGQuestion.h>

@class NSString, NSDictionary;

@interface PGSurveyQuestion : NSObject <PGQuestion> {

	unsigned short state;
	NSDictionary* additionalInfo;
	NSString* entityIdentifier;
	double localFactoryScore;
	double score;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short entityType; 
@property (nonatomic,readonly) unsigned short displayType; 
@property (nonatomic,readonly) double localFactoryScore; 
@property (assign,nonatomic) double score; 
@property (nonatomic,readonly) NSDictionary * additionalInfo; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned short)type;
-(unsigned short)state;
-(void)remove;
-(double)score;
-(void)setScore:(double)arg1 ;
-(unsigned short)displayType;
-(NSDictionary *)additionalInfo;
-(NSString *)entityIdentifier;
-(unsigned short)entityType;
-(void)persistWithCreationDate:(id)arg1 ;
-(double)localFactoryScore;
-(BOOL)isEquivalentToPersistedQuestion:(id)arg1 ;
-(BOOL)isEquivalentToQuestion:(id)arg1 ;
@end

