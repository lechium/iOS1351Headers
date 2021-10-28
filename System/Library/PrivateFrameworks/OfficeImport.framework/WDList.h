/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WDDocument, NSMutableArray;

@interface WDList : NSObject {

	WDDocument* mDocument;
	int mListId;
	int mListDefinitionId;
	NSMutableArray* mLevelOverrides;

}

@property (nonatomic,readonly) int listId; 
@property (nonatomic,readonly) int listDefinitionId; 
-(id)description;
-(int)listId;
-(int)listDefinitionId;
-(id)levelOverrideForLevel:(unsigned char)arg1 ;
-(unsigned long long)levelOverrideCount;
-(id)levelOverrideAt:(unsigned long long)arg1 ;
-(void)removeLevelOverride:(id)arg1 ;
-(id)levelOverrides;
-(BOOL)isAnyListLevelOverridden;
-(id)initWithDocument:(id)arg1 listId:(int)arg2 listDefinitionId:(int)arg3 ;
-(id)addLevelOverrideWithLevel:(unsigned char)arg1 ;
@end
