/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, TableViewManager;

@interface RecommendationActionController : NSObject {

	NSString* sectionIdentifier;
	NSString* actionKey;
	TableViewManager* tableManager;

}

@property (nonatomic,retain) NSString * sectionIdentifier; 
@property (nonatomic,retain) NSString * actionKey; 
@property (assign,nonatomic) TableViewManager * tableManager; 
+(id)recommendationActionControllerWithTableManager:(id)arg1 andAssistantUIViewController:(id)arg2 ;
-(NSString *)sectionIdentifier;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(NSString *)actionKey;
-(void)setActionKey:(NSString *)arg1 ;
-(TableViewManager *)tableManager;
-(BOOL)isPrimaryRecommendation;
-(id)getSectionInfoWithLongStrings:(BOOL)arg1 ;
-(void)selectPrimaryRecommendation;
-(void)setTableManager:(TableViewManager *)arg1 ;
@end

