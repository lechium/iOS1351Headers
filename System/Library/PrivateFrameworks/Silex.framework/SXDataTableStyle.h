/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXJSONObject.h>

@class SXDataTableBorderSides, SXDataTableRowStyle, SXDataTableColumnStyle, SXDataTableCellStyle;

@interface SXDataTableStyle : SXJSONObject

@property (nonatomic,readonly) SXDataTableBorderSides * border; 
@property (nonatomic,readonly) SXDataTableRowStyle * headerRows; 
@property (nonatomic,readonly) SXDataTableColumnStyle * headerColumns; 
@property (nonatomic,readonly) SXDataTableCellStyle * headerCells; 
@property (nonatomic,readonly) SXDataTableRowStyle * rows; 
@property (nonatomic,readonly) SXDataTableColumnStyle * columns; 
@property (nonatomic,readonly) SXDataTableCellStyle * cells; 
-(SXDataTableCellStyle *)cells;
-(SXDataTableColumnStyle *)columns;
-(SXDataTableRowStyle *)rows;
-(SXDataTableCellStyle *)headerCells;
-(SXDataTableColumnStyle *)headerColumns;
-(SXDataTableRowStyle *)headerRows;
-(SXDataTableBorderSides *)border;
@end

