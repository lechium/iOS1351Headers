/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSArray, NSMutableArray;

@interface PXImportSessionInfo : NSObject {

	BOOL _importComplete;
	BOOL _importStopped;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _itemsToImport;
	NSMutableArray* _importedItems;
	NSMutableArray* _errorItems;
	long long _completedItemsCount;

}

@property (nonatomic,retain) NSDate * startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                            //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * itemsToImport;                     //@synthesize itemsToImport=_itemsToImport - In the implementation block
@property (assign,nonatomic) BOOL importComplete;                         //@synthesize importComplete=_importComplete - In the implementation block
@property (assign,nonatomic) BOOL importStopped;                          //@synthesize importStopped=_importStopped - In the implementation block
@property (nonatomic,retain) NSMutableArray * importedItems;              //@synthesize importedItems=_importedItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * errorItems;                 //@synthesize errorItems=_errorItems - In the implementation block
@property (assign,nonatomic) long long completedItemsCount;               //@synthesize completedItemsCount=_completedItemsCount - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSArray *)itemsToImport;
-(void)setItemsToImport:(NSArray *)arg1 ;
-(BOOL)importComplete;
-(void)setImportComplete:(BOOL)arg1 ;
-(BOOL)importStopped;
-(void)setImportStopped:(BOOL)arg1 ;
-(NSMutableArray *)importedItems;
-(void)setImportedItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)errorItems;
-(void)setErrorItems:(NSMutableArray *)arg1 ;
-(long long)completedItemsCount;
-(void)setCompletedItemsCount:(long long)arg1 ;
@end
