/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TLKGridLayoutManager, NSMapTable;

@interface SearchUIGridLayoutManager : NSObject {

	BOOL _isCompactTable;
	TLKGridLayoutManager* _gridManager;
	NSMapTable* _tableMapping;

}

@property (nonatomic,retain) NSMapTable * tableMapping;                       //@synthesize tableMapping=_tableMapping - In the implementation block
@property (nonatomic,retain) TLKGridLayoutManager * gridManager;              //@synthesize gridManager=_gridManager - In the implementation block
@property (assign,nonatomic) BOOL isCompactTable;                             //@synthesize isCompactTable=_isCompactTable - In the implementation block
+(id)alignmentsForSFHeaderRow:(id)arg1 ;
+(id)richTextForRichDataItems:(id)arg1 ;
+(id)richTextForDataItems:(id)arg1 ;
+(BOOL)shouldHideViewForRichData:(id)arg1 ;
-(id)initWithHeaderSection:(id)arg1 dataSections:(id)arg2 ;
-(void)setTableMapping:(NSMapTable *)arg1 ;
-(NSMapTable *)tableMapping;
-(BOOL)computeCompactTableForSections:(id)arg1 ;
-(void)setIsCompactTable:(BOOL)arg1 ;
-(void)setGridManager:(TLKGridLayoutManager *)arg1 ;
-(id)tableRowForTableRowCardSection:(id)arg1 ;
-(TLKGridLayoutManager *)gridManager;
-(BOOL)isCompactTable;
@end

